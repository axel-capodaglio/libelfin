#include "../elf/elf++.hh"

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
        if (argc != 2) {
                fprintf(stderr, "usage: %s elf-file\n", argv[0]);
                return 2;
        }

  /*      int fd = open(argv[1], O_RDONLY);
        if (fd < 0) {
                fprintf(stderr, "%s: %s\n", argv[1], strerror(errno));
                return 1;
        }*/

        elf::elf f(elf::create_mmap_loader(argv[1]));

        // dump sections
        int i = 0;
        printf("  [Nr] %-16s %-16s %-16s %s ",
            "Name", "Type", "Address", "Offset");
        printf("       %-16s %-16s %-15s %5s %4s %5s\n",
            "Size", "EntSize", "Flags", "Link", "Info", "Align");
        for (auto& sec : f.sections()) {
            auto& hdr = sec.get_hdr();
            printf("  [%2d] %-16s %-16s %016" PRIx64 " %08" PRIx64 " ", i++,
                sec.get_name().c_str(),
                to_string(hdr.type).c_str(),
                hdr.addr, hdr.offset);
            printf("       %016zx %016" PRIx64 " %-15s %5s %4d %5" PRIu64 "\n",
                sec.size(), hdr.entsize,
                to_string(hdr.flags).c_str(), to_string(hdr.link).c_str(),
                (int)hdr.info, hdr.addralign);
        }

        elf::symtab symtab;

        // dump symbols
        for (auto &sec : f.sections()) {
                if (sec.get_hdr().type != elf::sht::symtab && sec.get_hdr().type != elf::sht::dynsym)
                        continue;

                printf("Symbol table '%s':\n", sec.get_name().c_str());
                printf("%6s: %-16s %-5s %-7s %-7s %-5s %s\n",
                       "Num", "Value", "Size", "Type", "Binding", "Index",
                       "Name");
                int i = 0;
                symtab = sec.as_symtab();
                for (auto sym : symtab) {
                        auto &d = sym.get_data();
                        printf("%6d: %016" PRIx64 " %5" PRId64 " %-7s %-7s %5s %s\n",
                               i++, d.value, d.size,
                               to_string(d.type()).c_str(),
                               to_string(d.binding()).c_str(),
                               to_string(d.shnxd).c_str(),
                               sym.get_name().c_str());
                }
        }

        // dump relocs
        for (auto& sec : f.sections()) {
            if (sec.get_hdr().type != elf::sht::rel)
                continue;

            printf("Relocations REL '%s':\n", sec.get_name().c_str());
            printf("%6s: %-10s %-10s %-10s %-10s %s\n",
                "Num", "Offset", "Info", "Type", "Sym", "Name");
            int i = 0;
            auto rels = sec.get_rels();
            for (const auto& rel : rels) {
                elf::sym sym = symtab.get_sym(rel.sym_idx());

                printf("%6u) %10x %10x %10u %10u %s\n",
                    i++, rel.offset(), (uint32_t)rel.get_data().info, rel.rel_type(), rel.sym_idx(), sym.get_name().c_str());
            }
        }
        return 0;
}
