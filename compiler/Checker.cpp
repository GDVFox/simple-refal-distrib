// This file automatically generated from 'Checker.ref'
// Don't edit! Edit 'Checker.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1367677873_2576037184

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_u_u_Stepm_Start = 1,
  efunc_u_u_Mum_Aux = 2,
  efunc_u_u_Stepm_End = 3,
  efunc_u_u_FindMuPtr = 4,
  efunc_Add = 5,
  efunc_Div = 6,
  efunc_Mod = 7,
  efunc_Mul = 8,
  efunc_Residue = 9,
  efunc_Sub = 10,
  efunc_gen_u_u_Mum_Aux_S13B1 = 11,
  efunc_Type = 12,
  efunc_gen_Residue_C1 = 13,
  efunc_ELm_AddErrorAt = 14,
  efunc_PrepareMessage = 15,
  efunc_gen_CheckProgram_L1 = 16,
  efunc_FindErrors = 17,
  efunc_Reduce = 18,
  efunc_CheckDeclarations = 19,
  efunc_Map = 20,
  efunc_CheckValidUsings = 21,
  efunc_CheckFunctionBody = 22,
  efunc_SeparateDefines = 23,
  efunc_gen_FindErrors_A2 = 24,
  efunc_gen_FindErrors_A1 = 25,
  efunc_CheckSpecs = 26,
  efunc_CheckSpecsm_SeparateErrors = 27,
  efunc_gen_CheckSpecs_A3 = 28,
  efunc_CheckSpecsm_Functions = 29,
  efunc_gen_CheckSpecs_A2 = 30,
  efunc_CheckSpecsm_Formats = 31,
  efunc_gen_CheckSpecs_A1 = 32,
  efunc_CheckSpecsm_Redefine = 33,
  efunc_CheckRepeatedVariables = 34,
  efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1 = 35,
  efunc_IsHardPattern = 36,
  efunc_gen_CheckSpecsm_Formats_L1S1B1 = 37,
  efunc_gen_CheckSpecsm_Formats_L1 = 38,
  efunc_gen_IsHardPattern_S4B1 = 39,
  efunc_gen_IsHardPattern_S5B1 = 40,
  efunc_gen_IsHardPattern_S6C1 = 41,
  efunc_IsHardTerm = 42,
  efunc_gen_IsHardPattern_S7C1 = 43,
  efunc_ErrorsForRepeatedVariables = 44,
  efunc_FindVariables = 45,
  efunc_gen_FindVariables_L1 = 46,
  efunc_gen_CheckSpecsm_Functions_S1A1B1 = 47,
  efunc_ValidBodyForSpec = 48,
  efunc_gen_CheckSpecsm_Functions_S1A1 = 49,
  efunc_gen_CheckSpecsm_Functions_S2A1B1 = 50,
  efunc_gen_CheckSpecsm_Functions_S2A1 = 51,
  efunc_CheckSpecsm_SeparateErrorsm_Rec = 52,
  efunc_MapReduce = 53,
  efunc_gen_SeparateDefines_L1 = 54,
  efunc_Pipe = 55,
  efunc_CleanupValidEntry = 56,
  efunc_FindInvalidEntry = 57,
  efunc_CleanupValidForwards = 58,
  efunc_FindInvalidForwards = 59,
  efunc_CleanupValidDriveInline = 60,
  efunc_FindInvalidDriveInline = 61,
  efunc_CheckRedefinitions = 62,
  efunc_Fetch = 63,
  efunc_gen_CleanupValidDriveInline_S1C1 = 64,
  efunc_OneOf = 65,
  efunc_gen_CleanupValidDriveInline_S2C1 = 66,
  efunc_gen_FindInvalidDriveInline_L1S1C1 = 67,
  efunc_InlineDriveErrors = 68,
  efunc_gen_FindInvalidDriveInline_L1 = 69,
  efunc_gen_FindInvalidEntry_L1 = 70,
  efunc_CheckFunctionBodyRec = 71,
  efunc_CheckSentence = 72,
  efunc_CheckBlocks = 73,
  efunc_gen_CheckSentence_A4 = 74,
  efunc_FlatExpr = 75,
  efunc_gen_CheckSentence_A3 = 76,
  efunc_CheckResult = 77,
  efunc_gen_CheckSentence_A2 = 78,
  efunc_DoCheckAssignments = 79,
  efunc_CheckPattern = 80,
  efunc_gen_CheckSentence_A1 = 81,
  efunc_gen_CheckBlocks_L1 = 82,
  efunc_gen_DoCheckAssignments_S2A3 = 83,
  efunc_gen_DoCheckAssignments_S2A2 = 84,
  efunc_gen_DoCheckAssignments_S2A1 = 85,
  efunc_gen_FlatExpr_L1 = 86,
  efunc_FixupKnownVars = 87,
  efunc_gen_CheckPattern_S2L1 = 88,
  efunc_gen_CheckResult_L1 = 89,
  efunc_gen_CheckValidUsings_S5L1 = 90,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Error = 6,
  ident_AlreadyDefined = 7,
  ident_ForwardForEntry = 8,
  ident_ForwardNotDefined = 9,
  ident_NotDefined = 10,
  ident_AlreadyBounded = 11,
  ident_InvalidMode = 12,
  ident_VariableNotFound = 13,
  ident_DanglingEntry = 14,
  ident_DanglingInline = 15,
  ident_DanglingDrive = 16,
  ident_RedefineSpec = 17,
  ident_MustBeHardPattern = 18,
  ident_BadSpecForFunction = 19,
  ident_OrphanSpec = 20,
  ident_RepVarInSpecPattern = 21,
  ident_Spec = 22,
  ident_True = 23,
  ident_False = 24,
  ident_TkVariable = 25,
  ident_Brackets = 26,
  ident_Symbol = 27,
  ident_ADTm_Brackets = 28,
  ident_Function = 29,
  ident_Define = 30,
  ident_Swap = 31,
  ident_Enum = 32,
  ident_Declaration = 33,
  ident_Declare = 34,
  ident_Entry = 35,
  ident_GNm_Entry = 36,
  ident_Inline = 37,
  ident_Drive = 38,
  ident_Ident = 39,
  ident_NativeBlock = 40,
  ident_GNm_Local = 41,
  ident_Sentences = 42,
  ident_NativeBody = 43,
  ident_TkNewVariable = 44,
  ident_Name = 45,
  ident_UnnamedADT = 46,
  ident_CallBrackets = 47,
  ident_Closure = 48,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Mu/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mu_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & Mu?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", 1367677873U, 2576037184U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & __Mu-Aux$13:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux$13:1/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux$13:1/4 s.new#4/5 s.new#5/6 s.new#6/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    do {
      // </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 >/1
      if( ! refalrts::char_term( 'F', context[5] ) )
        continue;
      //DEBUG: s.SubType#2: 6
      //DEBUG: s.FnPtr#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.SubType#2: 6
    //DEBUG: s.FnName#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[9], 2576037184UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1367677873UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux$13:1/4 'B'/5 s.0#2/6 (/7 e.FnName#2/9 )/8 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_term( 'B', context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FnName#2 as range 9
  //DEBUG: s.0#2: 6
  //DEBUG: e.FnName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
  refalrts::reinit_number(context[5], 1367677873UL);
  refalrts::reinit_number(context[7], 2576037184UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1367677873U, 2576037184U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & __Mu-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux/4 s.new#2/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    do {
      // </0 & __Mu-Aux/4 '+'/5 >/1
      if( ! refalrts::char_term( '+', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '/'/5 >/1
      if( ! refalrts::char_term( '/', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '%'/5 >/1
      if( ! refalrts::char_term( '%', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '*'/5 >/1
      if( ! refalrts::char_term( '*', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '?'/5 >/1
      if( ! refalrts::char_term( '?', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '-'/5 >/1
      if( ! refalrts::char_term( '-', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Sub]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k43_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k47_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k37_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k42_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k63_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_m_], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name(context[1], functions[efunc_Sub]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1367677873U, 2576037184U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Residue/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Residue_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & Residue?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", 1367677873U, 2576037184U, func_Residue);


static refalrts::FnResult func_gen_CheckProgram_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckProgram\1/4 t.ErrorList#2/10 (/7 # Error/9 t.SrcPos#2/12 e.Message#2/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left( identifiers[ident_Error], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#2 as range 5
  //DEBUG: t.ErrorList#2: 10
  //DEBUG: t.SrcPos#2: 12
  //DEBUG: e.Message#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#2/10 } Tile{ AsIs: t.SrcPos#2/12 } Tile{ HalfReuse: </7 HalfReuse: & PrepareMessage/9 } Tile{ AsIs: e.Message#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_PrepareMessage]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckProgram_L1("CheckProgram\\1", 1367677873U, 2576037184U, func_gen_CheckProgram_L1);


static refalrts::FnResult func_CheckProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CheckProgram/4 t.ErrorList#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 } & CheckProgram\1/7 Tile{ AsIs: t.ErrorList#1/5 } </8 & FindErrors/9 Tile{ AsIs: e.AST#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CheckProgram_L1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_FindErrors]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Reduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckProgram("CheckProgram", 0U, 0U, func_CheckProgram);


static refalrts::FnResult func_PrepareMessage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrepareMessage/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareMessage/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & PrepareMessage/4 # AlreadyDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_AlreadyDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is already defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Functi", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "is already defined", 18);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # ForwardForEntry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ForwardForEntry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$FORWA"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'D'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"for $ENTRY "/10 e.Name#1/6/12 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$FORWA", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "for $ENTRY ", 11);
    refalrts::copy_evar(vm, context[12], context[13], context[6], context[7]);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # ForwardNotDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ForwardNotDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Function for $FORWA"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'D'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is not defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Function for $FORWA", 19);
    refalrts::alloc_chars(vm, context[10], context[11], "is not defined", 14);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # NotDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NotDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is not defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Functi", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "is not defined", 14);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 s.new#3/5 s.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & PrepareMessage/4 # AlreadyBounded/5 s.Mode#1/8 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_AlreadyBounded], context[5] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.Mode#1: 8
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iab"/11 Tile{ HalfReuse: 'l'/1 }"e hide operator^ must be applied to first occurence of variable "/13 Tile{ AsIs: s.Mode#1/8 } '.'/15 Tile{ AsIs: e.Index#1/9 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[11], context[12], "iab", 3);
      refalrts::alloc_chars(vm, context[13], context[14], "e hide operator^ must be applied to first occurence of variable ", 64);
      refalrts::alloc_char(vm, context[15], '.');
      refalrts::reinit_char(context[0], 'V');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[5], 'r');
      refalrts::reinit_char(context[1], 'l');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareMessage/4 # InvalidMode/5 s.OldMode#1/8 s.NewMode#1/11 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_InvalidMode], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.OldMode#1: 8
      //DEBUG: s.NewMode#1: 11
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iables "/12 Tile{ AsIs: s.OldMode#1/8 } '.'/14 Tile{ AsIs: e.Index#1/9 }" and "/15 Tile{ AsIs: s.NewMode#1/11 } '.'/17 e.Index#1/9/18" have different mode"/20 Tile{ HalfReuse: 's'/1 ]] }
      refalrts::alloc_chars(vm, context[12], context[13], "iables ", 7);
      refalrts::alloc_char(vm, context[14], '.');
      refalrts::alloc_chars(vm, context[15], context[16], " and ", 5);
      refalrts::alloc_char(vm, context[17], '.');
      refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
      refalrts::alloc_chars(vm, context[20], context[21], " have different mode", 20);
      refalrts::reinit_char(context[0], 'V');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[5], 'r');
      refalrts::reinit_char(context[1], 's');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 # VariableNotFound/5 s.Mode#1/8 e.Index#1/9 >/1
    context[9] = context[6];
    context[10] = context[7];
    if( ! refalrts::ident_term( identifiers[ident_VariableNotFound], context[5] ) )
      continue;
    // closed e.Index#1 as range 9
    //DEBUG: s.Mode#1: 8
    //DEBUG: e.Index#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iable "/11 Tile{ AsIs: s.Mode#1/8 } '.'/13 Tile{ AsIs: e.Index#1/9 }" not foun"/14 Tile{ HalfReuse: 'd'/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "iable ", 6);
    refalrts::alloc_char(vm, context[13], '.');
    refalrts::alloc_chars(vm, context[14], context[15], " not foun", 9);
    refalrts::reinit_char(context[0], 'V');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'r');
    refalrts::reinit_char(context[1], 'd');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingEntry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingEntry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$ENT"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'Y'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" declaration for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$ENT", 4);
    refalrts::alloc_chars(vm, context[10], context[11], " declaration for missed function", 32);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'Y');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingInline/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingInline], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$INLI"/8 Tile{ HalfReuse: 'N'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" inline label for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$INLI", 5);
    refalrts::alloc_chars(vm, context[10], context[11], " inline label for missed function", 33);
    refalrts::reinit_char(context[0], 'N');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingDrive/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingDrive], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$DRI"/8 Tile{ HalfReuse: 'V'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" drive label for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$DRI", 4);
    refalrts::alloc_chars(vm, context[10], context[11], " drive label for missed function", 32);
    refalrts::reinit_char(context[0], 'V');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # RedefineSpec/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_RedefineSpec], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Specialization of functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: 'i'/1 }"s redefined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Specialization of functi", 24);
    refalrts::alloc_chars(vm, context[10], context[11], "s redefined", 11);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & PrepareMessage/4 # MustBeHardPattern/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_MustBeHardPattern], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'P'/0 HalfReuse: 'a'/4 HalfReuse: 't'/5 HalfReuse: 't'/1 }"ern of function specialization must be hard"/6 Tile{ ]] }
      refalrts::alloc_chars(vm, context[6], context[7], "ern of function specialization must be hard", 43);
      refalrts::reinit_char(context[0], 'P');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[5], 't');
      refalrts::reinit_char(context[1], 't');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 # BadSpecForFunction/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_BadSpecForFunction], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"fucntion specialization"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "fucntion specialization", 23);
    refalrts::reinit_char(context[0], 'B');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'd');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # OrphanSpec/5 e.FuncName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_OrphanSpec], context[5] ) )
      continue;
    // closed e.FuncName#1 as range 6
    //DEBUG: e.FuncName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'O'/0 HalfReuse: 'r'/4 HalfReuse: 'p'/5 }"ha"/8 Tile{ HalfReuse: 'n'/1 }" function specialization for "/10 Tile{ AsIs: e.FuncName#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ha", 2);
    refalrts::alloc_chars(vm, context[10], context[11], " function specialization for ", 29);
    refalrts::reinit_char(context[0], 'O');
    refalrts::reinit_char(context[4], 'r');
    refalrts::reinit_char(context[5], 'p');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareMessage/4 # RepVarInSpecPattern/5 s.Mode#1/6 e.Index#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_RepVarInSpecPattern], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //DEBUG: s.Mode#1: 6
  //DEBUG: e.Index#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'R'/0 HalfReuse: 'e'/4 HalfReuse: 'p'/5 }"eated variable "/7 Tile{ AsIs: s.Mode#1/6 } '.'/9 Tile{ AsIs: e.Index#1/2 }" in specialization patter"/10 Tile{ HalfReuse: 'n'/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "eated variable ", 15);
  refalrts::alloc_char(vm, context[9], '.');
  refalrts::alloc_chars(vm, context[10], context[11], " in specialization patter", 25);
  refalrts::reinit_char(context[0], 'R');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], 'p');
  refalrts::reinit_char(context[1], 'n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareMessage("PrepareMessage", 1367677873U, 2576037184U, func_PrepareMessage);


static refalrts::FnResult func_gen_FindErrors_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FindErrors=2/4 (/7 e.SpecErrors#2/5 )/8 (/11 e.Declarations#3/9 )/12 e.FunctionBodies#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.SpecErrors#2 as range 5
  // closed e.Declarations#3 as range 9
  // closed e.FunctionBodies#3 as range 2
  //DEBUG: e.SpecErrors#2: 5
  //DEBUG: e.Declarations#3: 9
  //DEBUG: e.FunctionBodies#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SpecErrors#2/5 } Tile{ AsIs: </0 Reuse: & CheckValidUsings/4 AsIs: (/7 } </13 & CheckDeclarations/14 Tile{ AsIs: e.Declarations#3/9 } >/15 Tile{ AsIs: )/8 HalfReuse: </11 } & Map/16 Tile{ HalfReuse: & CheckFunctionBody/12 AsIs: e.FunctionBodies#3/2 AsIs: >/1 } >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_CheckDeclarations]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_CheckValidUsings]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[12], functions[efunc_CheckFunctionBody]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindErrors_A2("FindErrors=2", 1367677873U, 2576037184U, func_gen_FindErrors_A2);


static refalrts::FnResult func_gen_FindErrors_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindErrors=1/4 (/7 e.SpecErrors#2/5 )/8 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.SpecErrors#2 as range 5
  // closed e.AST#2 as range 2
  //DEBUG: e.SpecErrors#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & FindErrors=2/4 AsIs: (/7 AsIs: e.SpecErrors#2/5 AsIs: )/8 } {*}/10 </11 & SeparateDefines/12 Tile{ AsIs: e.AST#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[0]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_SeparateDefines]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindErrors_A1("FindErrors=1", 1367677873U, 2576037184U, func_gen_FindErrors_A1);


static refalrts::FnResult func_FindErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FindErrors/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FindErrors=1/6 Tile{ AsIs: </0 Reuse: & CheckSpecs/4 AsIs: e.AST#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FindErrors_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecs]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindErrors("FindErrors", 1367677873U, 2576037184U, func_FindErrors);


static refalrts::FnResult func_gen_CheckSpecs_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs=3/4 e.AST-and-errors#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#4 as range 2
  //DEBUG: e.AST-and-errors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-SeparateErrors/4 AsIs: e.AST-and-errors#4/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_SeparateErrors]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A3("CheckSpecs=3", 1367677873U, 2576037184U, func_gen_CheckSpecs_A3);


static refalrts::FnResult func_gen_CheckSpecs_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs=2/4 e.AST-and-errors#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#3 as range 2
  //DEBUG: e.AST-and-errors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=3/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST-and-errors#3/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A2("CheckSpecs=2", 1367677873U, 2576037184U, func_gen_CheckSpecs_A2);


static refalrts::FnResult func_gen_CheckSpecs_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs=1/4 e.AST-and-errors#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#2 as range 2
  //DEBUG: e.AST-and-errors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=2/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Formats/4 AsIs: e.AST-and-errors#2/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Formats]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A1("CheckSpecs=1", 1367677873U, 2576037184U, func_gen_CheckSpecs_A1);


static refalrts::FnResult func_CheckSpecs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=1/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Redefine/4 AsIs: e.AST#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Redefine]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecs("CheckSpecs", 1367677873U, 2576037184U, func_CheckSpecs);


static refalrts::FnResult func_CheckSpecsm_Redefine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & CheckSpecs-Redefine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckSpecs-Redefine/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos1#1/16 (/20 e.Name#1/18 )/21 e.Pattern1#1/11 )/14 e.AST-M#1/22 (/28 # Spec/30 t.SrcPos2#1/31 (/35 e.Name#1/37 )/36 e.Pattern2#1/26 )/29 e.AST-E#1/24 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern1#1 as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Spec], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.AST-E#1 as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[26], context[27] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        if( ! refalrts::repeated_evar_left( vm, context[37], context[38], context[18], context[19], context[33], context[34] ) )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        // closed e.Pattern2#1 as range 26
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Pattern1#1: 11
        //DEBUG: e.AST-M#1: 22
        //DEBUG: e.AST-E#1: 24
        //DEBUG: t.SrcPos2#1: 31
        //DEBUG: e.Pattern2#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Pattern2#1/26 )/29 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-Redefine/4 AsIs: e.AST-B#1/7 AsIs: (/13 AsIs: # Spec/15 AsIs: t.SrcPos1#1/16 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: e.Pattern1#1/11 AsIs: )/14 AsIs: e.AST-M#1/22 AsIs: (/28 Reuse: # Error/30 AsIs: t.SrcPos2#1/31 HalfReuse: # RedefineSpec/35 AsIs: e.Name#1/37 AsIs: )/36 } Tile{ AsIs: e.AST-E#1/24 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[30], identifiers[ident_Error]);
        refalrts::reinit_ident(context[35], identifiers[ident_RedefineSpec]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[28], context[36] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::splice_to_freelist_open( vm, context[36], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Redefine/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Redefine/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Redefine("CheckSpecs-Redefine", 1367677873U, 2576037184U, func_CheckSpecsm_Redefine);


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1S1B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 2
  do {
    // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/15 )/10 (/13 e.Pattern#2/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 15
    // closed e.Pattern#2 as range 17
    //DEBUG: t.SrcPos#2: 5
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Pattern#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/13 {REMOVED TILE} )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Spec/4 AsIs: t.SrcPos#2/5 AsIs: (/9 AsIs: e.Name#2/15 AsIs: )/10 } Tile{ AsIs: e.Pattern#2/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Spec]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 e.Errors#4/2 >/1
  // closed e.Name#2 as range 7
  // closed e.Pattern#2 as range 11
  // closed e.Errors#4 as range 2
  //DEBUG: t.SrcPos#2: 5
  //DEBUG: e.Name#2: 7
  //DEBUG: e.Pattern#2: 11
  //DEBUG: e.Errors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Errors#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1S1B1S1B1("CheckSpecs-Formats\\1$1:1$1:1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Formats_L1S1B1S1B1);


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CheckSpecs-Formats\1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1$1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 s.new#4/15 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Formats\1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/16 )/10 (/13 e.Pattern#2/18 )/14 # True/15 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    // closed e.Name#2 as range 16
    // closed e.Pattern#2 as range 18
    //DEBUG: t.SrcPos#2: 5
    //DEBUG: e.Name#2: 16
    //DEBUG: e.Pattern#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & CheckSpecs-Formats\1$1:1$1:1/4 AsIs: t.SrcPos#2/5 AsIs: (/9 AsIs: e.Name#2/16 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern#2/18 AsIs: )/14 HalfReuse: {*}/15 HalfReuse: </1 } & CheckRepeatedVariables/21 e.Pattern#2/18/22 >/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_CheckRepeatedVariables]);
    refalrts::copy_evar(vm, context[22], context[23], context[18], context[19]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1]);
    refalrts::reinit_unwrapped_closure(context[15], context[0]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[25] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 # False/15 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 7
  // closed e.Pattern#2 as range 11
  //DEBUG: t.SrcPos#2: 5
  //DEBUG: e.Name#2: 7
  //DEBUG: e.Pattern#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 # False/15 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#2/5 HalfReuse: # MustBeHardPattern/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_ident(context[9], identifiers[ident_MustBeHardPattern]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1S1B1("CheckSpecs-Formats\\1$1:1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Formats_L1S1B1);


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CheckSpecs-Formats\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Formats\1/4 (/5 # Spec/9 t.SrcPos#2/10 (/14 e.Name#2/12 )/15 e.Pattern#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Spec], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Pattern#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 12
    //DEBUG: e.Pattern#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: [*]/5 HalfReuse: & CheckSpecs-Formats\1$1:1/9 AsIs: t.SrcPos#2/10 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } (/16 Tile{ AsIs: e.Pattern#2/7 } )/17 {*}/18 Tile{ AsIs: </0 } & IsHardPattern/19 e.Pattern#2/7/20 Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[5]);
    refalrts::alloc_name(vm, context[19], functions[efunc_IsHardPattern]);
    refalrts::copy_evar(vm, context[20], context[21], context[7], context[8]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_closure_head(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Formats\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1("CheckSpecs-Formats\\1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Formats_L1);


static refalrts::FnResult func_CheckSpecsm_Formats(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CheckSpecs-Formats/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & CheckSpecs-Formats\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Formats("CheckSpecs-Formats", 1367677873U, 2576037184U, func_CheckSpecsm_Formats);


static refalrts::FnResult func_gen_IsHardPattern_S4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$4:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$4:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S4B1("IsHardPattern$4:1", 1367677873U, 2576037184U, func_gen_IsHardPattern_S4B1);


static refalrts::FnResult func_gen_IsHardPattern_S5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$5:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$5:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S5B1("IsHardPattern$5:1", 1367677873U, 2576037184U, func_gen_IsHardPattern_S5B1);


static refalrts::FnResult func_IsHardPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & IsHardPattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsHardPattern/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.new#2 as range 7
    do {
      // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.new#4/16 'e'/18 e.new#5/12 )/10 e.new#6/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
        continue;
      // closed e.new#6 as range 14
      context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'e', context[12], context[13] );
      if( ! context[18] )
        continue;
      // closed e.new#5 as range 12
      do {
        // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index#1/19 )/10 >/1
        context[19] = context[12];
        context[20] = context[13];
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        // closed e.Index#1 as range 19
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Index#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index#1/19 )/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index1#1/19 )/10 e.Pattern-M#1/21 (/25 # TkVariable/27 t.SrcPos2#1/28 'e'/30 e.Index2#1/23 )/26 >/1
      context[19] = context[12];
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_right( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_TkVariable], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.Index1#1 as range 19
      // closed e.Pattern-M#1 as range 21
      context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_left( 'e', context[23], context[24] );
      if( ! context[30] )
        continue;
      // closed e.Index2#1 as range 23
      //DEBUG: t.SrcPos1#1: 16
      //DEBUG: e.Index1#1: 19
      //DEBUG: e.Pattern-M#1: 21
      //DEBUG: t.SrcPos2#1: 28
      //DEBUG: e.Index2#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index1#1/19 )/10 e.Pattern-M#1/21 (/25 # TkVariable/27 t.SrcPos2#1/28 'e'/30 e.Index2#1/23 )/26 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardPattern/4 (/9 # Brackets/11 e.PatternPart1#1/12 )/10 e.PatternPart2#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[11] ) )
      continue;
    // closed e.PatternPart1#1 as range 12
    // closed e.PatternPart2#1 as range 14
    //DEBUG: e.PatternPart1#1: 12
    //DEBUG: e.PatternPart2#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & IsHardPattern$4:1/9 HalfReuse: (/11 } Tile{ AsIs: e.PatternPart2#1/14 } Tile{ AsIs: )/10 } {*}/16 </17 & IsHardPattern/18 Tile{ AsIs: e.PatternPart1#1/12 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_unwrapped_closure(vm, context[16], context[4]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_IsHardPattern]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_gen_IsHardPattern_S4B1]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[16] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 e.PatternPart1#1/5 (/9 # Brackets/11 e.PatternPart2#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_Brackets], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.PatternPart1#1 as range 5
    // closed e.PatternPart2#1 as range 7
    //DEBUG: e.PatternPart1#1: 5
    //DEBUG: e.PatternPart2#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 [*]/13 & IsHardPattern$5:1/14 (/15 Tile{ AsIs: e.PatternPart2#1/7 } Tile{ AsIs: )/10 HalfReuse: {*}/1 } Tile{ AsIs: </0 AsIs: & IsHardPattern/4 AsIs: e.PatternPart1#1/5 HalfReuse: >/9 HalfReuse: >/11 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_closure_head(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_IsHardPattern_S5B1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::reinit_unwrapped_closure(context[1], context[13]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 t.Term#1/7 e.Pattern-E#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Pattern-E#1 as range 5
    //DEBUG: t.Term#1: 7
    //DEBUG: e.Pattern-E#1: 5
    //5: e.Pattern-E#1
    //7: t.Term#1
    //14: t.Term#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_IsHardPattern_S6C1]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_IsHardTerm]);
    refalrts::copy_stvar(vm, context[14], context[7]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </9 & IsHardPattern$6?1/13 # True/14 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      context[14] = refalrts::ident_left( identifiers[ident_True], context[11], context[12] );
      if( ! context[14] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: t.Term#1: 7
      //DEBUG: e.Pattern-E#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Term#1/7 {REMOVED TILE} </9 & IsHardPattern$6?1/13 # True/14 >/10 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & IsHardPattern/4 } Tile{ AsIs: e.Pattern-E#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardPattern/4 e.Pattern-B#1/2 t.Term#1/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern-B#1 as range 2
  //DEBUG: t.Term#1: 5
  //DEBUG: e.Pattern-B#1: 2
  //2: e.Pattern-B#1
  //5: t.Term#1
  //12: t.Term#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_IsHardPattern_S7C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_IsHardTerm]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & IsHardPattern$7?1/11 # True/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Term#1: 5
    //DEBUG: e.Pattern-B#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.Term#1/5 </7 & IsHardPattern$7?1/11 # True/12 >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & IsHardPattern/4 } Tile{ AsIs: e.Pattern-B#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_IsHardPattern("IsHardPattern", 1367677873U, 2576037184U, func_IsHardPattern);


static refalrts::FnResult func_IsHardTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & IsHardTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsHardTerm/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & IsHardTerm/4 (/5 # Symbol/9 s.Type#1/10 e.Info#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::svar_term( context[10], context[10] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Info#1 as range 12
      //DEBUG: s.Type#1: 10
      //DEBUG: e.Info#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # Symbol/9 s.Type#1/10 e.Info#1/12 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.new#5/10 s.new#6/14 e.new#7/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 's'/14 e.Index#1/15 )/6 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.Index#1 as range 15
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Index#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 's'/14 e.Index#1/15 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 't'/14 e.Index#1/15 )/6 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::char_term( 't', context[14] ) )
      continue;
    // closed e.Index#1 as range 15
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Index#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 't'/14 e.Index#1/15 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardTerm/4 t.Term#1/5 >/1
  //DEBUG: t.Term#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 t.Term#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsHardTerm("IsHardTerm", 1367677873U, 2576037184U, func_IsHardTerm);


static refalrts::FnResult func_CheckRepeatedVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckRepeatedVariables/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ErrorsForRepeatedVariables/6 Tile{ AsIs: </0 Reuse: & FindVariables/4 AsIs: e.Pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ErrorsForRepeatedVariables]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_FindVariables]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRepeatedVariables("CheckRepeatedVariables", 1367677873U, 2576037184U, func_CheckRepeatedVariables);


static refalrts::FnResult func_ErrorsForRepeatedVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & ErrorsForRepeatedVariables/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ErrorsForRepeatedVariables/4 e.VarList-B#1/7 (/13 # TkVariable/15 t.SrcPos1#1/16 s.Mode#1/18 e.Index#1/11 )/14 e.VarList-M#1/19 (/25 # TkVariable/27 t.SrcPos2#1/31 s.Mode#1/30 e.Index#1/28 )/26 e.VarList-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_TkVariable], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Index#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_TkVariable], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[30], context[18], context[23], context[24] ) )
          continue;
        // closed e.VarList-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.VarList-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.Mode#1: 18
        //DEBUG: e.Index#1: 11
        //DEBUG: e.VarList-M#1: 19
        //DEBUG: e.VarList-E#1: 21
        //DEBUG: t.SrcPos2#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Redefine/4 AsIs: e.VarList-B#1/7 AsIs: (/13 AsIs: # TkVariable/15 AsIs: t.SrcPos1#1/16 AsIs: s.Mode#1/18 AsIs: e.Index#1/11 AsIs: )/14 } Tile{ AsIs: e.VarList-M#1/19 } Tile{ AsIs: e.VarList-E#1/21 } Tile{ AsIs: >/1 } Tile{ AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPos2#1/31 } # RepVarInSpecPattern/33 Tile{ AsIs: s.Mode#1/30 AsIs: e.Index#1/28 AsIs: )/26 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[33], identifiers[ident_RepVarInSpecPattern]);
        refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Redefine]);
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::link_brackets( context[25], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[26] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[25], context[32] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorsForRepeatedVariables/4 e.VarList#1/2 >/1
  // closed e.VarList#1 as range 2
  //DEBUG: e.VarList#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ErrorsForRepeatedVariables/4 e.VarList#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorsForRepeatedVariables("ErrorsForRepeatedVariables", 1367677873U, 2576037184U, func_ErrorsForRepeatedVariables);


static refalrts::FnResult func_gen_FindVariables_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FindVariables\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindVariables\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindVariables\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & FindVariables\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
        continue;
      // closed e.Index#2 as range 10
      //DEBUG: t.SrcPos#2: 12
      //DEBUG: s.Mode#2: 14
      //DEBUG: e.Index#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/10 AsIs: )/6 } Tile{ ]] }
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FindVariables\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FindVariables]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindVariables\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 e.InBrackets#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#2 as range 14
    // closed e.InBrackets#2 as range 10
    //DEBUG: t.SrcPos#2: 12
    //DEBUG: e.Name#2: 14
    //DEBUG: e.InBrackets#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindVariables]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindVariables\1/4 t.Term#2/5 >/1
  //DEBUG: t.Term#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindVariables\1/4 t.Term#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindVariables_L1("FindVariables\\1", 1367677873U, 2576037184U, func_gen_FindVariables_L1);


static refalrts::FnResult func_FindVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FindVariables/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FindVariables\1/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_FindVariables_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindVariables("FindVariables", 1367677873U, 2576037184U, func_FindVariables);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs-Functions$1=1/4 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#2 as range 2
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S1A1("CheckSpecs-Functions$1=1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Functions_S1A1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S1A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckSpecs-Functions$1=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 s.new#4/15 (/18 e.new#5/16 )/19 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 t.new#8/28 s.new#9/30 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new#5 as range 16
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  context[29] = refalrts::tvar_left( context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.AST-B#1/31 )/8 (/11 e.AST-M#1/33 )/12 t.SrcPos2#1/13 s.ScopeClass#1/15 (/18 e.Name#1/35 )/19 (/22 e.Body#1/37 )/23 (/26 e.AST-E#1/39 )/27 t.SrcPos1#1/28 # True/30 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[9];
    context[34] = context[10];
    context[35] = context[16];
    context[36] = context[17];
    context[37] = context[20];
    context[38] = context[21];
    context[39] = context[24];
    context[40] = context[25];
    if( ! refalrts::ident_term( identifiers[ident_True], context[30] ) )
      continue;
    // closed e.AST-B#1 as range 31
    // closed e.AST-M#1 as range 33
    // closed e.Name#1 as range 35
    // closed e.Body#1 as range 37
    // closed e.AST-E#1 as range 39
    //DEBUG: t.SrcPos2#1: 13
    //DEBUG: t.SrcPos1#1: 28
    //DEBUG: s.ScopeClass#1: 15
    //DEBUG: e.AST-B#1: 31
    //DEBUG: e.AST-M#1: 33
    //DEBUG: e.Name#1: 35
    //DEBUG: e.Body#1: 37
    //DEBUG: e.AST-E#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$1=1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/23 (/26 {REMOVED TILE} {REMOVED TILE} t.SrcPos1#1/28 # True/30 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/31 } Tile{ AsIs: e.AST-M#1/33 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Function/12 AsIs: t.SrcPos2#1/13 AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/35 AsIs: )/19 } Tile{ AsIs: e.Body#1/37 } Tile{ AsIs: )/27 } Tile{ AsIs: e.AST-E#1/39 } Tile{ ]] }
    refalrts::reinit_ident(context[12], identifiers[ident_Function]);
    refalrts::link_brackets( context[22], context[27] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.AST-B#1/5 )/8 (/11 e.AST-M#1/9 )/12 t.SrcPos2#1/13 s.ScopeClass#1/15 (/18 e.Name#1/16 )/19 (/22 e.Body#1/20 )/23 (/26 e.AST-E#1/24 )/27 t.SrcPos1#1/28 # False/30 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[30] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST-B#1 as range 5
  // closed e.AST-M#1 as range 9
  // closed e.Name#1 as range 16
  // closed e.Body#1 as range 20
  // closed e.AST-E#1 as range 24
  //DEBUG: t.SrcPos2#1: 13
  //DEBUG: t.SrcPos1#1: 28
  //DEBUG: s.ScopeClass#1: 15
  //DEBUG: e.AST-B#1: 5
  //DEBUG: e.AST-M#1: 9
  //DEBUG: e.Name#1: 16
  //DEBUG: e.Body#1: 20
  //DEBUG: e.AST-E#1: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$1=1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Error/27 AsIs: t.SrcPos1#1/28 Reuse: # BadSpecForFunction/30 HalfReuse: )/1 } Tile{ AsIs: e.AST-M#1/9 } Tile{ AsIs: (/26 } Tile{ HalfReuse: # Function/12 AsIs: t.SrcPos2#1/13 AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 } Tile{ AsIs: e.Body#1/20 } Tile{ AsIs: )/23 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::reinit_ident(context[27], identifiers[ident_Error]);
  refalrts::update_ident(context[30], identifiers[ident_BadSpecForFunction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_ident(context[12], identifiers[ident_Function]);
  refalrts::link_brackets( context[26], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[22], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[27], context[1] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S1A1B1("CheckSpecs-Functions$1=1:1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Functions_S1A1B1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs-Functions$2=1/4 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#2 as range 2
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S2A1("CheckSpecs-Functions$2=1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Functions_S2A1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckSpecs-Functions$2=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 (/14 e.new#4/12 )/15 (/18 e.new#5/16 )/19 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 t.new#8/28 s.new#9/30 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new#4 as range 12
  // closed e.new#5 as range 16
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  context[29] = refalrts::tvar_left( context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.AST-B#1/31 )/8 t.SrcPos1#1/9 s.ScopeClass#1/11 (/14 e.Name#1/33 )/15 (/18 e.Body#1/35 )/19 (/22 e.AST-M#1/37 )/23 (/26 e.AST-E#1/39 )/27 t.SrcPos2#1/28 # True/30 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[12];
    context[34] = context[13];
    context[35] = context[16];
    context[36] = context[17];
    context[37] = context[20];
    context[38] = context[21];
    context[39] = context[24];
    context[40] = context[25];
    if( ! refalrts::ident_term( identifiers[ident_True], context[30] ) )
      continue;
    // closed e.AST-B#1 as range 31
    // closed e.Name#1 as range 33
    // closed e.Body#1 as range 35
    // closed e.AST-M#1 as range 37
    // closed e.AST-E#1 as range 39
    //DEBUG: t.SrcPos1#1: 9
    //DEBUG: t.SrcPos2#1: 28
    //DEBUG: s.ScopeClass#1: 11
    //DEBUG: e.AST-B#1: 31
    //DEBUG: e.Name#1: 33
    //DEBUG: e.Body#1: 35
    //DEBUG: e.AST-M#1: 37
    //DEBUG: e.AST-E#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$2=1:1/4 (/7 {REMOVED TILE} {REMOVED TILE} (/18 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE} )/23 (/26 {REMOVED TILE} {REMOVED TILE} t.SrcPos2#1/28 # True/30 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/31 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Function/8 AsIs: t.SrcPos1#1/9 AsIs: s.ScopeClass#1/11 AsIs: (/14 AsIs: e.Name#1/33 AsIs: )/15 } Tile{ AsIs: e.Body#1/35 } Tile{ AsIs: )/27 } Tile{ AsIs: e.AST-M#1/37 } Tile{ AsIs: e.AST-E#1/39 } Tile{ ]] }
    refalrts::reinit_ident(context[8], identifiers[ident_Function]);
    refalrts::link_brackets( context[22], context[27] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.AST-B#1/5 )/8 t.SrcPos1#1/9 s.ScopeClass#1/11 (/14 e.Name#1/12 )/15 (/18 e.Body#1/16 )/19 (/22 e.AST-M#1/20 )/23 (/26 e.AST-E#1/24 )/27 t.SrcPos2#1/28 # False/30 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[30] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST-B#1 as range 5
  // closed e.Name#1 as range 12
  // closed e.Body#1 as range 16
  // closed e.AST-M#1 as range 20
  // closed e.AST-E#1 as range 24
  //DEBUG: t.SrcPos1#1: 9
  //DEBUG: t.SrcPos2#1: 28
  //DEBUG: s.ScopeClass#1: 11
  //DEBUG: e.AST-B#1: 5
  //DEBUG: e.Name#1: 12
  //DEBUG: e.Body#1: 16
  //DEBUG: e.AST-M#1: 20
  //DEBUG: e.AST-E#1: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$2=1:1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/19 {REMOVED TILE} (/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/18 } Tile{ HalfReuse: # Function/8 AsIs: t.SrcPos1#1/9 AsIs: s.ScopeClass#1/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: e.Body#1/16 } Tile{ HalfReuse: )/22 AsIs: e.AST-M#1/20 HalfReuse: (/23 } Tile{ HalfReuse: # Error/27 AsIs: t.SrcPos2#1/28 Reuse: # BadSpecForFunction/30 HalfReuse: )/1 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::reinit_ident(context[8], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[22]);
  refalrts::reinit_open_bracket(context[23]);
  refalrts::reinit_ident(context[27], identifiers[ident_Error]);
  refalrts::update_ident(context[30], identifiers[ident_BadSpecForFunction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[23], context[1] );
  refalrts::link_brackets( context[18], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[27], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S2A1B1("CheckSpecs-Functions$2=1:1", 1367677873U, 2576037184U, func_gen_CheckSpecsm_Functions_S2A1B1);


static refalrts::FnResult func_CheckSpecsm_Functions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & CheckSpecs-Functions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos1#1/16 (/20 e.Name#1/18 )/21 e.Pattern#1/11 )/14 e.AST-M#1/22 (/28 # Function/30 t.SrcPos2#1/31 s.ScopeClass#1/33 (/36 e.Name#1/38 )/37 e.Body#1/26 )/29 e.AST-E#1/24 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern#1 as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Function], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.AST-E#1 as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        if( ! refalrts::svar_left( context[33], context[26], context[27] ) )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[26], context[27] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[18], context[19], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        // closed e.Body#1 as range 26
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.AST-M#1: 22
        //DEBUG: e.AST-E#1: 24
        //DEBUG: t.SrcPos2#1: 31
        //DEBUG: s.ScopeClass#1: 33
        //DEBUG: e.Body#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$1=1/4 } </40 [*]/41 & CheckSpecs-Functions$1=1:1/42 Tile{ AsIs: (/28 } Tile{ AsIs: e.AST-B#1/7 } )/43 Tile{ AsIs: (/13 } Tile{ AsIs: e.AST-M#1/22 } Tile{ HalfReuse: )/30 AsIs: t.SrcPos2#1/31 AsIs: s.ScopeClass#1/33 AsIs: (/36 AsIs: e.Name#1/38 AsIs: )/37 } (/44 Tile{ AsIs: e.Body#1/26 } Tile{ AsIs: )/29 } (/45 Tile{ AsIs: e.AST-E#1/24 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 HalfReuse: {*}/20 } </46 & ValidBodyForSpec/47 Tile{ HalfReuse: (/21 AsIs: e.Pattern#1/11 AsIs: )/14 } e.Body#1/26/48 >/50 >/51 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_closure_head(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[47], functions[efunc_ValidBodyForSpec]);
        refalrts::copy_evar(vm, context[48], context[49], context[26], context[27]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S1A1]);
        refalrts::reinit_close_bracket(context[30]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_unwrapped_closure(context[20], context[41]);
        refalrts::reinit_open_bracket(context[21]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[46] );
        refalrts::link_brackets( context[21], context[14] );
        refalrts::link_brackets( context[45], context[15] );
        refalrts::link_brackets( context[44], context[29] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[13], context[30] );
        refalrts::link_brackets( context[28], context[43] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[21], context[14] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[15], context[20] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[30], context[37] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[40], context[42] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[20] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Function/15 t.SrcPos1#1/16 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 e.Body#1/11 )/14 e.AST-M#1/23 (/29 # Spec/31 t.SrcPos2#1/32 (/36 e.Name#1/38 )/37 e.Pattern#1/27 )/30 e.AST-E#1/25 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[11], context[12] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Name#1 as range 19
      // closed e.Body#1 as range 11
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[9];
        context[26] = context[10];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left( identifiers[ident_Spec], context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.AST-E#1 as range 25
        context[33] = refalrts::tvar_left( context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[27], context[28] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[19], context[20], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        // closed e.Pattern#1 as range 27
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 19
        //DEBUG: e.Body#1: 11
        //DEBUG: e.AST-M#1: 23
        //DEBUG: e.AST-E#1: 25
        //DEBUG: t.SrcPos2#1: 32
        //DEBUG: e.Pattern#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$2=1/4 } </40 [*]/41 & CheckSpecs-Functions$2=1:1/42 (/43 Tile{ AsIs: e.AST-B#1/7 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Body#1/11 } )/44 Tile{ HalfReuse: (/14 AsIs: e.AST-M#1/23 HalfReuse: )/29 HalfReuse: (/31 } Tile{ AsIs: e.AST-E#1/25 } )/45 Tile{ AsIs: t.SrcPos2#1/32 HalfReuse: {*}/36 } </46 & ValidBodyForSpec/47 Tile{ HalfReuse: (/37 AsIs: e.Pattern#1/27 AsIs: )/30 } e.Body#1/11/48 >/50 >/51 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_closure_head(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::alloc_close_bracket(vm, context[45]);
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[47], functions[efunc_ValidBodyForSpec]);
        refalrts::copy_evar(vm, context[48], context[49], context[11], context[12]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S2A1]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::reinit_unwrapped_closure(context[36], context[41]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[46] );
        refalrts::link_brackets( context[37], context[30] );
        refalrts::link_brackets( context[31], context[45] );
        refalrts::link_brackets( context[14], context[29] );
        refalrts::link_brackets( context[13], context[44] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[43], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[37], context[30] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[32], context[36] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[14], context[31] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[15], context[22] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[40], context[43] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[36] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos#1/16 (/20 e.Name#1/18 )/21 e.Pattern#1/11 )/14 e.AST-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.AST-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern#1 as range 11
      //DEBUG: e.AST-B#1: 7
      //DEBUG: e.AST-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Name#1: 18
      //DEBUG: e.Pattern#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Pattern#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-Functions/4 AsIs: e.AST-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPos#1/16 HalfReuse: # OrphanSpec/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: e.AST-E#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::reinit_ident(context[20], identifiers[ident_OrphanSpec]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Functions("CheckSpecs-Functions", 1367677873U, 2576037184U, func_CheckSpecsm_Functions);


static refalrts::FnResult func_ValidBodyForSpec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ValidBodyForSpec/4 (/7 e.Pattern#1/5 )/8 e.Body#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Pattern#1 as range 5
  // closed e.Body#1 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidBodyForSpec/4 (/7 e.Pattern#1/5 )/8 e.Body#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidBodyForSpec("ValidBodyForSpec", 1367677873U, 2576037184U, func_ValidBodyForSpec);


static refalrts::FnResult func_CheckSpecsm_SeparateErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & CheckSpecs-SeparateErrors/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs-SeparateErrors-Rec/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_CheckSpecsm_SeparateErrorsm_Rec]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_SeparateErrors("CheckSpecs-SeparateErrors", 1367677873U, 2576037184U, func_CheckSpecsm_SeparateErrors);


static refalrts::FnResult func_CheckSpecsm_SeparateErrorsm_Rec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CheckSpecs-SeparateErrors-Rec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.SpecErrorList#1/9 )/8 e.AST-B#1/13 (/19 # Error/21 t.SrsPos#1/22 t.SpecErrorType#1/24 e.Name#1/17 )/20 e.AST-E#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.SpecErrorList#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_Error], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.AST-E#1 as range 15
      context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 17
      //DEBUG: e.SpecErrorList#1: 9
      //DEBUG: e.AST-B#1: 13
      //DEBUG: e.AST-E#1: 15
      //DEBUG: t.SrsPos#1: 22
      //DEBUG: t.SpecErrorType#1: 24
      //DEBUG: e.Name#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-SeparateErrors-Rec/4 AsIs: (/7 } Tile{ AsIs: e.SpecErrorList#1/9 } Tile{ AsIs: (/19 AsIs: # Error/21 AsIs: t.SrsPos#1/22 AsIs: t.SpecErrorType#1/24 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: )/8 } Tile{ AsIs: e.AST-B#1/13 } Tile{ AsIs: e.AST-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.ErrorList#1/5 )/8 e.AST#1/2 >/1
  // closed e.ErrorList#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.ErrorList#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-SeparateErrors-Rec/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ErrorList#1/5 AsIs: )/8 } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_SeparateErrorsm_Rec("CheckSpecs-SeparateErrors-Rec", 1367677873U, 2576037184U, func_CheckSpecsm_SeparateErrorsm_Rec);


static refalrts::FnResult func_gen_SeparateDefines_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & SeparateDefines\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SeparateDefines\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & SeparateDefines\1/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 t.new#6/18 e.new#7/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
    if( ! context[19] )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & SeparateDefines\1/4 (/7 e.new#8/20 )/8 (/11 s.new#9/13 t.new#10/18 s.new#11/24 e.new#12/22 )/12 >/1
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      // closed e.new#8 as range 20
      if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
        continue;
      // closed e.new#12 as range 22
      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Function/13 t.SrcPos#2/18 s.ScopeClass#2/24 (/31 e.Name#2/29 )/32 e.Body#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
          continue;
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 29
        // closed e.Body#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 29
        //DEBUG: e.Body#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 } Tile{ AsIs: e.Name#2/29 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/31 } Tile{ HalfReuse: (/32 AsIs: e.Body#2/27 AsIs: )/12 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[31]);
        refalrts::reinit_open_bracket(context[32]);
        refalrts::link_brackets( context[32], context[12] );
        refalrts::link_brackets( context[0], context[31] );
        refalrts::link_brackets( context[11], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[32], context[12] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[11], context[24] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Swap/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Swap], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Enum/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Enum], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Declaration/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Declaration], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Declare/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Declare]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Entry/13 t.SrcPos#2/18 # GN-Entry/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Entry], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[24] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} # GN-Entry/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Entry/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[11], context[19] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Inline/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Inline], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} s.ScopeClass#2/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Inline/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[11], context[19] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Drive/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_Drive], context[13] ) )
        continue;
      // closed e.Declarations#2 as range 25
      // closed e.Name#2 as range 27
      //DEBUG: t.SrcPos#2: 18
      //DEBUG: s.ScopeClass#2: 24
      //DEBUG: e.Declarations#2: 25
      //DEBUG: e.Name#2: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} s.ScopeClass#2/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Drive/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[11], context[19] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/20 )/8 (/11 # Ident/13 t.SrcPos#2/18 e.Name#2/22 )/12 >/1
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[13] ) )
      continue;
    // closed e.Declarations#2 as range 20
    // closed e.Name#2 as range 22
    //DEBUG: t.SrcPos#2: 18
    //DEBUG: e.Declarations#2: 20
    //DEBUG: e.Name#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SeparateDefines\1/4 {REMOVED TILE} (/11 # Ident/13 t.SrcPos#2/18 e.Name#2/22 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#2/20 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/5 )/8 (/11 # NativeBlock/13 e.Block#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Declarations#2 as range 5
  // closed e.Block#2 as range 9
  //DEBUG: e.Declarations#2: 5
  //DEBUG: e.Block#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SeparateDefines\1/4 {REMOVED TILE} (/11 # NativeBlock/13 e.Block#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SeparateDefines_L1("SeparateDefines\\1", 1367677873U, 2576037184U, func_gen_SeparateDefines_L1);


static refalrts::FnResult func_SeparateDefines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & SeparateDefines/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & SeparateDefines\1/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_SeparateDefines_L1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SeparateDefines("SeparateDefines", 1367677873U, 2576037184U, func_SeparateDefines);


static refalrts::FnResult func_CheckDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CheckDeclarations/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Declarations#1/2 HalfReuse: </1 } & Pipe/5 & CleanupValidEntry/6 & FindInvalidEntry/7 & CleanupValidForwards/8 & FindInvalidForwards/9 & CleanupValidDriveInline/10 & FindInvalidDriveInline/11 & CheckRedefinitions/12 >/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[6], functions[efunc_CleanupValidEntry]);
  refalrts::alloc_name(vm, context[7], functions[efunc_FindInvalidEntry]);
  refalrts::alloc_name(vm, context[8], functions[efunc_CleanupValidForwards]);
  refalrts::alloc_name(vm, context[9], functions[efunc_FindInvalidForwards]);
  refalrts::alloc_name(vm, context[10], functions[efunc_CleanupValidDriveInline]);
  refalrts::alloc_name(vm, context[11], functions[efunc_FindInvalidDriveInline]);
  refalrts::alloc_name(vm, context[12], functions[efunc_CheckRedefinitions]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckDeclarations("CheckDeclarations", 1367677873U, 2576037184U, func_CheckDeclarations);


static refalrts::FnResult func_InlineDriveErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & InlineDriveErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & InlineDriveErrors/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & InlineDriveErrors/4 # Inline/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & InlineDriveErrors/4 # Inline/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # DanglingInline/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_DanglingInline]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & InlineDriveErrors/4 # Drive/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Drive], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & InlineDriveErrors/4 # Drive/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # DanglingDrive/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_DanglingDrive]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_InlineDriveErrors("InlineDriveErrors", 1367677873U, 2576037184U, func_InlineDriveErrors);


static refalrts::FnResult func_CleanupValidDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CleanupValidDriveInline/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidDriveInline/4 e.Declarations-B#1/7 (/13 s.Label#1/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 e.Declarations-M#1/18 (/24 # Define/26 t.SrcPosDefine#1/29 s.ScopeClass#1/31 e.Name#1/27 )/25 e.Declarations-E#1/20 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Name#1 as range 11
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[9];
        context[21] = context[10];
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
        if( ! context[24] )
          continue;
        refalrts::bracket_pointers(context[24], context[25]);
        context[26] = refalrts::ident_left( identifiers[ident_Define], context[22], context[23] );
        if( ! context[26] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[27], context[28], context[11], context[12], context[22], context[23] ) )
          continue;
        // closed e.Declarations-E#1 as range 20
        context[30] = refalrts::tvar_left( context[29], context[22], context[23] );
        if( ! context[30] )
          continue;
        if( ! refalrts::svar_left( context[31], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: s.Label#1: 15
        //DEBUG: t.SrcPosEntry#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 18
        //DEBUG: e.Declarations-E#1: 20
        //DEBUG: t.SrcPosDefine#1: 29
        //DEBUG: s.ScopeClass#1: 31
        //7: e.Declarations-B#1
        //11: e.Name#1
        //15: s.Label#1
        //16: t.SrcPosEntry#1
        //18: e.Declarations-M#1
        //20: e.Declarations-E#1
        //27: e.Name#1
        //29: t.SrcPosDefine#1
        //31: s.ScopeClass#1
        //37: s.Label#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_CleanupValidDriveInline_S1C1]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[37], context[15]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Inline]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_Drive]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[35] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_stvar( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </32 & CleanupValidDriveInline$1?1/36 # True/37 >/33
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
          context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
          if( ! context[37] )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          //DEBUG: e.Declarations-B#1: 7
          //DEBUG: s.Label#1: 15
          //DEBUG: t.SrcPosEntry#1: 16
          //DEBUG: e.Name#1: 11
          //DEBUG: e.Declarations-M#1: 18
          //DEBUG: e.Declarations-E#1: 20
          //DEBUG: t.SrcPosDefine#1: 29
          //DEBUG: s.ScopeClass#1: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 s.Label#1/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE} & CleanupValidDriveInline$1?1/36 # True/37 >/33 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidDriveInline/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/18 } Tile{ AsIs: (/24 AsIs: # Define/26 AsIs: t.SrcPosDefine#1/29 AsIs: s.ScopeClass#1/31 AsIs: e.Name#1/27 AsIs: )/25 AsIs: e.Declarations-E#1/20 HalfReuse: >/32 } Tile{ ]] }
          refalrts::reinit_close_call(context[32]);
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[24], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[24], context[32] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[32], context[33]);
        continue;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidDriveInline/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 s.ScopeClass#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 s.Label#1/29 t.SrcPosEntry#1/30 e.Name#1/27 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        if( ! refalrts::repeated_evar_right( vm, context[27], context[28], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
          continue;
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: s.Label#1: 29
        //DEBUG: t.SrcPosEntry#1: 30
        //7: e.Declarations-B#1
        //11: e.Name#1
        //16: t.SrcPosDefine#1
        //18: s.ScopeClass#1
        //19: e.Declarations-M#1
        //21: e.Declarations-E#1
        //27: e.Name#1
        //29: s.Label#1
        //30: t.SrcPosEntry#1
        //37: s.Label#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_CleanupValidDriveInline_S2C1]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[37], context[29]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Inline]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_Drive]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[35] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_stvar( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </32 & CleanupValidDriveInline$2?1/36 # True/37 >/33
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
          context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
          if( ! context[37] )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          //DEBUG: e.Declarations-B#1: 7
          //DEBUG: t.SrcPosDefine#1: 16
          //DEBUG: s.ScopeClass#1: 18
          //DEBUG: e.Name#1: 11
          //DEBUG: e.Declarations-M#1: 19
          //DEBUG: e.Declarations-E#1: 21
          //DEBUG: s.Label#1: 29
          //DEBUG: t.SrcPosEntry#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 s.Label#1/29 t.SrcPosEntry#1/30 e.Name#1/27 )/26 {REMOVED TILE} </32 & CleanupValidDriveInline$2?1/36 # True/37 >/33 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidDriveInline/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[32], context[33]);
        continue;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidDriveInline/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidDriveInline/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidDriveInline("CleanupValidDriveInline", 1367677873U, 2576037184U, func_CleanupValidDriveInline);


static refalrts::FnResult func_gen_FindInvalidDriveInline_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindInvalidDriveInline\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidDriveInline\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindInvalidDriveInline\1/4 (/5 s.Label#2/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: s.Label#2: 9
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 7
    //7: e.Name#2
    //9: s.Label#2
    //10: t.SrcPos#2
    //17: s.Label#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_FindInvalidDriveInline_L1S1C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[17], context[9]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_Inline]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_Drive]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & FindInvalidDriveInline\1$1?1/16 # True/17 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
      if( ! context[17] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: s.Label#2: 9
      //DEBUG: t.SrcPos#2: 10
      //DEBUG: e.Name#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 s.Label#2/9 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#2/10 } Tile{ AsIs: </12 Reuse: & InlineDriveErrors/16 HalfReuse: s.Label2 #9/17 AsIs: >/13 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Error]);
      refalrts::update_name(context[16], functions[efunc_InlineDriveErrors]);
      refalrts::reinit_svar( context[17], context[9] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidDriveInline\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_L1("FindInvalidDriveInline\\1", 1367677873U, 2576037184U, func_gen_FindInvalidDriveInline_L1);


static refalrts::FnResult func_FindInvalidDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FindInvalidDriveInline/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FindInvalidDriveInline\1/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInvalidDriveInline("FindInvalidDriveInline", 1367677873U, 2576037184U, func_FindInvalidDriveInline);


static refalrts::FnResult func_CleanupValidEntry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & CleanupValidEntry/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidEntry/4 e.Declarations-B#1/7 (/13 # Entry/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 e.Declarations-M#1/18 (/24 # Define/26 t.SrcPosDefine#1/29 s.ScopeClass#1/31 e.Name#1/27 )/25 e.Declarations-E#1/20 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Entry], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Name#1 as range 11
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[9];
        context[21] = context[10];
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
        if( ! context[24] )
          continue;
        refalrts::bracket_pointers(context[24], context[25]);
        context[26] = refalrts::ident_left( identifiers[ident_Define], context[22], context[23] );
        if( ! context[26] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[27], context[28], context[11], context[12], context[22], context[23] ) )
          continue;
        // closed e.Declarations-E#1 as range 20
        context[30] = refalrts::tvar_left( context[29], context[22], context[23] );
        if( ! context[30] )
          continue;
        if( ! refalrts::svar_left( context[31], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosEntry#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 18
        //DEBUG: e.Declarations-E#1: 20
        //DEBUG: t.SrcPosDefine#1: 29
        //DEBUG: s.ScopeClass#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} t.SrcPosEntry#1/16 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/31 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidEntry/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/18 } Tile{ AsIs: (/24 AsIs: # Define/26 AsIs: t.SrcPosDefine#1/29 } Tile{ Reuse: # GN-Entry/15 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: )/25 AsIs: e.Declarations-E#1/20 AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_GNm_Entry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[24], context[30] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidEntry/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 s.ScopeClass#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Entry/27 t.SrcPosEntry#1/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Entry], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosEntry#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.ScopeClass#1/18 e.Name#1/11 )/14 {REMOVED TILE} (/25 {REMOVED TILE} t.SrcPosEntry#1/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidEntry/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 } Tile{ Reuse: # GN-Entry/27 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[27], identifiers[ident_GNm_Entry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::splice_to_freelist_open( vm, context[17], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidEntry/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidEntry/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidEntry("CleanupValidEntry", 1367677873U, 2576037184U, func_CleanupValidEntry);


static refalrts::FnResult func_gen_FindInvalidEntry_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindInvalidEntry\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidEntry\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindInvalidEntry\1/4 (/5 # Entry/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Entry], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindInvalidEntry\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Error/9 AsIs: t.SrcPos#2/10 } Tile{ HalfReuse: # DanglingEntry/6 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident(context[9], identifiers[ident_Error]);
    refalrts::reinit_ident(context[6], identifiers[ident_DanglingEntry]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[5], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidEntry\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidEntry\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidEntry_L1("FindInvalidEntry\\1", 1367677873U, 2576037184U, func_gen_FindInvalidEntry_L1);


static refalrts::FnResult func_FindInvalidEntry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FindInvalidEntry/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FindInvalidEntry\1/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidEntry_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInvalidEntry("FindInvalidEntry", 1367677873U, 2576037184U, func_FindInvalidEntry);


static refalrts::FnResult func_CleanupValidForwards(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & CleanupValidForwards/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPosDefine#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosForward#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosDefine#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidForwards/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: (/25 AsIs: # Define/27 AsIs: t.SrcPosDefine#1/31 AsIs: # GN-Local/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidForwards/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Declare], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosForward#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: # GN-Local/18 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidForwards/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidForwards/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidForwards("CleanupValidForwards", 1367677873U, 2576037184U, func_CleanupValidForwards);


static refalrts::FnResult func_FindInvalidForwards(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & FindInvalidForwards/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPosDefine#1/31 # GN-Entry/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Entry], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosForward#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosDefine#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPosForward#1/16 Reuse: # ForwardForEntry/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 AsIs: # Define/27 AsIs: t.SrcPosDefine#1/31 AsIs: # GN-Entry/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_Error]);
        refalrts::update_ident(context[18], identifiers[ident_ForwardForEntry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 # GN-Entry/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Declare], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosForward#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: # GN-Entry/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPosForward#1/31 Reuse: # ForwardForEntry/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::update_ident(context[30], identifiers[ident_ForwardForEntry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Declarations-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      //DEBUG: e.Declarations-B#1: 7
      //DEBUG: e.Declarations-E#1: 9
      //DEBUG: t.SrcPosForward#1: 16
      //DEBUG: e.Name#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPosForward#1/16 Reuse: # ForwardNotDefined/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-E#1/9 AsIs: >/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::update_ident(context[18], identifiers[ident_ForwardNotDefined]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidForwards/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidForwards/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInvalidForwards("FindInvalidForwards", 1367677873U, 2576037184U, func_FindInvalidForwards);


static refalrts::FnResult func_CheckRedefinitions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CheckRedefinitions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckRedefinitions/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPos1#1/16 s.ScopeClass1#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPos2#1/30 s.ScopeClass2#1/32 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::svar_left( context[32], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.ScopeClass1#1: 18
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPos2#1: 30
        //DEBUG: s.ScopeClass2#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass2#1/32 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: </0 AsIs: & CheckRedefinitions/4 } Tile{ AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPos1#1/16 AsIs: s.ScopeClass1#1/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPos2#1/30 } # AlreadyDefined/33 Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[33], identifiers[ident_AlreadyDefined]);
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[13], context[31] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckRedefinitions/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckRedefinitions/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRedefinitions("CheckRedefinitions", 1367677873U, 2576037184U, func_CheckRedefinitions);


static refalrts::FnResult func_CheckFunctionBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckFunctionBody/4 (/7 e.Body#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Body#1 as range 5
  //DEBUG: e.Body#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckFunctionBody("CheckFunctionBody", 1367677873U, 2576037184U, func_CheckFunctionBody);


static refalrts::FnResult func_CheckFunctionBodyRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckFunctionBodyRec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckFunctionBodyRec/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/10 )/8 # Sentences/9 e.Sentences#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[9] ) )
      continue;
    // closed e.ScopeVars#1 as range 10
    // closed e.Sentences#1 as range 12
    //DEBUG: e.ScopeVars#1: 10
    //DEBUG: e.Sentences#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } Tile{ HalfReuse: & CheckSentence/8 } Tile{ AsIs: e.ScopeVars#1/10 } Tile{ HalfReuse: )/9 AsIs: e.Sentences#1/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Map]);
    refalrts::reinit_name(context[8], functions[efunc_CheckSentence]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 5
  // closed e.Code#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 e.Code#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckFunctionBodyRec("CheckFunctionBodyRec", 1367677873U, 2576037184U, func_CheckFunctionBodyRec);


static refalrts::FnResult func_gen_CheckSentence_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CheckSentence=4/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.AssignmentsFunctionsAndErrors#3/9 )/12 (/15 e.ResultFunctionsAndErrors#4/13 )/16 e.BlocksFunctionsAndErrors#5/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.AssignmentsFunctionsAndErrors#3 as range 9
  // closed e.ResultFunctionsAndErrors#4 as range 13
  // closed e.BlocksFunctionsAndErrors#5 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 9
  //DEBUG: e.ResultFunctionsAndErrors#4: 13
  //DEBUG: e.BlocksFunctionsAndErrors#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSentence=4/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.PatternFunctionsAndErrors#2/5 } Tile{ AsIs: e.AssignmentsFunctionsAndErrors#3/9 } Tile{ AsIs: e.ResultFunctionsAndErrors#4/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#5/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A4("CheckSentence=4", 1367677873U, 2576037184U, func_gen_CheckSentence_A4);


static refalrts::FnResult func_gen_CheckSentence_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CheckSentence=3/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.AssignmentsFunctionsAndErrors#3/9 )/12 (/15 e.ScopeVars#3/13 )/16 (/19 e.Blocks#1/17 )/20 e.ResultFunctionsAndErrors#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.AssignmentsFunctionsAndErrors#3 as range 9
  // closed e.ScopeVars#3 as range 13
  // closed e.Blocks#1 as range 17
  // closed e.ResultFunctionsAndErrors#4 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 9
  //DEBUG: e.ScopeVars#3: 13
  //DEBUG: e.Blocks#1: 17
  //DEBUG: e.ResultFunctionsAndErrors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & CheckSentence=4/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.AssignmentsFunctionsAndErrors#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#4/2 } Tile{ AsIs: )/16 } {*}/22 </23 & CheckBlocks/24 (/25 Tile{ AsIs: e.ScopeVars#3/13 } Tile{ HalfReuse: )/19 AsIs: e.Blocks#1/17 HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_unwrapped_closure(vm, context[22], context[0]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_CheckBlocks]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A4]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[25], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A3("CheckSentence=3", 1367677873U, 2576037184U, func_gen_CheckSentence_A3);


static refalrts::FnResult func_gen_CheckSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & CheckSentence=2/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.Blocks#1/9 )/12 (/15 e.Result#1/13 )/16 (/19 e.ScopeVars#3/17 )/20 e.AssignmentsFunctionsAndErrors#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.Blocks#1 as range 9
  // closed e.Result#1 as range 13
  // closed e.ScopeVars#3 as range 17
  // closed e.AssignmentsFunctionsAndErrors#3 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.Blocks#1: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.ScopeVars#3: 17
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & CheckSentence=3/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.AssignmentsFunctionsAndErrors#3/2 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#3/17 AsIs: )/20 } (/22 Tile{ AsIs: e.Blocks#1/9 } )/23 {*}/24 </25 Tile{ HalfReuse: & CheckResult/12 AsIs: (/15 } e.ScopeVars#3/17/26 )/28 </29 & FlatExpr/30 Tile{ AsIs: e.Result#1/13 } >/31 >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_FlatExpr]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A3]);
  refalrts::reinit_name(context[12], functions[efunc_CheckResult]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[15], context[28] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A2("CheckSentence=2", 1367677873U, 2576037184U, func_gen_CheckSentence_A2);


static refalrts::FnResult func_gen_CheckSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CheckSentence=1/4 (/7 e.Blocks#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Assignments#1/13 )/16 (/19 e.ScopeVars#2/17 )/20 e.PatternFunctionsAndErrors#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Blocks#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Assignments#1 as range 13
  // closed e.ScopeVars#2 as range 17
  // closed e.PatternFunctionsAndErrors#2 as range 2
  //DEBUG: e.Blocks#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Assignments#1: 13
  //DEBUG: e.ScopeVars#2: 17
  //DEBUG: e.PatternFunctionsAndErrors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/21 & CheckSentence=2/22 (/23 Tile{ AsIs: e.PatternFunctionsAndErrors#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: {*}/15 } </24 & DoCheckAssignments/25 (/26 Tile{ AsIs: e.Assignments#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#2/17 AsIs: )/20 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_CheckSentence_A2]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_DoCheckAssignments]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[15], context[21]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[26], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[23], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A1("CheckSentence=1", 1367677873U, 2576037184U, func_gen_CheckSentence_A1);


static refalrts::FnResult func_CheckSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & CheckSentence/4 e.ScopeVars#1/2 (/7 (/11 e.Pattern#1/9 )/12 e.Assignments#1/5 (/19 e.Result#1/17 )/20 (/15 e.Blocks#1/13 )/16 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.ScopeVars#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Assignments#1 as range 5
  // closed e.Result#1 as range 17
  // closed e.Blocks#1 as range 13
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Blocks#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & CheckSentence=1/7 AsIs: (/11 } Tile{ AsIs: e.Blocks#1/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.Assignments#1/5 } )/21 {*}/22 </23 & CheckPattern/24 (/25 Tile{ AsIs: e.ScopeVars#1/2 } )/26 </27 & FlatExpr/28 Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: >/16 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_unwrapped_closure(vm, context[22], context[4]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_CheckPattern]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_FlatExpr]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_CheckSentence_A1]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[15] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentence("CheckSentence", 1367677873U, 2576037184U, func_CheckSentence);


static refalrts::FnResult func_gen_CheckBlocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CheckBlocks\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BlockBody#2/9 )/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 5
  // closed e.BlockBody#2 as range 9
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BlockBody#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 } Tile{ AsIs: e.BlockBody#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckBlocks_L1("CheckBlocks\\1", 1367677873U, 2576037184U, func_gen_CheckBlocks_L1);


static refalrts::FnResult func_CheckBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CheckBlocks/4 (/7 e.ScopeVars#1/5 )/8 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.ScopeVars#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: [*]/0 Reuse: & CheckBlocks\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.Blocks#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckBlocks_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckBlocks("CheckBlocks", 1367677873U, 2576037184U, func_CheckBlocks);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoCheckAssignments$2=3/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ResultFunctionsAndErrors#2/13 )/16 (/19 e.BlocksFunctionsAndErrors#3/17 )/20 (/23 e.ScopeVars#4/21 )/24 e.PatternFunctionsAndErrors#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ResultFunctionsAndErrors#2 as range 13
  // closed e.BlocksFunctionsAndErrors#3 as range 17
  // closed e.ScopeVars#4 as range 21
  // closed e.PatternFunctionsAndErrors#4 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ResultFunctionsAndErrors#2: 13
  //DEBUG: e.BlocksFunctionsAndErrors#3: 17
  //DEBUG: e.ScopeVars#4: 21
  //DEBUG: e.PatternFunctionsAndErrors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} )/24 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#4/21 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Errors#1/9 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/17 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoCheckAssignments]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A3("DoCheckAssignments$2=3", 1367677873U, 2576037184U, func_gen_DoCheckAssignments_S2A3);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoCheckAssignments$2=2/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ResultFunctionsAndErrors#2/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 e.Pattern#1/21 )/24 e.BlocksFunctionsAndErrors#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ResultFunctionsAndErrors#2 as range 13
  // closed e.ScopeVars#1 as range 17
  // closed e.Pattern#1 as range 21
  // closed e.BlocksFunctionsAndErrors#3 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ResultFunctionsAndErrors#2: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: e.Pattern#1: 21
  //DEBUG: e.BlocksFunctionsAndErrors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & DoCheckAssignments$2=3/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.ResultFunctionsAndErrors#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/2 } )/26 {*}/27 </28 & CheckPattern/29 (/30 Tile{ AsIs: e.ScopeVars#1/17 } )/31 Tile{ HalfReuse: </20 HalfReuse: & FlatExpr/23 AsIs: e.Pattern#1/21 HalfReuse: >/24 } >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[0]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_CheckPattern]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[23], functions[efunc_FlatExpr]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[19], context[26] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[26], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A2("DoCheckAssignments$2=2", 1367677873U, 2576037184U, func_gen_DoCheckAssignments_S2A2);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & DoCheckAssignments$2=1/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.Blocks#1/21 )/24 e.ResultFunctionsAndErrors#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.Blocks#1 as range 21
  // closed e.ResultFunctionsAndErrors#2 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Blocks#1: 21
  //DEBUG: e.ResultFunctionsAndErrors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & DoCheckAssignments$2=2/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/2 } )/26 (/27 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: {*}/23 } </28 & CheckBlocks/29 (/30 e.ScopeVars#1/13/31 Tile{ AsIs: )/24 } Tile{ AsIs: e.Blocks#1/21 } >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_CheckBlocks]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2]);
  refalrts::reinit_unwrapped_closure(context[23], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[30], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[27], context[16] );
  refalrts::link_brackets( context[15], context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A1("DoCheckAssignments$2=1", 1367677873U, 2576037184U, func_gen_DoCheckAssignments_S2A1);


static refalrts::FnResult func_DoCheckAssignments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoCheckAssignments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & DoCheckAssignments/4 (/7 )/8 (/11 e.ScopeVars#1/13 )/12 e.Errors#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.ScopeVars#1 as range 13
    // closed e.Errors#1 as range 15
    //DEBUG: e.ScopeVars#1: 13
    //DEBUG: e.Errors#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckAssignments/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#1/13 AsIs: )/12 } Tile{ AsIs: e.Errors#1/15 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments/4 (/7 (/15 s.ChainType#1/29 (/27 e.Result#1/25 )/28 (/23 e.Blocks#1/21 )/24 (/19 e.Pattern#1/17 )/20 )/16 e.Assignments#1/5 )/8 (/11 e.ScopeVars#1/9 )/12 e.Errors#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[13], context[14] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.Result#1 as range 25
  // closed e.Blocks#1 as range 21
  // closed e.Pattern#1 as range 17
  // closed e.Assignments#1 as range 5
  // closed e.ScopeVars#1 as range 9
  // closed e.Errors#1 as range 2
  if( ! refalrts::svar_left( context[29], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#1: 25
  //DEBUG: e.Blocks#1: 21
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.ScopeVars#1: 9
  //DEBUG: e.Errors#1: 2
  //DEBUG: s.ChainType#1: 29

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ChainType#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoCheckAssignments$2=1/7 AsIs: (/15 } Tile{ AsIs: e.Assignments#1/5 } )/30 Tile{ AsIs: (/27 } Tile{ AsIs: e.Errors#1/2 } Tile{ AsIs: )/28 AsIs: (/23 } e.ScopeVars#1/9/31 Tile{ AsIs: )/24 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: e.Blocks#1/21 } )/33 {*}/34 </35 Tile{ HalfReuse: & CheckResult/8 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } </36 & FlatExpr/37 Tile{ AsIs: e.Result#1/25 } >/38 >/39 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_unwrapped_closure(vm, context[34], context[4]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_open_call(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_FlatExpr]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_DoCheckAssignments_S2A1]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_name(context[8], functions[efunc_CheckResult]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[15], context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[16] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[28], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[15], res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckAssignments("DoCheckAssignments", 1367677873U, 2576037184U, func_DoCheckAssignments);


static refalrts::FnResult func_gen_FlatExpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FlatExpr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatExpr\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FlatExpr\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & FlatExpr\1/4 (/5 s.new#4/9 t.new#5/12 t.new#6/14 e.new#7/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[10], context[11] );
      if( ! context[15] )
        continue;
      // closed e.new#7 as range 10
      do {
        // </0 & FlatExpr\1/4 (/5 s.new#8/9 t.new#9/12 s.new#10/14 e.new#11/16 )/6 >/1
        context[16] = context[10];
        context[17] = context[11];
        if( ! refalrts::svar_term( context[14], context[14] ) )
          continue;
        // closed e.new#11 as range 16
        do {
          // </0 & FlatExpr\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
          context[18] = context[16];
          context[19] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 18
          //DEBUG: t.SrcPos#2: 12
          //DEBUG: s.Mode#2: 14
          //DEBUG: e.Index#2: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[5], context[6] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & FlatExpr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
        context[18] = context[16];
        context[19] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[9] ) )
          continue;
        // closed e.Index#2 as range 18
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: s.Mode#2: 14
        //DEBUG: e.Index#2: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FlatExpr\1/4 (/5 # Symbol/9 # Name/12 t.SrcPos#2/14 e.Name#2/16 )/6 >/1
      context[16] = context[10];
      context[17] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Name#2 as range 16
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: e.Name#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Name/12 AsIs: t.SrcPos#2/14 AsIs: e.Name#2/16 AsIs: )/6 } Tile{ ]] }
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlatExpr\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlatExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.new#4/12 (/16 e.new#5/14 )/17 e.new#6/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.new#5 as range 14
      // closed e.new#6 as range 10
      do {
        // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 # UnnamedADT/22 )/17 e.InBrackets#2/20 )/6 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[10];
        context[21] = context[11];
        context[22] = refalrts::ident_left( identifiers[ident_UnnamedADT], context[18], context[19] );
        if( ! context[22] )
          continue;
        if( ! refalrts::empty_seq( context[18], context[19] ) )
          continue;
        // closed e.InBrackets#2 as range 20
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: e.InBrackets#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 # UnnamedADT/22 )/17 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FlatExpr]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/18 )/17 e.InBrackets#2/20 )/6 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[10];
      context[21] = context[11];
      // closed e.Name#2 as range 18
      // closed e.InBrackets#2 as range 20
      //DEBUG: t.SrcPos#2: 12
      //DEBUG: e.Name#2: 18
      //DEBUG: e.InBrackets#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Symbol/5 Reuse: # Name/9 AsIs: t.SrcPos#2/12 } Tile{ AsIs: e.Name#2/18 } Tile{ AsIs: )/17 } Tile{ AsIs: </0 } Tile{ HalfReuse: & FlatExpr/6 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[5], identifiers[ident_Symbol]);
      refalrts::update_ident(context[9], identifiers[ident_Name]);
      refalrts::reinit_name(context[6], functions[efunc_FlatExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[4], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlatExpr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # CallBrackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlatExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlatExpr\1/4 (/5 # Closure/9 e.Sentences#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.Sentences#2 as range 10
    //DEBUG: e.Sentences#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Closure/9 AsIs: e.Sentences#2/10 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatExpr\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 t.OtherTerm#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatExpr_L1("FlatExpr\\1", 1367677873U, 2576037184U, func_gen_FlatExpr_L1);


static refalrts::FnResult func_FlatExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FlatExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FlatExpr\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_FlatExpr_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatExpr("FlatExpr", 1367677873U, 2576037184U, func_FlatExpr);


static refalrts::FnResult func_gen_CheckPattern_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckPattern$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPattern$2\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 t.new#3/14 t.new#4/16 e.new#5/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  do {
    // </0 & CheckPattern$2\1/4 (/7 e.new#6/18 )/8 (/11 s.new#7/13 t.new#8/14 s.new#9/16 e.new#10/20 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::svar_term( context[16], context[16] ) )
      continue;
    // closed e.new#6 as range 18
    // closed e.new#10 as range 20
    do {
      // </0 & CheckPattern$2\1/4 (/7 e.new#11/22 )/8 (/11 # TkVariable/13 t.new#12/14 s.new#13/16 e.new#14/24 )/12 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
        continue;
      // closed e.new#11 as range 22
      // closed e.new#14 as range 24
      do {
        // </0 & CheckPattern$2\1/4 (/7 e.KnownVars-B#2/30 (/36 s.Mode#2/38 e.Index#2/39 )/37 e.KnownVars-E#2/32 )/8 (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.Index#2 as range 28
        context[30] = 0;
        context[31] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[32] = context[26];
          context[33] = context[27];
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
          if( ! context[36] )
            continue;
          refalrts::bracket_pointers(context[36], context[37]);
          if( ! refalrts::repeated_stvar_left( vm, context[38], context[16], context[34], context[35] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[28], context[29], context[34], context[35] ) )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          // closed e.KnownVars-E#2 as range 32
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.Mode#2: 16
          //DEBUG: e.Index#2: 28
          //DEBUG: e.KnownVars-B#2: 30
          //DEBUG: e.KnownVars-E#2: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckPattern$2\1/4 {REMOVED TILE} (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars-B#2/30 AsIs: (/36 AsIs: s.Mode#2/38 AsIs: e.Index#2/39 AsIs: )/37 AsIs: e.KnownVars-E#2/32 AsIs: )/8 } Tile{ ]] }
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[36], context[37] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckPattern$2\1/4 (/7 e.KnownVars#2/26 )/8 (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1
      context[26] = context[22];
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      // closed e.KnownVars#2 as range 26
      // closed e.Index#2 as range 28
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: s.Mode#2: 16
      //DEBUG: e.KnownVars#2: 26
      //DEBUG: e.Index#2: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckPattern$2\1/4 {REMOVED TILE} (/11 # TkVariable/13 t.SrcPos#2/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/26 HalfReuse: (/8 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/28 AsIs: )/12 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckPattern$2\1/4 (/7 e.KnownVars#2/22 )/8 (/11 # TkNewVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/12 >/1
    context[22] = context[18];
    context[23] = context[19];
    context[24] = context[20];
    context[25] = context[21];
    if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[13] ) )
      continue;
    // closed e.KnownVars#2 as range 22
    // closed e.Index#2 as range 24
    //DEBUG: t.SrcPos#2: 14
    //DEBUG: s.Mode#2: 16
    //DEBUG: e.KnownVars#2: 22
    //DEBUG: e.Index#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} t.SrcPos#2/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & FixupKnownVars/7 AsIs: e.KnownVars#2/22 HalfReuse: (/8 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/24 AsIs: )/12 AsIs: >/1 } Tile{ HalfReuse: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_FixupKnownVars]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::link_brackets( context[0], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckPattern$2\1/4 (/7 e.KnownVars#2/18 )/8 (/11 # Symbol/13 # Name/14 t.SrcPos#2/16 e.Name#2/20 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
      continue;
    // closed e.KnownVars#2 as range 18
    // closed e.Name#2 as range 20
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: e.KnownVars#2: 18
    //DEBUG: e.Name#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckPattern$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/18 AsIs: )/8 AsIs: (/11 AsIs: # Symbol/13 AsIs: # Name/14 AsIs: t.SrcPos#2/16 AsIs: e.Name#2/20 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPattern$2\1/4 (/7 e.KnownVars#2/5 )/8 (/11 # Error/13 t.SrcPos#2/14 s.Type#2/16 e.Info#2/9 )/12 >/1
  if( ! refalrts::svar_term( context[16], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Error], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#2 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: t.SrcPos#2: 14
  //DEBUG: s.Type#2: 16
  //DEBUG: e.KnownVars#2: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckPattern$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Error/13 AsIs: t.SrcPos#2/14 AsIs: s.Type#2/16 AsIs: e.Info#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckPattern_S2L1("CheckPattern$2\\1", 1367677873U, 2576037184U, func_gen_CheckPattern_S2L1);


static refalrts::FnResult func_CheckPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & CheckPattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPattern/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckPattern/4 (/7 e.ScopeVars#1/9 )/8 e.Items-B#1/13 (/19 # TkVariable/21 t.SrcPos1#1/22 s.Mode1#1/24 e.Index#1/17 )/20 e.Items-M#1/25 (/31 # TkNewVariable/33 t.SrcPos2#1/36 s.Mode2#1/38 e.Index#1/34 )/32 e.Items-E#1/27 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.ScopeVars#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_TkVariable], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
        continue;
      // closed e.Index#1 as range 17
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[27] = context[15];
        context[28] = context[16];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        context[33] = refalrts::ident_left( identifiers[ident_TkNewVariable], context[29], context[30] );
        if( ! context[33] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[17], context[18], context[29], context[30] ) )
          continue;
        // closed e.Items-E#1 as range 27
        context[37] = refalrts::tvar_left( context[36], context[29], context[30] );
        if( ! context[37] )
          continue;
        if( ! refalrts::svar_left( context[38], context[29], context[30] ) )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: e.ScopeVars#1: 9
        //DEBUG: e.Items-B#1: 13
        //DEBUG: t.SrcPos1#1: 22
        //DEBUG: s.Mode1#1: 24
        //DEBUG: e.Index#1: 17
        //DEBUG: e.Items-M#1: 25
        //DEBUG: e.Items-E#1: 27
        //DEBUG: t.SrcPos2#1: 36
        //DEBUG: s.Mode2#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckPattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/9 AsIs: )/8 AsIs: e.Items-B#1/13 AsIs: (/19 AsIs: # TkVariable/21 AsIs: t.SrcPos1#1/22 AsIs: s.Mode1#1/24 AsIs: e.Index#1/17 AsIs: )/20 AsIs: e.Items-M#1/25 AsIs: (/31 Reuse: # TkVariable/33 AsIs: t.SrcPos2#1/36 AsIs: s.Mode2#1/38 AsIs: e.Index#1/34 AsIs: )/32 } (/39 # Error/40 t.SrcPos2#1/36/41 # AlreadyBounded/43 s.Mode2#1/38/44 e.Index#1/34/45 )/47 Tile{ AsIs: e.Items-E#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_ident(vm, context[40], identifiers[ident_Error]);
        refalrts::copy_evar(vm, context[41], context[42], context[36], context[37]);
        refalrts::alloc_ident(vm, context[43], identifiers[ident_AlreadyBounded]);
        refalrts::copy_stvar(vm, context[44], context[38]);
        refalrts::copy_evar(vm, context[45], context[46], context[34], context[35]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::update_ident(context[33], identifiers[ident_TkVariable]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[39], context[47] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[39], context[47] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPattern/4 (/7 e.ScopeVars#1/5 )/8 e.Items#1/2 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.Items#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & MapReduce/0 Reuse: & CheckPattern$2\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_MapReduce]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckPattern_S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckPattern("CheckPattern", 1367677873U, 2576037184U, func_CheckPattern);


static refalrts::FnResult func_FixupKnownVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FixupKnownVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FixupKnownVars/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & FixupKnownVars/4 e.KnownVars-B#1/14 (/20 s.OldMode#1/24 e.Index#1/22 )/21 e.KnownVars-E#1/16 (/7 s.NewMode#1/9 e.Index#1/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.Index#1 as range 12
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[10];
      context[17] = context[11];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      if( ! refalrts::repeated_evar_right( vm, context[22], context[23], context[12], context[13], context[18], context[19] ) )
        continue;
      // closed e.KnownVars-E#1 as range 16
      if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: s.NewMode#1: 9
      //DEBUG: e.Index#1: 12
      //DEBUG: e.KnownVars-B#1: 14
      //DEBUG: e.KnownVars-E#1: 16
      //DEBUG: s.OldMode#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FixupKnownVars/4 {REMOVED TILE} (/20 s.OldMode#1/24 e.Index#1/22 )/21 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.KnownVars-B#1/14 } Tile{ AsIs: (/7 AsIs: s.NewMode#1/9 AsIs: e.Index#1/12 AsIs: )/8 } Tile{ AsIs: e.KnownVars-E#1/16 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupKnownVars/4 e.KnownVars#1/2 (/7 s.Mode#1/9 e.Index#1/5 )/8 >/1
  // closed e.KnownVars#1 as range 2
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.KnownVars#1: 2
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupKnownVars/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.KnownVars#1/2 } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FixupKnownVars("FixupKnownVars", 1367677873U, 2576037184U, func_FixupKnownVars);


static refalrts::FnResult func_gen_CheckResult_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & CheckResult\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckResult\1/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & CheckResult\1/4 e.new#8/10 (/7 s.new#4/9 t.new#5/14 t.new#6/16 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#8 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & CheckResult\1/4 e.new#12/18 (/7 # TkVariable/9 t.new#9/14 s.new#10/16 e.new#11/20 )/8 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      // closed e.new#12 as range 18
      // closed e.new#11 as range 20
      do {
        // </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_stvar_left( vm, context[34], context[16], context[30], context[31] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[24], context[25], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.Mode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.OldMode#2/36 e.Index#2/34 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.NewMode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[24], context[25], context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.NewMode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28
          //DEBUG: s.OldMode#2: 36

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars-B#2/26 {REMOVED TILE} e.Index#2/34 )/33 e.KnownVars-E#2/28 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # InvalidMode/32 AsIs: s.OldMode#2/36 } Tile{ AsIs: s.NewMode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_Error]);
          refalrts::reinit_ident(context[32], identifiers[ident_InvalidMode]);
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[16], context[8] );
          res = refalrts::splice_evar( res, context[32], context[36] );
          res = refalrts::splice_evar( res, context[7], context[15] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckResult\1/4 e.KnownVars#2/22 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      // closed e.KnownVars#2 as range 22
      // closed e.Index#2 as range 24
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: s.Mode#2: 16
      //DEBUG: e.KnownVars#2: 22
      //DEBUG: e.Index#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # VariableNotFound/1 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[9], identifiers[ident_Error]);
      refalrts::reinit_ident(context[1], identifiers[ident_VariableNotFound]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[8] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckResult\1/4 e.KnownVars#2/18 (/7 # Symbol/9 # Name/14 t.SrcPos#2/16 e.Name#2/20 )/8 >/1
    context[18] = context[10];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    // closed e.KnownVars#2 as range 18
    // closed e.Name#2 as range 20
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: e.KnownVars#2: 18
    //DEBUG: e.Name#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/18 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/9 AsIs: # Name/14 AsIs: t.SrcPos#2/16 AsIs: e.Name#2/20 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckResult\1/4 e.KnownVars#2/10 (/7 # Closure/9 e.Body#2/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.KnownVars#2 as range 10
    // closed e.Body#2 as range 12
    //DEBUG: e.KnownVars#2: 10
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Closure/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownVars#2/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#2/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckResult\1/4 e.KnownVars#2/2 (/7 # Error/9 t.SrcPos#2/10 s.Type#2/12 e.Info#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Error], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#2 as range 2
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.KnownVars#2: 2
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: s.Type#2: 12
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Error/9 AsIs: t.SrcPos#2/10 AsIs: s.Type#2/12 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckResult_L1("CheckResult\\1", 1367677873U, 2576037184U, func_gen_CheckResult_L1);


static refalrts::FnResult func_CheckResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckResult/4 (/7 e.ScopeVars#1/5 )/8 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.ScopeVars#1 as range 5
  // closed e.Items#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & CheckResult\1/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_CheckResult_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckResult("CheckResult", 1367677873U, 2576037184U, func_CheckResult);


static refalrts::FnResult func_gen_CheckValidUsings_S5L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CheckValidUsings$5\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckValidUsings$5\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckValidUsings$5\1/4 (/5 # Error/9 t.SrcPos#2/10 s.Type#2/12 e.Info#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Error], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Info#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.Type#2: 12
    //DEBUG: e.Info#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckValidUsings$5\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Error/9 AsIs: t.SrcPos#2/10 AsIs: s.Type#2/12 AsIs: e.Info#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckValidUsings$5\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckValidUsings$5\1/4 t.OtherItem#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckValidUsings_S5L1("CheckValidUsings$5\\1", 1367677873U, 2576037184U, func_gen_CheckValidUsings_S5L1);


static refalrts::FnResult func_CheckValidUsings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & CheckValidUsings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckValidUsings/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckValidUsings/4 (/7 e.new#3/9 )/8 (/15 s.new#4/17 t.new#5/18 t.new#6/20 e.new#7/13 )/16 e.new#8/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#3 as range 9
    // closed e.new#8 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & CheckValidUsings/4 (/7 e.new#9/22 )/8 (/15 # Symbol/17 # Name/18 t.new#10/20 e.new#11/24 )/16 e.new#12/26 >/1
      context[22] = context[9];
      context[23] = context[10];
      context[24] = context[13];
      context[25] = context[14];
      context[26] = context[11];
      context[27] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[18] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[17] ) )
        continue;
      // closed e.new#9 as range 22
      // closed e.new#11 as range 24
      // closed e.new#12 as range 26
      do {
        // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors-B#1/34 (/40 # Declare/42 t.SrcPos#1/45 s.ScopeClass#1/47 e.Name#1/43 )/41 e.DeclarationsAndErrors-E#1/36 )/8 (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name#1 as range 30
        // closed e.NameRefsAndErrors#1 as range 32
        context[34] = 0;
        context[35] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[36] = context[28];
          context[37] = context[29];
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
          if( ! context[40] )
            continue;
          refalrts::bracket_pointers(context[40], context[41]);
          context[42] = refalrts::ident_left( identifiers[ident_Declare], context[38], context[39] );
          if( ! context[42] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[43], context[44], context[30], context[31], context[38], context[39] ) )
            continue;
          // closed e.DeclarationsAndErrors-E#1 as range 36
          context[46] = refalrts::tvar_left( context[45], context[38], context[39] );
          if( ! context[46] )
            continue;
          if( ! refalrts::svar_left( context[47], context[38], context[39] ) )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.SrcPosName#1: 20
          //DEBUG: e.Name#1: 30
          //DEBUG: e.NameRefsAndErrors#1: 32
          //DEBUG: e.DeclarationsAndErrors-B#1: 34
          //DEBUG: e.DeclarationsAndErrors-E#1: 36
          //DEBUG: t.SrcPos#1: 45
          //DEBUG: s.ScopeClass#1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors-B#1/34 AsIs: (/40 AsIs: # Declare/42 AsIs: t.SrcPos#1/45 AsIs: s.ScopeClass#1/47 AsIs: e.Name#1/43 AsIs: )/41 AsIs: e.DeclarationsAndErrors-E#1/36 AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[40], context[41] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[8], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[34], context[35], context[28], context[29] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors-B#1/34 (/40 # Define/42 t.SrcPos#1/45 s.ScopeClass#1/47 e.Name#1/43 )/41 e.DeclarationsAndErrors-E#1/36 )/8 (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name#1 as range 30
        // closed e.NameRefsAndErrors#1 as range 32
        context[34] = 0;
        context[35] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[36] = context[28];
          context[37] = context[29];
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
          if( ! context[40] )
            continue;
          refalrts::bracket_pointers(context[40], context[41]);
          context[42] = refalrts::ident_left( identifiers[ident_Define], context[38], context[39] );
          if( ! context[42] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[43], context[44], context[30], context[31], context[38], context[39] ) )
            continue;
          // closed e.DeclarationsAndErrors-E#1 as range 36
          context[46] = refalrts::tvar_left( context[45], context[38], context[39] );
          if( ! context[46] )
            continue;
          if( ! refalrts::svar_left( context[47], context[38], context[39] ) )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.SrcPosName#1: 20
          //DEBUG: e.Name#1: 30
          //DEBUG: e.NameRefsAndErrors#1: 32
          //DEBUG: e.DeclarationsAndErrors-B#1: 34
          //DEBUG: e.DeclarationsAndErrors-E#1: 36
          //DEBUG: t.SrcPos#1: 45
          //DEBUG: s.ScopeClass#1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors-B#1/34 AsIs: (/40 AsIs: # Define/42 AsIs: t.SrcPos#1/45 AsIs: s.ScopeClass#1/47 AsIs: e.Name#1/43 AsIs: )/41 AsIs: e.DeclarationsAndErrors-E#1/36 AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[40], context[41] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[8], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[34], context[35], context[28], context[29] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/28 )/8 (/15 # Symbol/17 # Name/18 t.SrcPos#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.DeclarationsAndErrors#1 as range 28
      // closed e.Name#1 as range 30
      // closed e.NameRefsAndErrors#1 as range 32
      //DEBUG: t.SrcPos#1: 20
      //DEBUG: e.DeclarationsAndErrors#1: 28
      //DEBUG: e.Name#1: 30
      //DEBUG: e.NameRefsAndErrors#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors#1/28 HalfReuse: (/8 HalfReuse: # Error/15 } Tile{ AsIs: t.SrcPos#1/20 } Tile{ Reuse: # NotDefined/18 } Tile{ AsIs: e.Name#1/30 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.NameRefsAndErrors#1/32 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[15], identifiers[ident_Error]);
      refalrts::update_ident(context[18], identifiers[ident_NotDefined]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::link_brackets( context[8], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/22 )/8 (/15 # Error/17 t.SrcPos#1/18 s.Type#1/20 e.Info#1/24 )/16 e.NameRefsAndErrors#1/26 >/1
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[11];
    context[27] = context[12];
    if( ! refalrts::svar_term( context[20], context[20] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Error], context[17] ) )
      continue;
    // closed e.DeclarationsAndErrors#1 as range 22
    // closed e.Info#1 as range 24
    // closed e.NameRefsAndErrors#1 as range 26
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: s.Type#1: 20
    //DEBUG: e.DeclarationsAndErrors#1: 22
    //DEBUG: e.Info#1: 24
    //DEBUG: e.NameRefsAndErrors#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 } Tile{ AsIs: e.DeclarationsAndErrors#1/22 } Tile{ AsIs: (/15 AsIs: # Error/17 AsIs: t.SrcPos#1/18 AsIs: s.Type#1/20 AsIs: e.Info#1/24 AsIs: )/16 } Tile{ AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DeclarationsAndErrors#1 as range 5
  //DEBUG: e.DeclarationsAndErrors#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CheckValidUsings$5\1/7 AsIs: e.DeclarationsAndErrors#1/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[7], functions[efunc_gen_CheckValidUsings_S5L1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckValidUsings("CheckValidUsings", 1367677873U, 2576037184U, func_CheckValidUsings);


//End of file
