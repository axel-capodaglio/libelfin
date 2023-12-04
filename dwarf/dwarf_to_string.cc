#include "dwarf/internal.hh"
DWARFPP_BEGIN_NAMESPACE
std::string
to_string(section_type v)
{
        switch (v) {
        case section_type::abbrev: return "section_type::abbrev";
        case section_type::aranges: return "section_type::aranges";
        case section_type::frame: return "section_type::frame";
        case section_type::info: return "section_type::info";
        case section_type::line: return "section_type::line";
        case section_type::loc: return "section_type::loc";
        case section_type::macinfo: return "section_type::macinfo";
        case section_type::pubnames: return "section_type::pubnames";
        case section_type::pubtypes: return "section_type::pubtypes";
        case section_type::ranges: return "section_type::ranges";
        case section_type::str: return "section_type::str";
        case section_type::types: return "section_type::types";
        }
        return "(section_type)" + std::to_string((int)v);
}

std::string
to_string(value::type v)
{
        switch (v) {
        case value::type::invalid: return "value::type::invalid";
        case value::type::address: return "value::type::address";
        case value::type::block: return "value::type::block";
        case value::type::constant: return "value::type::constant";
        case value::type::uconstant: return "value::type::uconstant";
        case value::type::sconstant: return "value::type::sconstant";
        case value::type::exprloc: return "value::type::exprloc";
        case value::type::flag: return "value::type::flag";
        case value::type::line: return "value::type::line";
        case value::type::loclist: return "value::type::loclist";
        case value::type::mac: return "value::type::mac";
        case value::type::rangelist: return "value::type::rangelist";
        case value::type::reference: return "value::type::reference";
        case value::type::string: return "value::type::string";
        }
        return "(value::type)" + std::to_string((int)v);
}

std::string
to_string(expr_result::type v)
{
        switch (v) {
        case expr_result::type::address: return "expr_result::type::address";
        case expr_result::type::reg: return "expr_result::type::reg";
        case expr_result::type::literal: return "expr_result::type::literal";
        case expr_result::type::implicit: return "expr_result::type::implicit";
        case expr_result::type::empty: return "expr_result::type::empty";
        }
        return "(expr_result::type)" + std::to_string((int)v);
}

std::string
to_string(DW_TAG v)
{
        switch (v) {
        case DW_TAG::array_type: return "DW_TAG_array_type";
        case DW_TAG::class_type: return "DW_TAG_class_type";
        case DW_TAG::entry_point: return "DW_TAG_entry_point";
        case DW_TAG::enumeration_type: return "DW_TAG_enumeration_type";
        case DW_TAG::formal_parameter: return "DW_TAG_formal_parameter";
        case DW_TAG::imported_declaration: return "DW_TAG_imported_declaration";
        case DW_TAG::label: return "DW_TAG_label";
        case DW_TAG::lexical_block: return "DW_TAG_lexical_block";
        case DW_TAG::member: return "DW_TAG_member";
        case DW_TAG::pointer_type: return "DW_TAG_pointer_type";
        case DW_TAG::reference_type: return "DW_TAG_reference_type";
        case DW_TAG::compile_unit: return "DW_TAG_compile_unit";
        case DW_TAG::string_type: return "DW_TAG_string_type";
        case DW_TAG::structure_type: return "DW_TAG_structure_type";
        case DW_TAG::subroutine_type: return "DW_TAG_subroutine_type";
        case DW_TAG::typedef_: return "DW_TAG_typedef";
        case DW_TAG::union_type: return "DW_TAG_union_type";
        case DW_TAG::unspecified_parameters: return "DW_TAG_unspecified_parameters";
        case DW_TAG::variant: return "DW_TAG_variant";
        case DW_TAG::common_block: return "DW_TAG_common_block";
        case DW_TAG::common_inclusion: return "DW_TAG_common_inclusion";
        case DW_TAG::inheritance: return "DW_TAG_inheritance";
        case DW_TAG::inlined_subroutine: return "DW_TAG_inlined_subroutine";
        case DW_TAG::module: return "DW_TAG_module";
        case DW_TAG::ptr_to_member_type: return "DW_TAG_ptr_to_member_type";
        case DW_TAG::set_type: return "DW_TAG_set_type";
        case DW_TAG::subrange_type: return "DW_TAG_subrange_type";
        case DW_TAG::with_stmt: return "DW_TAG_with_stmt";
        case DW_TAG::access_declaration: return "DW_TAG_access_declaration";
        case DW_TAG::base_type: return "DW_TAG_base_type";
        case DW_TAG::catch_block: return "DW_TAG_catch_block";
        case DW_TAG::const_type: return "DW_TAG_const_type";
        case DW_TAG::constant: return "DW_TAG_constant";
        case DW_TAG::enumerator: return "DW_TAG_enumerator";
        case DW_TAG::file_type: return "DW_TAG_file_type";
        case DW_TAG::friend_: return "DW_TAG_friend";
        case DW_TAG::namelist: return "DW_TAG_namelist";
        case DW_TAG::namelist_item: return "DW_TAG_namelist_item";
        case DW_TAG::packed_type: return "DW_TAG_packed_type";
        case DW_TAG::subprogram: return "DW_TAG_subprogram";
        case DW_TAG::template_type_parameter: return "DW_TAG_template_type_parameter";
        case DW_TAG::template_value_parameter: return "DW_TAG_template_value_parameter";
        case DW_TAG::thrown_type: return "DW_TAG_thrown_type";
        case DW_TAG::try_block: return "DW_TAG_try_block";
        case DW_TAG::variant_part: return "DW_TAG_variant_part";
        case DW_TAG::variable: return "DW_TAG_variable";
        case DW_TAG::volatile_type: return "DW_TAG_volatile_type";
        case DW_TAG::dwarf_procedure: return "DW_TAG_dwarf_procedure";
        case DW_TAG::restrict_type: return "DW_TAG_restrict_type";
        case DW_TAG::interface_type: return "DW_TAG_interface_type";
        case DW_TAG::namespace_: return "DW_TAG_namespace";
        case DW_TAG::imported_module: return "DW_TAG_imported_module";
        case DW_TAG::unspecified_type: return "DW_TAG_unspecified_type";
        case DW_TAG::partial_unit: return "DW_TAG_partial_unit";
        case DW_TAG::imported_unit: return "DW_TAG_imported_unit";
        case DW_TAG::condition: return "DW_TAG_condition";
        case DW_TAG::shared_type: return "DW_TAG_shared_type";
        case DW_TAG::type_unit: return "DW_TAG_type_unit";
        case DW_TAG::rvalue_reference_type: return "DW_TAG_rvalue_reference_type";
        case DW_TAG::template_alias: return "DW_TAG_template_alias";
        case DW_TAG::lo_user: break;
        case DW_TAG::hi_user: break;
        }
        return "(DW_TAG)0x" + to_hex((int)v);
}

std::string
to_string(DW_CHILDREN v)
{
        switch (v) {
        case DW_CHILDREN::no: return "DW_CHILDREN_no";
        case DW_CHILDREN::yes: return "DW_CHILDREN_yes";
        }
        return "(DW_CHILDREN)0x" + to_hex((int)v);
}

std::string
to_string(DW_AT v)
{
        switch (v) {
        case DW_AT::sibling: return "DW_AT_sibling";
        case DW_AT::location: return "DW_AT_location";
        case DW_AT::name: return "DW_AT_name";
        case DW_AT::ordering: return "DW_AT_ordering";
        case DW_AT::byte_size: return "DW_AT_byte_size";
        case DW_AT::bit_offset: return "DW_AT_bit_offset";
        case DW_AT::bit_size: return "DW_AT_bit_size";
        case DW_AT::stmt_list: return "DW_AT_stmt_list";
        case DW_AT::low_pc: return "DW_AT_low_pc";
        case DW_AT::high_pc: return "DW_AT_high_pc";
        case DW_AT::language: return "DW_AT_language";
        case DW_AT::discr: return "DW_AT_discr";
        case DW_AT::discr_value: return "DW_AT_discr_value";
        case DW_AT::visibility: return "DW_AT_visibility";
        case DW_AT::import: return "DW_AT_import";
        case DW_AT::string_length: return "DW_AT_string_length";
        case DW_AT::common_reference: return "DW_AT_common_reference";
        case DW_AT::comp_dir: return "DW_AT_comp_dir";
        case DW_AT::const_value: return "DW_AT_const_value";
        case DW_AT::containing_type: return "DW_AT_containing_type";
        case DW_AT::default_value: return "DW_AT_default_value";
        case DW_AT::inline_: return "DW_AT_inline";
        case DW_AT::is_optional: return "DW_AT_is_optional";
        case DW_AT::lower_bound: return "DW_AT_lower_bound";
        case DW_AT::producer: return "DW_AT_producer";
        case DW_AT::prototyped: return "DW_AT_prototyped";
        case DW_AT::return_addr: return "DW_AT_return_addr";
        case DW_AT::start_scope: return "DW_AT_start_scope";
        case DW_AT::bit_stride: return "DW_AT_bit_stride";
        case DW_AT::upper_bound: return "DW_AT_upper_bound";
        case DW_AT::abstract_origin: return "DW_AT_abstract_origin";
        case DW_AT::accessibility: return "DW_AT_accessibility";
        case DW_AT::address_class: return "DW_AT_address_class";
        case DW_AT::artificial: return "DW_AT_artificial";
        case DW_AT::base_types: return "DW_AT_base_types";
        case DW_AT::calling_convention: return "DW_AT_calling_convention";
        case DW_AT::count: return "DW_AT_count";
        case DW_AT::data_member_location: return "DW_AT_data_member_location";
        case DW_AT::decl_column: return "DW_AT_decl_column";
        case DW_AT::decl_file: return "DW_AT_decl_file";
        case DW_AT::decl_line: return "DW_AT_decl_line";
        case DW_AT::declaration: return "DW_AT_declaration";
        case DW_AT::discr_list: return "DW_AT_discr_list";
        case DW_AT::encoding: return "DW_AT_encoding";
        case DW_AT::external: return "DW_AT_external";
        case DW_AT::frame_base: return "DW_AT_frame_base";
        case DW_AT::friend_: return "DW_AT_friend";
        case DW_AT::identifier_case: return "DW_AT_identifier_case";
        case DW_AT::macro_info: return "DW_AT_macro_info";
        case DW_AT::namelist_item: return "DW_AT_namelist_item";
        case DW_AT::priority: return "DW_AT_priority";
        case DW_AT::segment: return "DW_AT_segment";
        case DW_AT::specification: return "DW_AT_specification";
        case DW_AT::static_link: return "DW_AT_static_link";
        case DW_AT::type: return "DW_AT_type";
        case DW_AT::use_location: return "DW_AT_use_location";
        case DW_AT::variable_parameter: return "DW_AT_variable_parameter";
        case DW_AT::virtuality: return "DW_AT_virtuality";
        case DW_AT::vtable_elem_location: return "DW_AT_vtable_elem_location";
        case DW_AT::allocated: return "DW_AT_allocated";
        case DW_AT::associated: return "DW_AT_associated";
        case DW_AT::data_location: return "DW_AT_data_location";
        case DW_AT::byte_stride: return "DW_AT_byte_stride";
        case DW_AT::entry_pc: return "DW_AT_entry_pc";
        case DW_AT::use_UTF8: return "DW_AT_use_UTF8";
        case DW_AT::extension: return "DW_AT_extension";
        case DW_AT::ranges: return "DW_AT_ranges";
        case DW_AT::trampoline: return "DW_AT_trampoline";
        case DW_AT::call_column: return "DW_AT_call_column";
        case DW_AT::call_file: return "DW_AT_call_file";
        case DW_AT::call_line: return "DW_AT_call_line";
        case DW_AT::description: return "DW_AT_description";
        case DW_AT::binary_scale: return "DW_AT_binary_scale";
        case DW_AT::decimal_scale: return "DW_AT_decimal_scale";
        case DW_AT::small: return "DW_AT_small";
        case DW_AT::decimal_sign: return "DW_AT_decimal_sign";
        case DW_AT::digit_count: return "DW_AT_digit_count";
        case DW_AT::picture_string: return "DW_AT_picture_string";
        case DW_AT::mutable_: return "DW_AT_mutable";
        case DW_AT::threads_scaled: return "DW_AT_threads_scaled";
        case DW_AT::explicit_: return "DW_AT_explicit";
        case DW_AT::object_pointer: return "DW_AT_object_pointer";
        case DW_AT::endianity: return "DW_AT_endianity";
        case DW_AT::elemental: return "DW_AT_elemental";
        case DW_AT::pure: return "DW_AT_pure";
        case DW_AT::recursive: return "DW_AT_recursive";
        case DW_AT::signature: return "DW_AT_signature";
        case DW_AT::main_subprogram: return "DW_AT_main_subprogram";
        case DW_AT::data_bit_offset: return "DW_AT_data_bit_offset";
        case DW_AT::const_expr: return "DW_AT_const_expr";
        case DW_AT::enum_class: return "DW_AT_enum_class";
        case DW_AT::linkage_name: return "DW_AT_linkage_name";
        case DW_AT::lo_user: break;
        case DW_AT::hi_user: break;
        }
        return "(DW_AT)0x" + to_hex((int)v);
}

std::string
to_string(DW_FORM v)
{
        switch (v) {
        case DW_FORM::addr: return "DW_FORM_addr";
        case DW_FORM::block2: return "DW_FORM_block2";
        case DW_FORM::block4: return "DW_FORM_block4";
        case DW_FORM::data2: return "DW_FORM_data2";
        case DW_FORM::data4: return "DW_FORM_data4";
        case DW_FORM::data8: return "DW_FORM_data8";
        case DW_FORM::string: return "DW_FORM_string";
        case DW_FORM::block: return "DW_FORM_block";
        case DW_FORM::block1: return "DW_FORM_block1";
        case DW_FORM::data1: return "DW_FORM_data1";
        case DW_FORM::flag: return "DW_FORM_flag";
        case DW_FORM::sdata: return "DW_FORM_sdata";
        case DW_FORM::strp: return "DW_FORM_strp";
        case DW_FORM::udata: return "DW_FORM_udata";
        case DW_FORM::ref_addr: return "DW_FORM_ref_addr";
        case DW_FORM::ref1: return "DW_FORM_ref1";
        case DW_FORM::ref2: return "DW_FORM_ref2";
        case DW_FORM::ref4: return "DW_FORM_ref4";
        case DW_FORM::ref8: return "DW_FORM_ref8";
        case DW_FORM::ref_udata: return "DW_FORM_ref_udata";
        case DW_FORM::indirect: return "DW_FORM_indirect";
        case DW_FORM::sec_offset: return "DW_FORM_sec_offset";
        case DW_FORM::exprloc: return "DW_FORM_exprloc";
        case DW_FORM::flag_present: return "DW_FORM_flag_present";
        case DW_FORM::ref_sig8: return "DW_FORM_ref_sig8";
        }
        return "(DW_FORM)0x" + to_hex((int)v);
}

std::string
to_string(DW_OP v)
{
        switch (v) {
        case DW_OP::addr: return "DW_OP_addr";
        case DW_OP::deref: return "DW_OP_deref";
        case DW_OP::const1u: return "DW_OP_const1u";
        case DW_OP::const1s: return "DW_OP_const1s";
        case DW_OP::const2u: return "DW_OP_const2u";
        case DW_OP::const2s: return "DW_OP_const2s";
        case DW_OP::const4u: return "DW_OP_const4u";
        case DW_OP::const4s: return "DW_OP_const4s";
        case DW_OP::const8u: return "DW_OP_const8u";
        case DW_OP::const8s: return "DW_OP_const8s";
        case DW_OP::constu: return "DW_OP_constu";
        case DW_OP::consts: return "DW_OP_consts";
        case DW_OP::dup: return "DW_OP_dup";
        case DW_OP::drop: return "DW_OP_drop";
        case DW_OP::over: return "DW_OP_over";
        case DW_OP::pick: return "DW_OP_pick";
        case DW_OP::swap: return "DW_OP_swap";
        case DW_OP::rot: return "DW_OP_rot";
        case DW_OP::xderef: return "DW_OP_xderef";
        case DW_OP::abs: return "DW_OP_abs";
        case DW_OP::and_: return "DW_OP_and";
        case DW_OP::div: return "DW_OP_div";
        case DW_OP::minus: return "DW_OP_minus";
        case DW_OP::mod: return "DW_OP_mod";
        case DW_OP::mul: return "DW_OP_mul";
        case DW_OP::neg: return "DW_OP_neg";
        case DW_OP::not_: return "DW_OP_not";
        case DW_OP::or_: return "DW_OP_or";
        case DW_OP::plus: return "DW_OP_plus";
        case DW_OP::plus_uconst: return "DW_OP_plus_uconst";
        case DW_OP::shl: return "DW_OP_shl";
        case DW_OP::shr: return "DW_OP_shr";
        case DW_OP::shra: return "DW_OP_shra";
        case DW_OP::xor_: return "DW_OP_xor";
        case DW_OP::skip: return "DW_OP_skip";
        case DW_OP::bra: return "DW_OP_bra";
        case DW_OP::eq: return "DW_OP_eq";
        case DW_OP::ge: return "DW_OP_ge";
        case DW_OP::gt: return "DW_OP_gt";
        case DW_OP::le: return "DW_OP_le";
        case DW_OP::lt: return "DW_OP_lt";
        case DW_OP::ne: return "DW_OP_ne";
        case DW_OP::lit0: return "DW_OP_lit0";
        case DW_OP::lit31: return "DW_OP_lit31";
        case DW_OP::reg0: return "DW_OP_reg0";
        case DW_OP::reg31: return "DW_OP_reg31";
        case DW_OP::breg0: return "DW_OP_breg0";
        case DW_OP::breg31: return "DW_OP_breg31";
        case DW_OP::regx: return "DW_OP_regx";
        case DW_OP::fbreg: return "DW_OP_fbreg";
        case DW_OP::bregx: return "DW_OP_bregx";
        case DW_OP::piece: return "DW_OP_piece";
        case DW_OP::deref_size: return "DW_OP_deref_size";
        case DW_OP::xderef_size: return "DW_OP_xderef_size";
        case DW_OP::nop: return "DW_OP_nop";
        case DW_OP::push_object_address: return "DW_OP_push_object_address";
        case DW_OP::call2: return "DW_OP_call2";
        case DW_OP::call4: return "DW_OP_call4";
        case DW_OP::call_ref: return "DW_OP_call_ref";
        case DW_OP::form_tls_address: return "DW_OP_form_tls_address";
        case DW_OP::call_frame_cfa: return "DW_OP_call_frame_cfa";
        case DW_OP::bit_piece: return "DW_OP_bit_piece";
        case DW_OP::implicit_value: return "DW_OP_implicit_value";
        case DW_OP::stack_value: return "DW_OP_stack_value";
        case DW_OP::lo_user: break;
        case DW_OP::hi_user: break;
        }
        return "(DW_OP)0x" + to_hex((int)v);
}

std::string
to_string(DW_ATE v)
{
        switch (v) {
        case DW_ATE::address: return "DW_ATE_address";
        case DW_ATE::boolean: return "DW_ATE_boolean";
        case DW_ATE::complex_float: return "DW_ATE_complex_float";
        case DW_ATE::float_: return "DW_ATE_float";
        case DW_ATE::signed_: return "DW_ATE_signed";
        case DW_ATE::signed_char: return "DW_ATE_signed_char";
        case DW_ATE::unsigned_: return "DW_ATE_unsigned";
        case DW_ATE::unsigned_char: return "DW_ATE_unsigned_char";
        case DW_ATE::imaginary_float: return "DW_ATE_imaginary_float";
        case DW_ATE::packed_decimal: return "DW_ATE_packed_decimal";
        case DW_ATE::numeric_string: return "DW_ATE_numeric_string";
        case DW_ATE::edited: return "DW_ATE_edited";
        case DW_ATE::signed_fixed: return "DW_ATE_signed_fixed";
        case DW_ATE::unsigned_fixed: return "DW_ATE_unsigned_fixed";
        case DW_ATE::decimal_float: return "DW_ATE_decimal_float";
        case DW_ATE::UTF: return "DW_ATE_UTF";
        case DW_ATE::lo_user: break;
        case DW_ATE::hi_user: break;
        }
        return "(DW_ATE)0x" + to_hex((int)v);
}

std::string
to_string(DW_DS v)
{
        switch (v) {
        case DW_DS::unsigned_: return "DW_DS_unsigned";
        case DW_DS::leading_overpunch: return "DW_DS_leading_overpunch";
        case DW_DS::trailing_overpunch: return "DW_DS_trailing_overpunch";
        case DW_DS::leading_separate: return "DW_DS_leading_separate";
        case DW_DS::trailing_separate: return "DW_DS_trailing_separate";
        }
        return "(DW_DS)0x" + to_hex((int)v);
}

std::string
to_string(DW_END v)
{
        switch (v) {
        case DW_END::default_: return "DW_END_default";
        case DW_END::big: return "DW_END_big";
        case DW_END::little: return "DW_END_little";
        case DW_END::lo_user: break;
        case DW_END::hi_user: break;
        }
        return "(DW_END)0x" + to_hex((int)v);
}

std::string
to_string(DW_ACCESS v)
{
        switch (v) {
        case DW_ACCESS::public_: return "DW_ACCESS_public";
        case DW_ACCESS::protected_: return "DW_ACCESS_protected";
        case DW_ACCESS::private_: return "DW_ACCESS_private";
        }
        return "(DW_ACCESS)0x" + to_hex((int)v);
}

std::string
to_string(DW_VIS v)
{
        switch (v) {
        case DW_VIS::local: return "DW_VIS_local";
        case DW_VIS::exported: return "DW_VIS_exported";
        case DW_VIS::qualified: return "DW_VIS_qualified";
        }
        return "(DW_VIS)0x" + to_hex((int)v);
}

std::string
to_string(DW_VIRTUALITY v)
{
        switch (v) {
        case DW_VIRTUALITY::none: return "DW_VIRTUALITY_none";
        case DW_VIRTUALITY::virtual_: return "DW_VIRTUALITY_virtual";
        case DW_VIRTUALITY::pure_virtual: return "DW_VIRTUALITY_pure_virtual";
        }
        return "(DW_VIRTUALITY)0x" + to_hex((int)v);
}

std::string
to_string(DW_LANG v)
{
        switch (v) {
        case DW_LANG::C89: return "DW_LANG_C89";
        case DW_LANG::C: return "DW_LANG_C";
        case DW_LANG::Ada83: return "DW_LANG_Ada83";
        case DW_LANG::C_plus_plus: return "DW_LANG_C_plus_plus";
        case DW_LANG::Cobol74: return "DW_LANG_Cobol74";
        case DW_LANG::Cobol85: return "DW_LANG_Cobol85";
        case DW_LANG::Fortran77: return "DW_LANG_Fortran77";
        case DW_LANG::Fortran90: return "DW_LANG_Fortran90";
        case DW_LANG::Pascal83: return "DW_LANG_Pascal83";
        case DW_LANG::Modula2: return "DW_LANG_Modula2";
        case DW_LANG::Java: return "DW_LANG_Java";
        case DW_LANG::C99: return "DW_LANG_C99";
        case DW_LANG::Ada95: return "DW_LANG_Ada95";
        case DW_LANG::Fortran95: return "DW_LANG_Fortran95";
        case DW_LANG::PLI: return "DW_LANG_PLI";
        case DW_LANG::ObjC: return "DW_LANG_ObjC";
        case DW_LANG::ObjC_plus_plus: return "DW_LANG_ObjC_plus_plus";
        case DW_LANG::UPC: return "DW_LANG_UPC";
        case DW_LANG::D: return "DW_LANG_D";
        case DW_LANG::Python: return "DW_LANG_Python";
        case DW_LANG::lo_user: break;
        case DW_LANG::hi_user: break;
        }
        return "(DW_LANG)0x" + to_hex((int)v);
}

std::string
to_string(DW_ID v)
{
        switch (v) {
        case DW_ID::case_sensitive: return "DW_ID_case_sensitive";
        case DW_ID::up_case: return "DW_ID_up_case";
        case DW_ID::down_case: return "DW_ID_down_case";
        case DW_ID::case_insensitive: return "DW_ID_case_insensitive";
        }
        return "(DW_ID)0x" + to_hex((int)v);
}

std::string
to_string(DW_CC v)
{
        switch (v) {
        case DW_CC::normal: return "DW_CC_normal";
        case DW_CC::program: return "DW_CC_program";
        case DW_CC::nocall: return "DW_CC_nocall";
        case DW_CC::lo_user: break;
        case DW_CC::hi_user: break;
        }
        return "(DW_CC)0x" + to_hex((int)v);
}

std::string
to_string(DW_INL v)
{
        switch (v) {
        case DW_INL::not_inlined: return "DW_INL_not_inlined";
        case DW_INL::inlined: return "DW_INL_inlined";
        case DW_INL::declared_not_inlined: return "DW_INL_declared_not_inlined";
        case DW_INL::declared_inlined: return "DW_INL_declared_inlined";
        }
        return "(DW_INL)0x" + to_hex((int)v);
}

std::string
to_string(DW_ORD v)
{
        switch (v) {
        case DW_ORD::row_major: return "DW_ORD_row_major";
        case DW_ORD::col_major: return "DW_ORD_col_major";
        }
        return "(DW_ORD)0x" + to_hex((int)v);
}

std::string
to_string(DW_DSC v)
{
        switch (v) {
        case DW_DSC::label: return "DW_DSC_label";
        case DW_DSC::range: return "DW_DSC_range";
        }
        return "(DW_DSC)0x" + to_hex((int)v);
}

std::string
to_string(DW_LNS v)
{
        switch (v) {
        case DW_LNS::copy: return "DW_LNS_copy";
        case DW_LNS::advance_pc: return "DW_LNS_advance_pc";
        case DW_LNS::advance_line: return "DW_LNS_advance_line";
        case DW_LNS::set_file: return "DW_LNS_set_file";
        case DW_LNS::set_column: return "DW_LNS_set_column";
        case DW_LNS::negate_stmt: return "DW_LNS_negate_stmt";
        case DW_LNS::set_basic_block: return "DW_LNS_set_basic_block";
        case DW_LNS::const_add_pc: return "DW_LNS_const_add_pc";
        case DW_LNS::fixed_advance_pc: return "DW_LNS_fixed_advance_pc";
        case DW_LNS::set_prologue_end: return "DW_LNS_set_prologue_end";
        case DW_LNS::set_epilogue_begin: return "DW_LNS_set_epilogue_begin";
        case DW_LNS::set_isa: return "DW_LNS_set_isa";
        }
        return "(DW_LNS)0x" + to_hex((int)v);
}

std::string
to_string(DW_LNE v)
{
        switch (v) {
        case DW_LNE::end_sequence: return "DW_LNE_end_sequence";
        case DW_LNE::set_address: return "DW_LNE_set_address";
        case DW_LNE::define_file: return "DW_LNE_define_file";
        case DW_LNE::set_discriminator: return "DW_LNE_set_discriminator";
        case DW_LNE::lo_user: break;
        case DW_LNE::hi_user: break;
        }
        return "(DW_LNE)0x" + to_hex((int)v);
}

DWARFPP_END_NAMESPACE
