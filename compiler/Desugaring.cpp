// This file automatically generated from 'Desugaring.ref'
// Don't edit! Edit 'Desugaring.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4132962843_2153315325

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
  efunc_Passm_UnCondition = 14,
  efunc_Pipe = 15,
  efunc_Passm_RemovePos = 16,
  efunc_Passm_AttachEntries = 17,
  efunc_Passm_EnumerateVariables = 18,
  efunc_Passm_NameNestedFuncs = 19,
  efunc_Passm_RemoveBlocksAndAssigns = 20,
  efunc_Passm_FlatNestedFuncs = 21,
  efunc_Fetch = 22,
  efunc_gen_Desugar_L1 = 23,
  efunc_Passm_CleanupRedudandExterns = 24,
  efunc_Passm_FoldEnums = 25,
  efunc_RemovePosm_Body = 26,
  efunc_RemovePosm_Expr = 27,
  efunc_Map = 28,
  efunc_gen_Passm_RemovePos_L1 = 29,
  efunc_RemovePosm_Blocks = 30,
  efunc_AssignOrCondition = 31,
  efunc_gen_RemovePosm_Body_S1L1L1A1 = 32,
  efunc_gen_RemovePosm_Body_S1L1L1 = 33,
  efunc_gen_RemovePosm_Body_S1L1 = 34,
  efunc_gen_RemovePosm_Blocks_L1 = 35,
  efunc_gen_RemovePosm_Expr_L1 = 36,
  efunc_gen_Passm_AttachEntries_S2C1 = 37,
  efunc_OneOf = 38,
  efunc_gen_Passm_AttachEntries_S5C1 = 39,
  efunc_gen_Passm_AttachEntries_S6C1 = 40,
  efunc_EnumerateVarsm_Body = 41,
  efunc_gen_Passm_EnumerateVariables_L1 = 42,
  efunc_EnumerateVarsm_Blocks = 43,
  efunc_Inc = 44,
  efunc_gen_EnumerateVarsm_Body_S1L1A4 = 45,
  efunc_EnumerateVarsm_Expr = 46,
  efunc_gen_EnumerateVarsm_Body_S1L1A3 = 47,
  efunc_gen_EnumerateVarsm_Body_S1L1A2 = 48,
  efunc_EnumerateVarsm_Assignments = 49,
  efunc_gen_EnumerateVarsm_Body_S1L1A1 = 50,
  efunc_gen_EnumerateVarsm_Body_S1L1 = 51,
  efunc_gen_EnumerateVarsm_Blocks_L1 = 52,
  efunc_gen_EnumerateVarsm_Assignments_S2A5 = 53,
  efunc_gen_EnumerateVarsm_Assignments_S2A4 = 54,
  efunc_gen_EnumerateVarsm_Assignments_S2A3 = 55,
  efunc_gen_EnumerateVarsm_Assignments_S2A2 = 56,
  efunc_gen_EnumerateVarsm_Assignments_S2A1 = 57,
  efunc_gen_EnumerateVarsm_Expr_L1S4L1 = 58,
  efunc_gen_EnumerateVarsm_Expr_L1S5L1 = 59,
  efunc_gen_EnumerateVarsm_Expr_L1S6L1 = 60,
  efunc_gen_EnumerateVarsm_Expr_L1S7L1 = 61,
  efunc_gen_EnumerateVarsm_Expr_L1 = 62,
  efunc_MapReduce = 63,
  efunc_NameNestedBody = 64,
  efunc_gen_Passm_NameNestedFuncs_L1 = 65,
  efunc_NameNestedAssigns = 66,
  efunc_NameNestedResult = 67,
  efunc_NameNestedBlocks = 68,
  efunc_gen_NameNestedBody_S2L1A1 = 69,
  efunc_DelAccumulator = 70,
  efunc_gen_NameNestedBody_S2L1 = 71,
  efunc_gen_NameNestedBlocks_A1L1A1 = 72,
  efunc_gen_NameNestedBlocks_A1 = 73,
  efunc_gen_NameNestedBlocks_A1L1 = 74,
  efunc_gen_NameNestedAssigns_L1A2 = 75,
  efunc_ChainTypeMarker = 76,
  efunc_gen_NameNestedAssigns_L1A1 = 77,
  efunc_gen_NameNestedAssigns_L1 = 78,
  efunc_NameNestedResultRec = 79,
  efunc_NameNestedResultRecm_Term = 80,
  efunc_gen_NameNestedResultRecm_Term_S1A1 = 81,
  efunc_gen_NameNestedResultRecm_Term_S2A1 = 82,
  efunc_gen_NameNestedResultRecm_Term_S3A1 = 83,
  efunc_RemoveAssignsm_Sentences = 84,
  efunc_gen_Passm_RemoveBlocksAndAssigns_L1 = 85,
  efunc_RemoveAssignsm_Sentence = 86,
  efunc_RemoveAssignsm_Result = 87,
  efunc_gen_RemoveAssignsm_Sentence_S2A3 = 88,
  efunc_RemoveAssignsm_WindBlocks = 89,
  efunc_gen_RemoveAssignsm_Sentence_S2A2 = 90,
  efunc_RemoveAssignsm_Conditions = 91,
  efunc_gen_RemoveAssignsm_Sentence_S2A1 = 92,
  efunc_gen_RemoveAssignsm_Conditions_L1A1 = 93,
  efunc_gen_RemoveAssignsm_Conditions_L1 = 94,
  efunc_Reduce = 95,
  efunc_gen_RemoveAssignsm_WindBlocks_L1 = 96,
  efunc_gen_RemoveAssignsm_Result_L1 = 97,
  efunc_gen_Passm_FlatNestedFuncs_L1S1A1 = 98,
  efunc_ExtractNested = 99,
  efunc_gen_Passm_FlatNestedFuncs_L1 = 100,
  efunc_ExtractNestedRec = 101,
  efunc_gen_ExtractNested_A1 = 102,
  efunc_ExtractNestedm_Sentence = 103,
  efunc_gen_ExtractNestedRec_S1A1 = 104,
  efunc_gen_ExtractNestedm_Sentence_A3 = 105,
  efunc_ExtractNestedm_Result = 106,
  efunc_ExtractNestedm_Conditions = 107,
  efunc_gen_ExtractNestedm_Sentence_A2 = 108,
  efunc_ExtractNestedm_Pattern = 109,
  efunc_gen_ExtractNestedm_Sentence_A1 = 110,
  efunc_gen_ExtractNestedm_Conditions_S1A4 = 111,
  efunc_gen_ExtractNestedm_Conditions_S1A3 = 112,
  efunc_Uniq = 113,
  efunc_gen_ExtractNestedm_Conditions_S1A2 = 114,
  efunc_gen_ExtractNestedm_Conditions_S1A1 = 115,
  efunc_ExtractAllVars = 116,
  efunc_UpdateBorrowedVars = 117,
  efunc_ExtractNestedm_Resultm_Term = 118,
  efunc_gen_ExtractNestedm_Result_A1 = 119,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1 = 120,
  efunc_CheckBorrowed = 121,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1 = 122,
  efunc_CreateContext = 123,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2 = 124,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1 = 125,
  efunc_gen_ExtractNestedm_Resultm_Term_S2A1 = 126,
  efunc_gen_ExtractNestedm_Resultm_Term_S3A1 = 127,
  efunc_gen_ExtractNestedm_Resultm_Term_S4A1 = 128,
  efunc_gen_ExtractNestedm_Resultm_Term_S5A1 = 129,
  efunc_gen_CreateContext_S1L1 = 130,
  efunc_gen_CreateContext_S2L1 = 131,
  efunc_FilterDeclarations = 132,
  efunc_MapAccum = 133,
  efunc_gen_Passm_CleanupRedudandExterns_A1L1 = 134,
  efunc_gen_Passm_CleanupRedudandExterns_A1 = 135,
  efunc_gen_Passm_FoldEnums_L1 = 136,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Conditionsm_Native = 6,
  ident_Conditionsm_Transform = 7,
  ident_Function = 8,
  ident_Ident = 9,
  ident_NativeBlock = 10,
  ident_Spec = 11,
  ident_Sentences = 12,
  ident_NativeBody = 13,
  ident_Assign = 14,
  ident_Condition = 15,
  ident_TkVariable = 16,
  ident_TkNewVariable = 17,
  ident_Name = 18,
  ident_Symbol = 19,
  ident_Brackets = 20,
  ident_ADTm_Brackets = 21,
  ident_CallBrackets = 22,
  ident_Closure = 23,
  ident_Entry = 24,
  ident_GNm_Entry = 25,
  ident_Enum = 26,
  ident_Swap = 27,
  ident_Declaration = 28,
  ident_True = 29,
  ident_SUF = 30,
  ident_ClosureBrackets = 31,
  ident_GNm_Local = 32,
  ident_Identifier = 33,
  ident_VAR = 34,
  ident_MarkupContext = 35,
  ident_NoMarkupContext = 36,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 4132962843U, 2153315325U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2153315325UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 4132962843UL);
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
  refalrts::reinit_number(context[5], 4132962843UL);
  refalrts::reinit_number(context[7], 2153315325UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4132962843U, 2153315325U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 4132962843U, 2153315325U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 4132962843U, 2153315325U, func_Residue);


static refalrts::FnResult func_gen_Desugar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Desugar\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Desugar\1/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Native/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Native], context[6] ) )
      continue;
    //DEBUG: s.MarkupContext#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Native/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Desugar\1/4 s.MarkupContext#1/5 # Conditions-Transform/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_Conditionsm_Transform], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & Pass-UnCondition/4 AsIs: s.MarkupContext#1/5 HalfReuse: )/6 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_Passm_UnCondition]);
  refalrts::reinit_close_bracket(context[6]);
  refalrts::link_brackets( context[0], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Desugar_L1("Desugar\\1", 4132962843U, 2153315325U, func_gen_Desugar_L1);


static refalrts::FnResult func_Desugar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Desugar/4 s.MarkupContext#1/5 s.ConditionsMode#1/6 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: s.ConditionsMode#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#1/2 } </7 & Pipe/8 & Pass-RemovePos/9 & Pass-AttachEntries/10 & Pass-EnumerateVariables/11 & Pass-NameNestedFuncs/12 & Pass-RemoveBlocksAndAssigns/13 (/14 & Pass-FlatNestedFuncs/15 Tile{ AsIs: s.MarkupContext#1/5 } )/16 </17 & Fetch/18 Tile{ AsIs: s.ConditionsMode#1/6 } [*]/19 & Desugar\1/20 s.MarkupContext#1/5/21 {*}/22 >/23 & Pass-CleanupRedudandExterns/24 & Pass-FoldEnums/25 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Passm_RemovePos]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Passm_AttachEntries]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Passm_EnumerateVariables]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Passm_NameNestedFuncs]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Passm_RemoveBlocksAndAssigns]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Passm_FlatNestedFuncs]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
  refalrts::alloc_closure_head(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_Desugar_L1]);
  refalrts::copy_stvar(vm, context[21], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[22], context[19]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Passm_CleanupRedudandExterns]);
  refalrts::alloc_name(vm, context[25], functions[efunc_Passm_FoldEnums]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[26] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Desugar("Desugar", 0U, 0U, func_Desugar);


static refalrts::FnResult func_gen_Passm_RemovePos_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Pass-RemovePos\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-RemovePos\1/4 (/7 s.new#1/9 t.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/9 } Tile{ AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.Body#2/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemovePosm_Body]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Ident/9 t.SrcPos#2/10 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[9] ) )
      continue;
    // closed e.Name#2 as range 5
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/9 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pass-RemovePos\1/4 (/7 # NativeBlock/9 t.SrcPos#2/10 e.Code#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[9] ) )
      continue;
    // closed e.Code#2 as range 5
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Code#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/9 AsIs: t.SrcPos#2/10 AsIs: e.Code#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemovePos\1/4 (/7 s.new#4/9 t.new#5/10 t.new#6/12 e.new#7/5 )/8 >/1
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 5
  do {
    // </0 & Pass-RemovePos\1/4 (/7 # Spec/9 t.SrcPos#2/10 (/12 e.Name#2/14 )/13 e.Pattern#2/5 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
      continue;
    // closed e.Name#2 as range 14
    // closed e.Pattern#2 as range 5
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 14
    //DEBUG: e.Pattern#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Spec/9 } Tile{ AsIs: (/12 AsIs: e.Name#2/14 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.Pattern#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemovePos\1/4 (/7 s.EnumSwapDeclaration#2/9 t.SrcPos#2/10 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
  if( ! refalrts::svar_term( context[12], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 5
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: s.ScopeClass#2: 12
  //DEBUG: s.EnumSwapDeclaration#2: 9
  //DEBUG: e.Name#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemovePos_L1("Pass-RemovePos\\1", 4132962843U, 2153315325U, func_gen_Passm_RemovePos_L1);


static refalrts::FnResult func_Passm_RemovePos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-RemovePos/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemovePos\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_RemovePos_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemovePos("Pass-RemovePos", 4132962843U, 2153315325U, func_Passm_RemovePos);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemovePos-Body$1\1\1=1/4 s.ChainType#3/17 (/15 e.Result#3/13 )/16 (/11 e.Blocks#3/9 )/12 (/7 e.Pattern#3/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Result#3 as range 13
  // closed e.Blocks#3 as range 9
  // closed e.Pattern#3 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 13
  //DEBUG: e.Blocks#3: 9
  //DEBUG: e.Pattern#3: 5
  //DEBUG: s.ChainType#3: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.ChainType#3/17 AsIs: (/15 } Tile{ AsIs: </0 } & RemovePos-Expr/18 Tile{ AsIs: e.Result#3/13 } >/19 )/20 (/21 Tile{ HalfReuse: </16 HalfReuse: & RemovePos-Blocks/11 AsIs: e.Blocks#3/9 HalfReuse: >/12 HalfReuse: )/7 } (/22 </23 & RemovePos-Expr/24 Tile{ AsIs: e.Pattern#3/5 } >/25 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[11], functions[efunc_RemovePosm_Blocks]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[21], context[7] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[7] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1A1("RemovePos-Body$1\\1\\1=1", 4132962843U, 2153315325U, func_gen_RemovePosm_Body_S1L1L1A1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemovePos-Body$1\1\1/4 (/7 s.ChainType#3/21 (/19 e.Result#3/17 )/20 (/15 e.Blocks#3/13 )/16 (/11 e.Pattern#3/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#3 as range 17
  // closed e.Blocks#3 as range 13
  // closed e.Pattern#3 as range 9
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 17
  //DEBUG: e.Blocks#3: 13
  //DEBUG: e.Pattern#3: 9
  //DEBUG: s.ChainType#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & RemovePos-Body$1\1\1=1/7 AsIs: s.ChainType#3/21 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#3/13 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#3/9 AsIs: )/12 HalfReuse: {*}/8 HalfReuse: </1 } & AssignOrCondition/22 s.ChainType#3/21/23 >/24 >/25 Tile{ ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_AssignOrCondition]);
  refalrts::copy_stvar(vm, context[23], context[21]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_RemovePosm_Body_S1L1L1A1]);
  refalrts::reinit_unwrapped_closure(context[8], context[4]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1("RemovePos-Body$1\\1\\1", 4132962843U, 2153315325U, func_gen_RemovePosm_Body_S1L1L1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & RemovePos-Body$1\1/4 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/11 AsIs: e.Pattern#2/9 HalfReuse: >/12 } )/21 </22 & Map/23 & RemovePos-Body$1\1\1/24 Tile{ AsIs: e.Assigns#2/5 } >/25 Tile{ AsIs: (/19 } </26 & RemovePos-Expr/27 Tile{ AsIs: e.Result#2/17 } >/28 )/29 (/30 Tile{ HalfReuse: </20 HalfReuse: & RemovePos-Blocks/15 AsIs: e.Blocks#2/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_RemovePosm_Body_S1L1L1]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_RemovePosm_Expr]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_RemovePosm_Expr]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[15], functions[efunc_RemovePosm_Blocks]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[30], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[19], context[29] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[4], context[21] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1("RemovePos-Body$1\\1", 4132962843U, 2153315325U, func_gen_RemovePosm_Body_S1L1);


static refalrts::FnResult func_RemovePosm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RemovePos-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemovePos-Body/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RemovePos-Body/4 # Sentences/5 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[5] ) )
      continue;
    // closed e.Sentences#1 as range 2
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/6 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemovePos-Body$1\1/5 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Sentences]);
    refalrts::update_name(context[4], functions[efunc_Map]);
    refalrts::reinit_name(context[5], functions[efunc_gen_RemovePosm_Body_S1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemovePos-Body/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.SrcPos#1: 6
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemovePos-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Body("RemovePos-Body", 4132962843U, 2153315325U, func_RemovePosm_Body);


static refalrts::FnResult func_AssignOrCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AssignOrCondition/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AssignOrCondition/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AssignOrCondition/4 # Assign/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Assign/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AssignOrCondition/4 # Condition/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Condition/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignOrCondition("AssignOrCondition", 4132962843U, 2153315325U, func_AssignOrCondition);


static refalrts::FnResult func_gen_RemovePosm_Blocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & RemovePos-Blocks\1/4 (/7 e.Body#2/5 )/8 >/1
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
  // closed e.Body#2 as range 5
  //DEBUG: e.Body#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & RemovePos-Body/7 AsIs: e.Body#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_RemovePosm_Body]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Blocks_L1("RemovePos-Blocks\\1", 4132962843U, 2153315325U, func_gen_RemovePosm_Blocks_L1);


static refalrts::FnResult func_RemovePosm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemovePos-Blocks/4 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Blocks\1/4 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_RemovePosm_Blocks_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Blocks("RemovePos-Blocks", 4132962843U, 2153315325U, func_RemovePosm_Blocks);


static refalrts::FnResult func_gen_RemovePosm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RemovePos-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemovePos-Expr\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & RemovePos-Expr\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & RemovePos-Expr\1/4 (/5 s.new#4/9 t.new#5/12 t.new#6/14 e.new#7/10 )/6 >/1
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
        // </0 & RemovePos-Expr\1/4 (/5 s.new#8/9 t.new#9/12 s.new#10/14 e.new#11/10 )/6 >/1
        if( ! refalrts::svar_term( context[14], context[14] ) )
          continue;
        // closed e.new#11 as range 10
        do {
          // </0 & RemovePos-Expr\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/10 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 10
          //DEBUG: t.SrcPos#2: 12
          //DEBUG: s.Mode#2: 14
          //DEBUG: e.Index#2: 10

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 } Tile{ AsIs: s.Mode#2/14 AsIs: e.Index#2/10 AsIs: )/6 } Tile{ ]] }
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[14], context[6] );
          res = refalrts::splice_evar( res, context[5], context[9] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & RemovePos-Expr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/10 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[9] ) )
          continue;
        // closed e.Index#2 as range 10
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: s.Mode#2: 14
        //DEBUG: e.Index#2: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 } Tile{ AsIs: s.Mode#2/14 AsIs: e.Index#2/10 AsIs: )/6 } Tile{ ]] }
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[14], context[6] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemovePos-Expr\1/4 (/5 # Symbol/9 # Name/12 t.SrcPos#2/14 e.Name#2/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Name], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Name#2 as range 10
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: e.Name#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/14 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Name/12 } Tile{ AsIs: e.Name#2/10 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[5], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 7
      //DEBUG: e.InBrackets#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 e.InBrackets#2/10 )/6 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 } Tile{ AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemovePos-Expr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 7
      //DEBUG: e.InBrackets#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Expr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemovePos-Expr\1/4 (/5 # Closure/9 e.Sentences#2/7 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.Sentences#2 as range 7
    //DEBUG: e.Sentences#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </5 HalfReuse: & RemovePos-Body/9 AsIs: e.Sentences#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_RemovePosm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemovePos-Expr\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Expr_L1("RemovePos-Expr\\1", 4132962843U, 2153315325U, func_gen_RemovePosm_Expr_L1);


static refalrts::FnResult func_RemovePosm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemovePos-Expr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Expr\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_RemovePosm_Expr_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Expr("RemovePos-Expr", 4132962843U, 2153315325U, func_RemovePosm_Expr);


static refalrts::FnResult func_Passm_AttachEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Pass-AttachEntries/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pass-AttachEntries/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
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
      // </0 & Pass-AttachEntries/4 (/9 s.new#4/11 s.new#5/14 e.new#6/12 )/10 e.new#7/5 >/1
      context[12] = context[7];
      context[13] = context[8];
      // closed e.new#7 as range 5
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#6 as range 12
      do {
        // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/14 e.new#8/12 )/10 e.new#9/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_Entry], context[11] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[14] ) )
          continue;
        // closed e.new#8 as range 12
        // closed e.new#9 as range 5
        do {
          // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/14 e.Name#1/12 )/10 e.Items-B#1/17 (/23 # Function/25 s.ScopeClass#1/26 (/29 e.Name#1/31 )/30 e.Body#1/21 )/24 e.Items-E#1/19 >/1
          context[15] = context[5];
          context[16] = context[6];
          // closed e.Name#1 as range 12
          context[17] = 0;
          context[18] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[19] = context[15];
            context[20] = context[16];
            context[21] = 0;
            context[22] = 0;
            context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
            if( ! context[23] )
              continue;
            refalrts::bracket_pointers(context[23], context[24]);
            context[25] = refalrts::ident_left( identifiers[ident_Function], context[21], context[22] );
            if( ! context[25] )
              continue;
            // closed e.Items-E#1 as range 19
            if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
              continue;
            context[27] = 0;
            context[28] = 0;
            context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
            if( ! context[29] )
              continue;
            refalrts::bracket_pointers(context[29], context[30]);
            if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[12], context[13], context[27], context[28] ) )
              continue;
            if( ! refalrts::empty_seq( context[27], context[28] ) )
              continue;
            // closed e.Body#1 as range 21
            //DEBUG: e.Name#1: 12
            //DEBUG: e.Items-B#1: 17
            //DEBUG: e.Items-E#1: 19
            //DEBUG: s.ScopeClass#1: 26
            //DEBUG: e.Body#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} & Pass-AttachEntries/4 (/9 # Entry/11 {REMOVED TILE} e.Name#1/12 {REMOVED TILE} s.ScopeClass#1/26 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Pass-AttachEntries/10 AsIs: e.Items-B#1/17 AsIs: (/23 AsIs: # Function/25 } Tile{ AsIs: # GN-Entry/14 } Tile{ AsIs: (/29 AsIs: e.Name#1/31 AsIs: )/30 AsIs: e.Body#1/21 AsIs: )/24 AsIs: e.Items-E#1/19 AsIs: >/1 ]] }
            refalrts::reinit_name(context[10], functions[efunc_Passm_AttachEntries]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[23], context[24] );
            refalrts::link_brackets( context[29], context[30] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[29];
            res = refalrts::splice_evar( res, context[14], context[14] );
            res = refalrts::splice_evar( res, context[10], context[25] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Pass-AttachEntries/4 (/9 # Entry/11 # GN-Entry/14 e.Name#1/12 )/10 e.Items-B#1/17 (/23 s.EnumSwapDeclaration#1/27 s.ScopeClass#1/28 e.Name#1/25 )/24 e.Items-E#1/19 >/1
        context[15] = context[5];
        context[16] = context[6];
        // closed e.Name#1 as range 12
        context[17] = 0;
        context[18] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[19] = context[15];
          context[20] = context[16];
          context[21] = 0;
          context[22] = 0;
          context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
          if( ! context[23] )
            continue;
          refalrts::bracket_pointers(context[23], context[24]);
          if( ! refalrts::repeated_evar_right( vm, context[25], context[26], context[12], context[13], context[21], context[22] ) )
            continue;
          // closed e.Items-E#1 as range 19
          if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
            continue;
          if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
            continue;
          if( ! refalrts::empty_seq( context[21], context[22] ) )
            continue;
          //DEBUG: e.Name#1: 12
          //DEBUG: e.Items-B#1: 17
          //DEBUG: e.Items-E#1: 19
          //DEBUG: s.EnumSwapDeclaration#1: 27
          //DEBUG: s.ScopeClass#1: 28
          //12: e.Name#1
          //17: e.Items-B#1
          //19: e.Items-E#1
          //25: e.Name#1
          //27: s.EnumSwapDeclaration#1
          //28: s.ScopeClass#1
          //34: s.EnumSwapDeclaration#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[31], functions[efunc_gen_Passm_AttachEntries_S2C1]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_OneOf]);
          refalrts::copy_stvar(vm, context[34], context[27]);
          refalrts::alloc_ident(vm, context[35], identifiers[ident_Enum]);
          refalrts::alloc_ident(vm, context[36], identifiers[ident_Swap]);
          refalrts::alloc_ident(vm, context[37], identifiers[ident_Declaration]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[29] );
          res = refalrts::splice_elem( res, context[30] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[32] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_stvar( res, context[34] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_elem( res, context[29] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </29 & Pass-AttachEntries$2?1/33 # True/34 >/30
            context[31] = 0;
            context[32] = 0;
            context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
            context[34] = refalrts::ident_left( identifiers[ident_True], context[31], context[32] );
            if( ! context[34] )
              continue;
            if( ! refalrts::empty_seq( context[31], context[32] ) )
              continue;
            //DEBUG: e.Name#1: 12
            //DEBUG: e.Items-B#1: 17
            //DEBUG: e.Items-E#1: 19
            //DEBUG: s.EnumSwapDeclaration#1: 27
            //DEBUG: s.ScopeClass#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/23 s.EnumSwapDeclaration#1/27 s.ScopeClass#1/28 e.Name#1/25 )/24 {REMOVED TILE} </29 & Pass-AttachEntries$2?1/33 # True/34 >/30 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items-B#1/17 } Tile{ AsIs: (/9 HalfReuse: s.EnumSwapDeclaration1 #27/11 AsIs: # GN-Entry/14 AsIs: e.Name#1/12 AsIs: )/10 } Tile{ AsIs: e.Items-E#1/19 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[11], context[27] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[19], context[20] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            res = refalrts::splice_evar( res, context[17], context[18] );
            refalrts::splice_to_freelist_open( vm, context[4], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[29], context[30]);
          continue;
        } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.new#8/14 (/19 e.new#9/17 )/20 e.new#10/15 )/10 e.new#11/5 >/1
        context[15] = context[12];
        context[16] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[11] ) )
          continue;
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        // closed e.new#9 as range 17
        // closed e.new#10 as range 15
        // closed e.new#11 as range 5
        do {
          // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.ScopeClass#1/14 (/19 e.Name#1/17 )/20 e.Body#1/15 )/10 e.Items-B#1/23 (/29 # Entry/31 # GN-Entry/32 e.Name#1/33 )/30 e.Items-E#1/25 >/1
          context[21] = context[5];
          context[22] = context[6];
          // closed e.Name#1 as range 17
          // closed e.Body#1 as range 15
          context[23] = 0;
          context[24] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[25] = context[21];
            context[26] = context[22];
            context[27] = 0;
            context[28] = 0;
            context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
            if( ! context[29] )
              continue;
            refalrts::bracket_pointers(context[29], context[30]);
            context[31] = refalrts::ident_left( identifiers[ident_Entry], context[27], context[28] );
            if( ! context[31] )
              continue;
            context[32] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[27], context[28] );
            if( ! context[32] )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[33], context[34], context[17], context[18], context[27], context[28] ) )
              continue;
            if( ! refalrts::empty_seq( context[27], context[28] ) )
              continue;
            // closed e.Items-E#1 as range 25
            //DEBUG: s.ScopeClass#1: 14
            //DEBUG: e.Name#1: 17
            //DEBUG: e.Body#1: 15
            //DEBUG: e.Items-B#1: 23
            //DEBUG: e.Items-E#1: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.ScopeClass#1/14 {REMOVED TILE} {REMOVED TILE} (/29 # Entry/31 {REMOVED TILE} e.Name#1/33 )/30 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 AsIs: (/9 AsIs: # Function/11 } Tile{ AsIs: # GN-Entry/32 } Tile{ AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: e.Body#1/15 AsIs: )/10 } Tile{ AsIs: e.Items-B#1/23 } Tile{ AsIs: e.Items-E#1/25 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[19], context[20] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[19], context[10] );
            res = refalrts::splice_evar( res, context[32], context[32] );
            refalrts::splice_to_freelist_open( vm, context[11], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Pass-AttachEntries/4 (/9 # Function/11 s.ScopeClass#1/14 (/19 e.Name#1/17 )/20 e.Body#1/15 )/10 e.Items#1/5 >/1
        // closed e.Name#1 as range 17
        // closed e.Body#1 as range 15
        // closed e.Items#1 as range 5
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Body#1: 15
        //DEBUG: e.Items#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function/11 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: e.Body#1/15 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Pass-AttachEntries/4 (/9 s.EnumSwapDeclaration#1/11 s.ScopeClass#1/14 e.Name#1/12 )/10 e.Items-B#1/17 (/23 # Entry/25 # GN-Entry/26 e.Name#1/27 )/24 e.Items-E#1/19 >/1
        context[15] = context[5];
        context[16] = context[6];
        // closed e.Name#1 as range 12
        context[17] = 0;
        context[18] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[19] = context[15];
          context[20] = context[16];
          context[21] = 0;
          context[22] = 0;
          context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
          if( ! context[23] )
            continue;
          refalrts::bracket_pointers(context[23], context[24]);
          context[25] = refalrts::ident_left( identifiers[ident_Entry], context[21], context[22] );
          if( ! context[25] )
            continue;
          context[26] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[21], context[22] );
          if( ! context[26] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[12], context[13], context[21], context[22] ) )
            continue;
          if( ! refalrts::empty_seq( context[21], context[22] ) )
            continue;
          // closed e.Items-E#1 as range 19
          //DEBUG: s.EnumSwapDeclaration#1: 11
          //DEBUG: s.ScopeClass#1: 14
          //DEBUG: e.Name#1: 12
          //DEBUG: e.Items-B#1: 17
          //DEBUG: e.Items-E#1: 19
          //11: s.EnumSwapDeclaration#1
          //12: e.Name#1
          //14: s.ScopeClass#1
          //17: e.Items-B#1
          //19: e.Items-E#1
          //27: e.Name#1
          //34: s.EnumSwapDeclaration#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[31], functions[efunc_gen_Passm_AttachEntries_S5C1]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_OneOf]);
          refalrts::copy_stvar(vm, context[34], context[11]);
          refalrts::alloc_ident(vm, context[35], identifiers[ident_Enum]);
          refalrts::alloc_ident(vm, context[36], identifiers[ident_Swap]);
          refalrts::alloc_ident(vm, context[37], identifiers[ident_Declaration]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[29] );
          res = refalrts::splice_elem( res, context[30] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[32] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_stvar( res, context[34] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_elem( res, context[29] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </29 & Pass-AttachEntries$5?1/33 # True/34 >/30
            context[31] = 0;
            context[32] = 0;
            context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
            context[34] = refalrts::ident_left( identifiers[ident_True], context[31], context[32] );
            if( ! context[34] )
              continue;
            if( ! refalrts::empty_seq( context[31], context[32] ) )
              continue;
            //DEBUG: s.EnumSwapDeclaration#1: 11
            //DEBUG: s.ScopeClass#1: 14
            //DEBUG: e.Name#1: 12
            //DEBUG: e.Items-B#1: 17
            //DEBUG: e.Items-E#1: 19

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} e.Items-B#1/17 (/23 # Entry/25 # GN-Entry/26 e.Name#1/27 )/24 e.Items-E#1/19 </29 & Pass-AttachEntries$5?1/33 # True/34 >/30 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Pass-AttachEntries/4 AsIs: (/9 AsIs: s.EnumSwapDeclaration#1/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 AsIs: )/10 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::splice_to_freelist_open( vm, context[10], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[29], context[30]);
          continue;
        } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Pass-AttachEntries/4 (/9 s.EnumSwapDeclaration#1/11 s.ScopeClass#1/14 e.Name#1/12 )/10 e.Items#1/5 >/1
      // closed e.Name#1 as range 12
      // closed e.Items#1 as range 5
      //DEBUG: s.EnumSwapDeclaration#1: 11
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Items#1: 5
      //5: e.Items#1
      //11: s.EnumSwapDeclaration#1
      //12: e.Name#1
      //14: s.ScopeClass#1
      //20: s.EnumSwapDeclaration#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_Passm_AttachEntries_S6C1]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[20], context[11]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Enum]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_Swap]);
      refalrts::alloc_ident(vm, context[23], identifiers[ident_Declaration]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </15 & Pass-AttachEntries$6?1/19 # True/20 >/16
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
        context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
        if( ! context[20] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: s.EnumSwapDeclaration#1: 11
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 12
        //DEBUG: e.Items#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </15 & Pass-AttachEntries$6?1/19 # True/20 >/16 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: s.EnumSwapDeclaration#1/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[15], context[16]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Pass-AttachEntries/4 (/9 # Ident/11 e.Name#1/7 )/10 e.Items#1/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_Ident], context[11] ) )
        continue;
      // closed e.Name#1 as range 7
      // closed e.Items#1 as range 5
      //DEBUG: e.Name#1: 7
      //DEBUG: e.Items#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Ident/11 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-AttachEntries/4 (/9 s.new#4/11 t.new#5/14 e.new#6/12 )/10 e.new#7/5 >/1
    context[12] = context[7];
    context[13] = context[8];
    // closed e.new#7 as range 5
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#6 as range 12
    do {
      // </0 & Pass-AttachEntries/4 (/9 # NativeBlock/11 t.SrcPos#1/14 e.Code#1/12 )/10 e.Items#1/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[11] ) )
        continue;
      // closed e.Code#1 as range 12
      // closed e.Items#1 as range 5
      //DEBUG: t.SrcPos#1: 14
      //DEBUG: e.Code#1: 12
      //DEBUG: e.Items#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # NativeBlock/11 AsIs: t.SrcPos#1/14 AsIs: e.Code#1/12 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-AttachEntries/4 (/9 # Spec/11 (/14 e.Name#1/16 )/15 e.Pattern#1/12 )/10 e.Items#1/5 >/1
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[11] ) )
      continue;
    // closed e.Name#1 as range 16
    // closed e.Pattern#1 as range 12
    // closed e.Items#1 as range 5
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Pattern#1: 12
    //DEBUG: e.Items#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Spec/11 AsIs: (/14 AsIs: e.Name#1/16 AsIs: )/15 AsIs: e.Pattern#1/12 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Pass-AttachEntries/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-AttachEntries/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-AttachEntries/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_AttachEntries("Pass-AttachEntries", 4132962843U, 2153315325U, func_Passm_AttachEntries);


static refalrts::FnResult func_gen_Passm_EnumerateVariables_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Pass-EnumerateVariables\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-EnumerateVariables\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-EnumerateVariables\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 } 1/15 (/16 )/17 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_number(vm, context[15], 1UL);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-EnumerateVariables\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-EnumerateVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_EnumerateVariables_L1("Pass-EnumerateVariables\\1", 4132962843U, 2153315325U, func_gen_Passm_EnumerateVariables_L1);


static refalrts::FnResult func_Passm_EnumerateVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-EnumerateVariables/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-EnumerateVariables\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_EnumerateVariables_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_EnumerateVariables("Pass-EnumerateVariables", 4132962843U, 2153315325U, func_Passm_EnumerateVariables);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & EnumerateVars-Body$1\1=4/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 (/15 e.Result#5/13 )/16 e.Blocks#6/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
  // closed e.Result#5 as range 13
  // closed e.Blocks#6 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: e.Result#5: 13
  //DEBUG: e.Blocks#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 } Tile{ AsIs: e.Assigns#4/9 } Tile{ AsIs: (/15 AsIs: e.Result#5/13 AsIs: )/16 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Blocks#6/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A4("EnumerateVars-Body$1\\1=4", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Body_S1L1A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1=3/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 s.Depth#4/13 (/16 e.Blocks#2/14 )/17 (/20 e.ScopeVars#5/18 )/21 e.Result#5/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Blocks#2 as range 14
  // closed e.ScopeVars#5 as range 18
  // closed e.Result#5 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: s.Depth#4: 13
  //DEBUG: e.Blocks#2: 14
  //DEBUG: e.ScopeVars#5: 18
  //DEBUG: e.Result#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1=4/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Assigns#4/9 AsIs: )/12 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Result#5/2 } )/23 {*}/24 </25 & EnumerateVars-Blocks/26 </27 & Inc/28 Tile{ AsIs: s.Depth#4/13 } Tile{ HalfReuse: >/17 AsIs: (/20 AsIs: e.ScopeVars#5/18 AsIs: )/21 } Tile{ AsIs: e.Blocks#2/14 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_EnumerateVarsm_Blocks]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Inc]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Body_S1L1A4]);
  refalrts::reinit_close_call(context[17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[16], context[23] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A3("EnumerateVars-Body$1\\1=3", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Body_S1L1A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & EnumerateVars-Body$1\1=2/4 (/7 e.Pattern#3/5 )/8 (/11 e.Blocks#2/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.ScopeVars#4/17 )/20 s.Depth#4/21 e.Assigns#4/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Blocks#2 as range 9
  // closed e.Result#2 as range 13
  // closed e.ScopeVars#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Assigns#4 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Blocks#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.ScopeVars#4: 17
  //DEBUG: s.Depth#4: 21
  //DEBUG: e.Assigns#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#4/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1=3/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Assigns#4/2 } )/23 Tile{ HalfReuse: s.Depth4 #21/12 AsIs: (/15 } Tile{ AsIs: e.Blocks#2/9 } )/24 {*}/25 </26 & EnumerateVars-Expr/27 Tile{ HalfReuse: s.Depth4 #21/16 AsIs: (/19 AsIs: e.ScopeVars#4/17 AsIs: )/20 } Tile{ AsIs: e.Result#2/13 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[0]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Body_S1L1A3]);
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_svar( context[16], context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A2("EnumerateVars-Body$1\\1=2", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Body_S1L1A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1=1/4 (/7 e.Blocks#2/5 )/8 (/11 e.Result#2/9 )/12 s.Depth#1/13 (/16 e.Assigns#2/14 )/17 (/20 e.ScopeVars#3/18 )/21 e.Pattern#3/2 >/1
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
  // closed e.Blocks#2 as range 5
  // closed e.Result#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Assigns#2 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#3 as range 2
  //DEBUG: e.Blocks#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.Assigns#2: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/22 & EnumerateVars-Body$1\1=2/23 (/24 Tile{ AsIs: e.Pattern#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } {*}/25 </26 & EnumerateVars-Assignments/27 Tile{ AsIs: (/16 } )/28 Tile{ HalfReuse: s.Depth1 #13/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 } Tile{ AsIs: e.Assigns#2/14 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_EnumerateVarsm_Body_S1L1A2]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[22]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_EnumerateVarsm_Assignments]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[28] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[24], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A1("EnumerateVars-Body$1\\1=1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Body_S1L1A1);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1/4 s.Depth#1/25 (/15 e.ScopeVars#1/13 )/16 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/8 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[5], context[6] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.ScopeVars#1 as range 13
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.Depth#1: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: [*]/11 } Tile{ HalfReuse: & EnumerateVars-Body$1\1=1/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 HalfReuse: (/8 } Tile{ AsIs: e.Result#2/21 } )/26 s.Depth#1/25/27 Tile{ HalfReuse: (/12 AsIs: e.Assigns#2/5 HalfReuse: )/23 } {*}/28 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/25 AsIs: (/15 AsIs: e.ScopeVars#1/13 AsIs: )/16 } Tile{ AsIs: e.Pattern#2/9 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::copy_stvar(vm, context[27], context[25]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[11]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_closure_head(context[11]);
  refalrts::reinit_name(context[24], functions[efunc_gen_EnumerateVarsm_Body_S1L1A1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[12], context[23] );
  refalrts::link_brackets( context[8], context[26] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[8] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1("EnumerateVars-Body$1\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Body_S1L1);


static refalrts::FnResult func_EnumerateVarsm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EnumerateVars-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Body/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # Sentences/10 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 6
    // closed e.Sentences#1 as range 2
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#1: 6
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/11 </12 & Map/13 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 HalfReuse: {*}/10 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[11], identifiers[ident_Sentences]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Body_S1L1]);
    refalrts::reinit_unwrapped_closure(context[10], context[0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 6
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Body("EnumerateVars-Body", 4132962843U, 2153315325U, func_EnumerateVarsm_Body);


static refalrts::FnResult func_gen_EnumerateVarsm_Blocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EnumerateVars-Blocks\1/4 s.Depth#1/13 (/11 e.ScopeVars#1/9 )/12 (/7 e.Body#2/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ScopeVars#1 as range 9
  // closed e.Body#2 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 9
  //DEBUG: e.Body#2: 5
  //DEBUG: s.Depth#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 AsIs: s.Depth#1/13 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } Tile{ AsIs: e.Body#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Body]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Blocks_L1("EnumerateVars-Blocks\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Blocks_L1);


static refalrts::FnResult func_EnumerateVarsm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Blocks/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.ScopeVars#1 as range 6
  // closed e.Blocks#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map/11 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Blocks\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: e.Blocks#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Blocks_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Blocks("EnumerateVars-Blocks", 4132962843U, 2153315325U, func_EnumerateVarsm_Blocks);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Assignments$2=5/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Blocks#5/14 )/17 s.Depth#4/18 (/21 e.Assignments#1/19 )/22 (/25 e.ScopeVars#6/23 )/26 e.Pattern#6/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Result#3 as range 10
  // closed e.Blocks#5 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Assignments#1 as range 19
  // closed e.ScopeVars#6 as range 23
  // closed e.Pattern#6 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Blocks#5: 14
  //DEBUG: s.Depth#4: 18
  //DEBUG: e.Assignments#1: 19
  //DEBUG: e.ScopeVars#6: 23
  //DEBUG: e.Pattern#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Depth#4/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments/4 AsIs: (/7 AsIs: e.RAssignments#1/5 HalfReuse: (/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.Blocks#5/14 AsIs: )/17 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Pattern#6/2 } )/27 )/28 )/29 Tile{ HalfReuse: s.Depth4 #18/22 AsIs: (/25 AsIs: e.ScopeVars#6/23 AsIs: )/26 } Tile{ AsIs: e.Assignments#1/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Assignments]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[22], context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::link_brackets( context[8], context[28] );
  refalrts::link_brackets( context[21], context[27] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A5("EnumerateVars-Assignments$2=5", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Assignments_S2A5);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & EnumerateVars-Assignments$2=4/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 s.Depth#4/14 (/17 e.Assignments#1/15 )/18 (/21 e.ScopeVars#3/19 )/22 (/25 e.Pattern#1/23 )/26 e.Blocks#5/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Result#3 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Assignments#1 as range 15
  // closed e.ScopeVars#3 as range 19
  // closed e.Pattern#1 as range 23
  // closed e.Blocks#5 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: s.Depth#4: 14
  //DEBUG: e.Assignments#1: 15
  //DEBUG: e.ScopeVars#3: 19
  //DEBUG: e.Pattern#1: 23
  //DEBUG: e.Blocks#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=5/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 } (/28 Tile{ AsIs: e.Blocks#5/2 } Tile{ AsIs: )/22 } Tile{ AsIs: s.Depth#4/14 AsIs: (/17 AsIs: e.Assignments#1/15 AsIs: )/18 HalfReuse: {*}/21 } </29 & EnumerateVars-Expr/30 s.Depth#4/14/31 (/32 Tile{ AsIs: e.ScopeVars#3/19 } Tile{ HalfReuse: )/25 AsIs: e.Pattern#1/23 HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::copy_stvar(vm, context[31], context[14]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A5]);
  refalrts::reinit_unwrapped_closure(context[21], context[0]);
  refalrts::reinit_close_bracket(context[25]);
  refalrts::reinit_close_call(context[26]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[32], context[25] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[28], context[22] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A4("EnumerateVars-Assignments$2=4", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Assignments_S2A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & EnumerateVars-Assignments$2=3/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Assignments#1/14 )/17 (/20 e.ScopeVars#3/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#4/30 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Result#3 as range 10
  // closed e.Assignments#1 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Assignments#1: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#4: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=4/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 } Tile{ AsIs: e.Result#3/10 } )/32 Tile{ HalfReuse: s.Depth4 #30/13 AsIs: (/16 AsIs: e.Assignments#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 HalfReuse: {*}/28 } </33 Tile{ HalfReuse: & EnumerateVars-Blocks/29 AsIs: s.Depth#4/30 } (/34 e.ScopeVars#3/18/35 )/37 Tile{ AsIs: e.Blocks#1/26 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::copy_evar(vm, context[35], context[36], context[18], context[19]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A4]);
  refalrts::reinit_svar( context[13], context[30] );
  refalrts::reinit_unwrapped_closure(context[28], context[0]);
  refalrts::reinit_name(context[29], functions[efunc_EnumerateVarsm_Blocks]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[32] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[13], context[28] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A3("EnumerateVars-Assignments$2=3", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Assignments_S2A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & EnumerateVars-Assignments$2=2/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Assignments#1/10 )/13 (/16 e.Pattern#1/14 )/17 (/20 e.Blocks#1/18 )/21 s.Depth#1/22 (/25 e.ScopeVars#3/23 )/26 e.Result#3/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Assignments#1 as range 10
  // closed e.Pattern#1 as range 14
  // closed e.Blocks#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.ScopeVars#3 as range 23
  // closed e.Result#3 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Assignments#1: 10
  //DEBUG: e.Pattern#1: 14
  //DEBUG: e.Blocks#1: 18
  //DEBUG: s.Depth#1: 22
  //DEBUG: e.ScopeVars#3: 23
  //DEBUG: e.Result#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=3/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 } Tile{ AsIs: e.Result#3/2 } )/28 (/29 Tile{ AsIs: e.Assignments#1/10 } Tile{ AsIs: )/26 } (/30 Tile{ AsIs: e.ScopeVars#3/23 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Blocks#1/18 AsIs: )/21 } {*}/31 </32 & Inc/33 Tile{ AsIs: s.Depth#1/22 HalfReuse: >/25 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_unwrapped_closure(vm, context[31], context[0]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_Inc]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A3]);
  refalrts::reinit_close_call(context[25]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[30], context[13] );
  refalrts::link_brackets( context[29], context[26] );
  refalrts::link_brackets( context[12], context[28] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[31] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A2("EnumerateVars-Assignments$2=2", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Assignments_S2A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & EnumerateVars-Assignments$2=1/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/17 (/20 e.Assignments#1/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#1/30 (/15 e.ScopeVars#1/13 )/16 (/11 e.Result#1/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.RAssignments#1 as range 5
  // closed e.ScopeVars#1 as range 13
  // closed e.Result#1 as range 9
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Assignments#1 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Result#1: 9
  //DEBUG: s.ChainType#1: 17
  //DEBUG: e.Assignments#1: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#1: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=2/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/17 AsIs: (/20 AsIs: e.Assignments#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 AsIs: (/28 AsIs: e.Blocks#1/26 AsIs: )/29 AsIs: s.Depth#1/30 HalfReuse: {*}/15 } </32 Tile{ HalfReuse: & EnumerateVars-Expr/16 } s.Depth#1/30/33 (/34 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ HalfReuse: )/11 AsIs: e.Result#1/9 HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::copy_stvar(vm, context[33], context[30]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Assignments_S2A2]);
  refalrts::reinit_unwrapped_closure(context[15], context[0]);
  refalrts::reinit_name(context[16], functions[efunc_EnumerateVarsm_Expr]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[34], context[11] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A1("EnumerateVars-Assignments$2=1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Assignments_S2A1);


static refalrts::FnResult func_EnumerateVarsm_Assignments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & EnumerateVars-Assignments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Assignments/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#3 as range 10
  // closed e.new#4 as range 2
  do {
    // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/5 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/10 )/13 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.RAssignments#1 as range 5
    // closed e.ScopeVars#1 as range 10
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.RAssignments#1: 5
    //DEBUG: e.ScopeVars#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EnumerateVars-Assignments/4 (/7 {REMOVED TILE} )/8 s.Depth#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 HalfReuse: s.Depth1 #9/1 } Tile{ AsIs: e.RAssignments#1/5 } Tile{ ]] }
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/5 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/10 )/13 (/16 s.ChainType#1/30 (/28 e.Result#1/26 )/29 (/24 e.Blocks#1/22 )/25 (/20 e.Pattern#1/18 )/21 )/17 e.Assignments#1/2 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_right( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_right( context[22], context[23], context[14], context[15] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_right( context[26], context[27], context[14], context[15] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.RAssignments#1 as range 5
  // closed e.ScopeVars#1 as range 10
  // closed e.Result#1 as range 26
  // closed e.Blocks#1 as range 22
  // closed e.Pattern#1 as range 18
  // closed e.Assignments#1 as range 2
  if( ! refalrts::svar_left( context[30], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.Result#1: 26
  //DEBUG: e.Blocks#1: 22
  //DEBUG: e.Pattern#1: 18
  //DEBUG: e.Assignments#1: 2
  //DEBUG: s.ChainType#1: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & EnumerateVars-Assignments$2=1/7 } (/31 Tile{ AsIs: e.RAssignments#1/5 } )/32 Tile{ AsIs: s.ChainType#1/30 AsIs: (/28 } Tile{ AsIs: e.Assignments#1/2 } Tile{ AsIs: )/25 AsIs: (/20 AsIs: e.Pattern#1/18 AsIs: )/21 HalfReuse: (/17 } Tile{ AsIs: e.Blocks#1/22 } Tile{ AsIs: )/8 AsIs: s.Depth#1/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Result#1/26 } Tile{ AsIs: )/29 HalfReuse: {*}/24 } </33 & AssignOrCondition/34 s.ChainType#1/30/35 >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_AssignOrCondition]);
  refalrts::copy_stvar(vm, context[35], context[30]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_EnumerateVarsm_Assignments_S2A1]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_unwrapped_closure(context[24], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[16], context[29] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[17], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[28], context[25] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[29], context[24] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[25], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[28] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Assignments("EnumerateVars-Assignments", 4132962843U, 2153315325U, func_EnumerateVarsm_Assignments);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S4L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$4\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S4L1("EnumerateVars-Expr\\1$4\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Expr_L1S4L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S5L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Expr\1$5\1/4 (/7 e.Name#2/5 )/8 (/11 e.ScopeVars#3/9 )/12 e.InBrackets#3/2 >/1
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
  // closed e.Name#2 as range 5
  // closed e.ScopeVars#3 as range 9
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: e.ScopeVars#3: 9
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#3/9 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S5L1("EnumerateVars-Expr\\1$5\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Expr_L1S5L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S6L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$6\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S6L1("EnumerateVars-Expr\\1$6\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Expr_L1S6L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S7L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$7\1/4 (/7 e.ScopeVars#2/5 )/8 e.Sentences#3/2 >/1
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
  // closed e.ScopeVars#2 as range 5
  // closed e.Sentences#3 as range 2
  //DEBUG: e.ScopeVars#2: 5
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Closure/4 } Tile{ AsIs: e.Sentences#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S7L1("EnumerateVars-Expr\\1$7\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Expr_L1S7L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & EnumerateVars-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVars-Expr\1/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EnumerateVars-Expr\1/4 s.new#4/5 (/8 e.new#5/6 )/9 (/10 s.new#6/14 e.new#7/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    // closed e.new#5 as range 6
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & EnumerateVars-Expr\1/4 s.new#8/5 (/8 e.new#9/6 )/9 (/10 s.new#10/14 s.new#11/17 e.new#12/15 )/11 >/1
      context[15] = context[12];
      context[16] = context[13];
      // closed e.new#9 as range 6
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 15
      do {
        // </0 & EnumerateVars-Expr\1/4 s.new#13/5 (/8 e.new#14/6 )/9 (/10 # TkVariable/14 s.new#15/17 e.new#16/15 )/11 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
          continue;
        // closed e.new#14 as range 6
        // closed e.new#16 as range 15
        do {
          // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars-B#2/20 (/26 s.Mode#2/28 e.Index#2/29 s.Depth#2/31 )/27 e.ScopeVars-E#2/22 )/9 (/10 # TkVariable/14 s.Mode#2/17 e.Index#2/15 )/11 >/1
          context[18] = context[6];
          context[19] = context[7];
          // closed e.Index#2 as range 15
          context[20] = 0;
          context[21] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[22] = context[18];
            context[23] = context[19];
            context[24] = 0;
            context[25] = 0;
            context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
            if( ! context[26] )
              continue;
            refalrts::bracket_pointers(context[26], context[27]);
            if( ! refalrts::repeated_stvar_left( vm, context[28], context[17], context[24], context[25] ) )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[15], context[16], context[24], context[25] ) )
              continue;
            // closed e.ScopeVars-E#2 as range 22
            if( ! refalrts::svar_left( context[31], context[24], context[25] ) )
              continue;
            if( ! refalrts::empty_seq( context[24], context[25] ) )
              continue;
            //DEBUG: s.Depth#1: 5
            //DEBUG: s.Mode#2: 17
            //DEBUG: e.Index#2: 15
            //DEBUG: e.ScopeVars-B#2: 20
            //DEBUG: e.ScopeVars-E#2: 22
            //DEBUG: s.Depth#2: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars-B#2/20 AsIs: (/26 AsIs: s.Mode#2/28 AsIs: e.Index#2/29 AsIs: s.Depth#2/31 AsIs: )/27 AsIs: e.ScopeVars-E#2/22 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/17 AsIs: e.Index#2/15 HalfReuse: s.Depth2 #31/11 HalfReuse: )/1 ]] }
            refalrts::reinit_svar( context[11], context[31] );
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[10], context[1] );
            refalrts::link_brackets( context[8], context[9] );
            refalrts::link_brackets( context[26], context[27] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkVariable/14 s.Mode#2/17 e.Index#2/15 )/11 >/1
        // closed e.ScopeVars#2 as range 6
        // closed e.Index#2 as range 15
        //DEBUG: s.Depth#1: 5
        //DEBUG: s.Mode#2: 17
        //DEBUG: e.ScopeVars#2: 6
        //DEBUG: e.Index#2: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/17/18 e.Index#2/15/19 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/17 AsIs: e.Index#2/15 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
        refalrts::copy_stvar(vm, context[18], context[17]);
        refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_close_bracket(context[8]);
        refalrts::reinit_svar( context[11], context[5] );
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[10], context[1] );
        refalrts::link_brackets( context[0], context[9] );
        refalrts::link_brackets( context[4], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[5];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkNewVariable/14 s.Mode#2/17 e.Index#2/15 )/11 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[14] ) )
        continue;
      // closed e.ScopeVars#2 as range 6
      // closed e.Index#2 as range 15
      //DEBUG: s.Depth#1: 5
      //DEBUG: s.Mode#2: 17
      //DEBUG: e.ScopeVars#2: 6
      //DEBUG: e.Index#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/17/18 e.Index#2/15/19 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 Reuse: # TkVariable/14 AsIs: s.Mode#2/17 AsIs: e.Index#2/15 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
      refalrts::copy_stvar(vm, context[18], context[17]);
      refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[8]);
      refalrts::update_ident(context[14], identifiers[ident_TkVariable]);
      refalrts::reinit_svar( context[11], context[5] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[10], context[1] );
      refalrts::link_brackets( context[0], context[9] );
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Brackets/14 e.InBrackets#2/12 )/11 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[14] ) )
        continue;
      // closed e.ScopeVars#2 as range 6
      // closed e.InBrackets#2 as range 12
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 6
      //DEBUG: e.InBrackets#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$4\1/11 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[14], functions[efunc_Fetch]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_name(context[11], functions[efunc_gen_EnumerateVarsm_Expr_L1S4L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[10], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # ADT-Brackets/14 (/19 e.Name#2/17 )/20 e.InBrackets#2/15 )/11 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[14] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.ScopeVars#2 as range 6
      // closed e.Name#2 as range 17
      // closed e.InBrackets#2 as range 15
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 6
      //DEBUG: e.Name#2: 17
      //DEBUG: e.InBrackets#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch/22 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/15 } >/23 Tile{ HalfReuse: [*]/10 HalfReuse: & EnumerateVars-Expr\1$5\1/14 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 } Tile{ HalfReuse: {*}/11 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Fetch]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_closure_head(context[10]);
      refalrts::reinit_name(context[14], functions[efunc_gen_EnumerateVarsm_Expr_L1S5L1]);
      refalrts::reinit_unwrapped_closure(context[11], context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[10], context[20] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      refalrts::wrap_closure( context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # CallBrackets/14 e.InBrackets#2/12 )/11 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[14] ) )
        continue;
      // closed e.ScopeVars#2 as range 6
      // closed e.InBrackets#2 as range 12
      //DEBUG: s.Depth#1: 5
      //DEBUG: e.ScopeVars#2: 6
      //DEBUG: e.InBrackets#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$6\1/11 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[14], functions[efunc_Fetch]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsm_Expr]);
      refalrts::reinit_name(context[11], functions[efunc_gen_EnumerateVarsm_Expr_L1S6L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[10], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Closure/14 e.Sentences#2/12 )/11 >/1
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[14] ) )
      continue;
    // closed e.ScopeVars#2 as range 6
    // closed e.Sentences#2 as range 12
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 6
    //DEBUG: e.Sentences#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Depth#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </15 & EnumerateVars-Body/16 </17 & Inc/18 Tile{ HalfReuse: s.Depth1 #5/11 AsIs: >/1 } (/19 e.ScopeVars#2/6/20 )/22 Tile{ AsIs: e.Sentences#2/12 } >/23 [*]/24 & EnumerateVars-Expr\1$7\1/25 Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 HalfReuse: {*}/10 HalfReuse: >/14 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_EnumerateVarsm_Body]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Inc]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[6], context[7]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_closure_head(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_EnumerateVarsm_Expr_L1S7L1]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_unwrapped_closure(context[10], context[24]);
    refalrts::reinit_close_call(context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 t.OtherTerm#2/10 >/1
  // closed e.ScopeVars#2 as range 6
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1("EnumerateVars-Expr\\1", 4132962843U, 2153315325U, func_gen_EnumerateVarsm_Expr_L1);


static refalrts::FnResult func_EnumerateVarsm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Expr/4 s.Depth#1/5 (/8 e.OriginScopeVars#1/6 )/9 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.OriginScopeVars#1 as range 6
  // closed e.Expr#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.OriginScopeVars#1: 6
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } [*]/10 & EnumerateVars-Expr\1/11 Tile{ AsIs: s.Depth#1/5 } {*}/12 Tile{ AsIs: (/8 AsIs: e.OriginScopeVars#1/6 AsIs: )/9 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_EnumerateVarsm_Expr_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[10]);
  refalrts::update_name(context[4], functions[efunc_MapReduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Expr("EnumerateVars-Expr", 4132962843U, 2153315325U, func_EnumerateVarsm_Expr);


static refalrts::FnResult func_gen_Passm_NameNestedFuncs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Pass-NameNestedFuncs\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-NameNestedFuncs\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-NameNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/15 e.Name#2/11/16 # SUF/18 )/19 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_SUF]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_NameNestedBody]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-NameNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-NameNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_NameNestedFuncs_L1("Pass-NameNestedFuncs\\1", 4132962843U, 2153315325U, func_gen_Passm_NameNestedFuncs_L1);


static refalrts::FnResult func_Passm_NameNestedFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-NameNestedFuncs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-NameNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_NameNestedFuncs_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_NameNestedFuncs("Pass-NameNestedFuncs", 4132962843U, 2153315325U, func_Passm_NameNestedFuncs);


static refalrts::FnResult func_gen_NameNestedBody_S2L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & NameNestedBody$2\1=1/4 s.SentenceNumber#2/5 (/8 e.Pattern#2/6 )/9 (/12 e.Assigns#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 e.MainName#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Pattern#2 as range 6
  // closed e.Assigns#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.MainName#3 as range 2
  //DEBUG: s.SentenceNumber#2: 5
  //DEBUG: e.Pattern#2: 6
  //DEBUG: e.Assigns#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.SentenceNumber#2/5 HalfReuse: >/8 } (/22 (/23 Tile{ AsIs: e.Pattern#2/6 } Tile{ AsIs: )/9 } </24 & NameNestedAssigns/25 (/26 e.MainName#3/2/27 Tile{ HalfReuse: )/12 AsIs: e.Assigns#2/10 HalfReuse: >/13 AsIs: (/16 } </29 & NameNestedResult/30 Tile{ HalfReuse: (/21 AsIs: e.MainName#3/2 HalfReuse: )/1 } Tile{ AsIs: e.Result#2/14 } >/31 Tile{ AsIs: )/17 AsIs: (/20 } </32 & NameNestedBlocks/33 (/34 e.MainName#3/2/35 )/37 Tile{ AsIs: e.Blocks#2/18 } >/38 )/39 )/40 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_NameNestedAssigns]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::copy_evar(vm, context[27], context[28], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_NameNestedResult]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::copy_evar(vm, context[35], context[36], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[12]);
  refalrts::reinit_close_call(context[13]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[22], context[40] );
  refalrts::link_brackets( context[20], context[39] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[26], context[12] );
  refalrts::link_brackets( context[23], context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[40] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[32], context[37] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1A1("NameNestedBody$2\\1=1", 4132962843U, 2153315325U, func_gen_NameNestedBody_S2L1A1);


static refalrts::FnResult func_gen_NameNestedBody_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & NameNestedBody$2\1/4 (/7 e.MainName#1/5 )/8 s.SentenceNumber#2/25 (/11 (/15 e.Pattern#2/13 )/16 e.Assigns#2/9 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Assigns#2 as range 9
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Assigns#2: 9
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.SentenceNumber#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & NameNestedBody$2\1=1/7 } Tile{ HalfReuse: s.SentenceNumber2 #25/11 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 } (/26 Tile{ AsIs: e.Assigns#2/9 } )/27 Tile{ AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 HalfReuse: {*}/12 } Tile{ AsIs: e.MainName#1/5 } Tile{ HalfReuse: '$'/8 AsIs: s.SentenceNumber#2/25 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_NameNestedBody_S2L1A1]);
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_unwrapped_closure(context[12], context[4]);
  refalrts::reinit_char(context[8], '$');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[12] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1("NameNestedBody$2\\1", 4132962843U, 2153315325U, func_gen_NameNestedBody_S2L1);


static refalrts::FnResult func_NameNestedBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & NameNestedBody/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameNestedBody/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & NameNestedBody/4 (/7 e.new#4/5 )/8 # Sentences/9 e.new#5/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[9] ) )
      continue;
    // closed e.new#4 as range 5
    // closed e.new#5 as range 2
    do {
      // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 (/14 (/18 e.Pattern#1/16 )/19 e.Assigns#1/12 (/26 e.Result#1/24 )/27 (/22 e.Blocks#1/20 )/23 )/15 >/1
      context[10] = context[2];
      context[11] = context[3];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_right( context[20], context[21], context[12], context[13] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_right( context[24], context[25], context[12], context[13] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      // closed e.MainName#1 as range 5
      // closed e.Pattern#1 as range 16
      // closed e.Assigns#1 as range 12
      // closed e.Result#1 as range 24
      // closed e.Blocks#1 as range 20
      //DEBUG: e.MainName#1: 5
      //DEBUG: e.Pattern#1: 16
      //DEBUG: e.Assigns#1: 12
      //DEBUG: e.Result#1: 24
      //DEBUG: e.Blocks#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/9 AsIs: (/14 AsIs: (/18 AsIs: e.Pattern#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & NameNestedAssigns/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.Assigns#1/12 } >/28 (/29 </30 & NameNestedResult/31 (/32 e.MainName#1/5/33 Tile{ HalfReuse: )/26 AsIs: e.Result#1/24 HalfReuse: >/27 } )/35 (/36 </37 & NameNestedBlocks/38 (/39 e.MainName#1/5/40 Tile{ HalfReuse: )/22 AsIs: e.Blocks#1/20 HalfReuse: >/23 AsIs: )/15 HalfReuse: )/1 ]] }
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_NameNestedResult]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::copy_evar(vm, context[33], context[34], context[5], context[6]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_name(vm, context[38], functions[efunc_NameNestedBlocks]);
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::copy_evar(vm, context[40], context[41], context[5], context[6]);
      refalrts::update_name(context[4], functions[efunc_NameNestedAssigns]);
      refalrts::reinit_close_bracket(context[26]);
      refalrts::reinit_close_call(context[27]);
      refalrts::reinit_close_bracket(context[22]);
      refalrts::reinit_close_call(context[23]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[14], context[1] );
      refalrts::link_brackets( context[36], context[15] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[37] );
      refalrts::link_brackets( context[39], context[22] );
      refalrts::link_brackets( context[29], context[35] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[32], context[26] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[35], context[39] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[28], context[32] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[9], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 e.Sentences#1/2 >/1
    // closed e.MainName#1 as range 5
    // closed e.Sentences#1 as range 2
    //DEBUG: e.MainName#1: 5
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/10 </11 & DelAccumulator/12 </13 & MapReduce/14 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBody$2\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 HalfReuse: {*}/9 } 1/15 Tile{ AsIs: e.Sentences#1/2 } >/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[10], identifiers[ident_Sentences]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_DelAccumulator]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_MapReduce]);
    refalrts::alloc_number(vm, context[15], 1UL);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_NameNestedBody_S2L1]);
    refalrts::reinit_unwrapped_closure(context[9], context[0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBody("NameNestedBody", 4132962843U, 2153315325U, func_NameNestedBody);


static refalrts::FnResult func_gen_NameNestedBlocks_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 e.Blocks#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Blocks#2 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Blocks#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Blocks#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1("NameNestedBlocks=1", 4132962843U, 2153315325U, func_gen_NameNestedBlocks_A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & NameNestedBlocks=1\1=1/4 s.BlockNumber#2/5 (/8 e.Body#2/6 )/9 e.MainName#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Body#2 as range 6
  // closed e.MainName#3 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Body#2: 6
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.BlockNumber#2/5 HalfReuse: >/8 } (/10 Tile{ HalfReuse: (/9 AsIs: e.MainName#3/2 HalfReuse: )/1 } </11 & NameNestedBody/12 (/13 e.MainName#3/2/14 )/16 Tile{ AsIs: e.Body#2/6 } >/17 )/18 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NameNestedBody]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_open_bracket(context[9]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[10], context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1A1("NameNestedBlocks=1\\1=1", 4132962843U, 2153315325U, func_gen_NameNestedBlocks_A1L1A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedBlocks=1\1/4 (/7 e.MainName#1/5 )/8 s.BlockNumber#2/13 (/11 e.Body#2/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.MainName#1 as range 5
  // closed e.Body#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Body#2: 9
  //DEBUG: s.BlockNumber#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & NameNestedBlocks=1\1=1/8 AsIs: s.BlockNumber#2/13 AsIs: (/11 AsIs: e.Body#2/9 AsIs: )/12 HalfReuse: {*}/1 } Tile{ AsIs: e.MainName#1/5 } Tile{ HalfReuse: ':'/7 } s.BlockNumber#2/13/14 >/15 Tile{ ]] }
  refalrts::copy_stvar(vm, context[14], context[13]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[8], functions[efunc_gen_NameNestedBlocks_A1L1A1]);
  refalrts::reinit_unwrapped_closure(context[1], context[4]);
  refalrts::reinit_char(context[7], ':');
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1("NameNestedBlocks=1\\1", 4132962843U, 2153315325U, func_gen_NameNestedBlocks_A1L1);


static refalrts::FnResult func_NameNestedBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedBlocks/4 (/7 e.MainName#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & NameNestedBlocks=1/10 </11 & MapReduce/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBlocks=1\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Blocks#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_NameNestedBlocks_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapReduce]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedBlocks_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBlocks("NameNestedBlocks", 4132962843U, 2153315325U, func_NameNestedBlocks);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & NameNestedAssigns\1=2/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 e.MainName#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#4 as range 2
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.AssignId#2/5 } >/19 (/20 Tile{ AsIs: s.ChainType#2/6 AsIs: (/9 } e.MainName#4/2/21 Tile{ AsIs: )/10 AsIs: (/13 } </23 & NameNestedResult/24 (/25 Tile{ AsIs: e.MainName#4/2 } )/26 Tile{ AsIs: e.Result#2/7 } >/27 )/28 (/29 </30 & NameNestedBlocks/31 (/32 e.MainName#4/2/33 )/35 Tile{ AsIs: e.Blocks#2/11 } >/36 Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_NameNestedResult]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_NameNestedBlocks]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_evar(vm, context[33], context[34], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[20], context[1] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[29], context[14] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[13], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[27], context[35] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A2("NameNestedAssigns\\1=2", 4132962843U, 2153315325U, func_gen_NameNestedAssigns_L1A2);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & NameNestedAssigns\1=1/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 (/21 e.MainName#1/19 )/22 s.Marker#3/23 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#1: 19
  //DEBUG: s.Marker#3: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Marker#3/23 {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedAssigns\1=2/4 AsIs: s.AssignId#2/5 AsIs: s.ChainType#2/6 AsIs: (/9 AsIs: e.Result#2/7 AsIs: )/10 AsIs: (/13 AsIs: e.Blocks#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 HalfReuse: {*}/21 AsIs: e.MainName#1/19 HalfReuse: s.Marker3 #23/22 } s.AssignId#2/5/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::copy_stvar(vm, context[25], context[5]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedAssigns_L1A2]);
  refalrts::reinit_unwrapped_closure(context[21], context[0]);
  refalrts::reinit_svar( context[22], context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[0], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A1("NameNestedAssigns\\1=1", 4132962843U, 2153315325U, func_gen_NameNestedAssigns_L1A1);


static refalrts::FnResult func_gen_NameNestedAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & NameNestedAssigns\1/4 (/7 e.MainName#1/5 )/8 s.AssignId#2/25 (/11 s.ChainType#2/26 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 (/15 e.Pattern#2/13 )/16 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  // closed e.Pattern#2 as range 13
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: e.Pattern#2: 13
  //DEBUG: s.AssignId#2: 25
  //DEBUG: s.ChainType#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.AssignId#2/25 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & NameNestedAssigns\1=1/7 } Tile{ HalfReuse: s.AssignId2 #25/11 AsIs: s.ChainType#2/26 AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 HalfReuse: (/12 } Tile{ AsIs: e.MainName#1/5 } Tile{ AsIs: )/8 } {*}/27 </28 & ChainTypeMarker/29 s.ChainType#2/26/30 >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_unwrapped_closure(vm, context[27], context[4]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_ChainTypeMarker]);
  refalrts::copy_stvar(vm, context[30], context[26]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_NameNestedAssigns_L1A1]);
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_open_bracket(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[31] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1("NameNestedAssigns\\1", 4132962843U, 2153315325U, func_gen_NameNestedAssigns_L1);


static refalrts::FnResult func_NameNestedAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedAssigns/4 (/7 e.MainName#1/5 )/8 e.Assigns#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Assigns#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Assigns#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 & MapReduce/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedAssigns\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Assigns#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_DelAccumulator]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapReduce]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NameNestedAssigns_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedAssigns("NameNestedAssigns", 4132962843U, 2153315325U, func_NameNestedAssigns);


static refalrts::FnResult func_ChainTypeMarker(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ChainTypeMarker/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ChainTypeMarker/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ChainTypeMarker/4 # Assign/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Assign/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    refalrts::reinit_char(context[1], '=');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ChainTypeMarker/4 # Condition/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Condition/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '?'/1 ]] }
  refalrts::reinit_char(context[1], '?');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ChainTypeMarker("ChainTypeMarker", 4132962843U, 2153315325U, func_ChainTypeMarker);


static refalrts::FnResult func_NameNestedResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & NameNestedResult/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Result#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: 1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_DelAccumulator]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_name(context[0], functions[efunc_NameNestedResultRec]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResult("NameNestedResult", 4132962843U, 2153315325U, func_NameNestedResult);


static refalrts::FnResult func_NameNestedResultRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & NameNestedResultRec/4 s.StartNumber#1/5 (/8 e.MainName#1/6 )/9 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.MainName#1 as range 6
  // closed e.Result#1 as range 2
  //DEBUG: s.StartNumber#1: 5
  //DEBUG: e.MainName#1: 6
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.StartNumber#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } Tile{ AsIs: (/8 } & NameNestedResultRec-Term/10 Tile{ AsIs: e.MainName#1/6 } )/11 Tile{ HalfReuse: s.StartNumber1 #5/9 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_NameNestedResultRecm_Term]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_MapReduce]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResultRec("NameNestedResultRec", 4132962843U, 2153315325U, func_NameNestedResultRec);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec-Term$1=1/4 s.NextNumber#2/5 e.InBrackets#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#2 as range 2
  //DEBUG: s.NextNumber#2: 5
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextNumber#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber2 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_Brackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S1A1("NameNestedResultRec-Term$1=1", 4132962843U, 2153315325U, func_gen_NameNestedResultRecm_Term_S1A1);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NameNestedResultRec-Term$2=1/4 (/7 e.Name#1/5 )/8 s.NextNumber#2/9 e.InBrackets#2/2 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.NextNumber#2: 9
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#2/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S2A1("NameNestedResultRec-Term$2=1", 4132962843U, 2153315325U, func_gen_NameNestedResultRecm_Term_S2A1);


static refalrts::FnResult func_gen_NameNestedResultRecm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec-Term$3=1/4 s.NextNumber#2/5 e.InBrackets#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#2 as range 2
  //DEBUG: s.NextNumber#2: 5
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextNumber#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber2 #5/0 HalfReuse: (/4 } # CallBrackets/6 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_CallBrackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRecm_Term_S3A1("NameNestedResultRec-Term$3=1", 4132962843U, 2153315325U, func_gen_NameNestedResultRecm_Term_S3A1);


static refalrts::FnResult func_NameNestedResultRecm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & NameNestedResultRec-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameNestedResultRec-Term/4 e.new#1/2 s.new#2/7 t.new#3/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & NameNestedResultRec-Term/4 e.new#7/2 s.new#6/7 (/5 s.new#4/10 e.new#5/8 )/6 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[5] ) )
      continue;
    // closed e.new#7 as range 2
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 (/5 # Brackets/10 e.InBrackets#1/8 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.MainName#1 as range 2
      // closed e.InBrackets#1 as range 8
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 2
      //DEBUG: e.InBrackets#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedResultRec-Term$1=1/4 } </11 & NameNestedResultRec/12 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/2 } Tile{ HalfReuse: )/10 AsIs: e.InBrackets#1/8 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[11]);
      refalrts::alloc_name(vm, context[12], functions[efunc_NameNestedResultRec]);
      refalrts::update_name(context[4], functions[efunc_gen_NameNestedResultRecm_Term_S1A1]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 (/5 # ADT-Brackets/10 (/15 e.Name#1/13 )/16 e.InBrackets#1/11 )/6 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[10] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.MainName#1 as range 2
      // closed e.Name#1 as range 13
      // closed e.InBrackets#1 as range 11
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 2
      //DEBUG: e.Name#1: 13
      //DEBUG: e.InBrackets#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & NameNestedResultRec-Term$2=1/10 AsIs: (/15 } Tile{ AsIs: e.Name#1/13 } )/17 {*}/18 </19 & NameNestedResultRec/20 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/2 } Tile{ AsIs: )/16 AsIs: e.InBrackets#1/11 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_unwrapped_closure(vm, context[18], context[4]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_NameNestedResultRec]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_name(context[10], functions[efunc_gen_NameNestedResultRecm_Term_S2A1]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[5], context[16] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[10], context[15] );
      refalrts::use( res );
      refalrts::wrap_closure( context[18] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 (/5 # CallBrackets/10 e.InBrackets#1/8 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.MainName#1 as range 2
      // closed e.InBrackets#1 as range 8
      //DEBUG: s.NextNumber#1: 7
      //DEBUG: e.MainName#1: 2
      //DEBUG: e.InBrackets#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameNestedResultRec-Term$3=1/4 } </11 & NameNestedResultRec/12 Tile{ AsIs: s.NextNumber#1/7 AsIs: (/5 } Tile{ AsIs: e.MainName#1/2 } Tile{ HalfReuse: )/10 AsIs: e.InBrackets#1/8 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[11]);
      refalrts::alloc_name(vm, context[12], functions[efunc_NameNestedResultRec]);
      refalrts::update_name(context[4], functions[efunc_gen_NameNestedResultRecm_Term_S3A1]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[7], context[5] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 (/5 # Closure/10 e.Sentences#1/8 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[10] ) )
      continue;
    // closed e.MainName#1 as range 2
    // closed e.Sentences#1 as range 8
    //DEBUG: s.NextNumber#1: 7
    //DEBUG: e.MainName#1: 2
    //DEBUG: e.Sentences#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 } s.NextNumber#1/7/11 >/12 (/13 # Closure/14 (/15 Tile{ AsIs: e.MainName#1/2 } '\\'/16 Tile{ AsIs: s.NextNumber#1/7 } )/17 </18 & NameNestedBody/19 (/20 e.MainName#1/2/21 '\\'/23 Tile{ HalfReuse: s.NextNumber1 #7/5 HalfReuse: )/10 AsIs: e.Sentences#1/8 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::copy_stvar(vm, context[11], context[7]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_ident(vm, context[14], identifiers[ident_Closure]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_char(vm, context[16], '\\');
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_NameNestedBody]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
    refalrts::alloc_char(vm, context[23], '\\');
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_svar( context[5], context[7] );
    refalrts::reinit_close_bracket(context[10]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[13], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[20], context[10] );
    refalrts::link_brackets( context[15], context[17] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[17], context[23] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameNestedResultRec-Term/4 e.MainName#1/2 s.NextNumber#1/7 t.OtherTerm#1/5 >/1
  // closed e.MainName#1 as range 2
  //DEBUG: t.OtherTerm#1: 5
  //DEBUG: s.NextNumber#1: 7
  //DEBUG: e.MainName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NameNestedResultRec-Term/4 e.MainName#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#1/7 AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResultRecm_Term("NameNestedResultRec-Term", 4132962843U, 2153315325U, func_NameNestedResultRecm_Term);


static refalrts::FnResult func_gen_Passm_RemoveBlocksAndAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-RemoveBlocksAndAssigns\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveBlocksAndAssigns\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveBlocksAndAssigns_L1("Pass-RemoveBlocksAndAssigns\\1", 4132962843U, 2153315325U, func_gen_Passm_RemoveBlocksAndAssigns_L1);


static refalrts::FnResult func_Passm_RemoveBlocksAndAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-RemoveBlocksAndAssigns/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemoveBlocksAndAssigns\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_RemoveBlocksAndAssigns_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveBlocksAndAssigns("Pass-RemoveBlocksAndAssigns", 4132962843U, 2153315325U, func_Passm_RemoveBlocksAndAssigns);


static refalrts::FnResult func_RemoveAssignsm_Sentences(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RemoveAssigns-Sentences/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Sentences/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RemoveAssigns-Sentences/4 # Sentences/5 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[5] ) )
      continue;
    // closed e.Sentences#1 as range 2
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/6 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemoveAssigns-Sentence/5 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[6], identifiers[ident_Sentences]);
    refalrts::update_name(context[4], functions[efunc_Map]);
    refalrts::reinit_name(context[5], functions[efunc_RemoveAssignsm_Sentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Sentences/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.SrcPos#1: 6
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Sentences/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentences("RemoveAssigns-Sentences", 4132962843U, 2153315325U, func_RemoveAssignsm_Sentences);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RemoveAssigns-Sentence$2=3/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 e.Result#4/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#4 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#2/9 } Tile{ HalfReuse: (/12 AsIs: e.Result#4/2 HalfReuse: )/1 } Tile{ HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[4], context[11] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A3("RemoveAssigns-Sentence$2=3", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Sentence_S2A3);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Sentence$2=2/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & RemoveAssigns-Sentence$2=3/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Conditions#2/9 AsIs: )/12 HalfReuse: {*}/15 } </18 & RemoveAssigns-Result/19 Tile{ AsIs: e.Result#3/13 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_RemoveAssignsm_Result]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Sentence_S2A3]);
  refalrts::reinit_unwrapped_closure(context[15], context[0]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A2("RemoveAssigns-Sentence$2=2", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Sentence_S2A2);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & RemoveAssigns-Sentence$2=1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Blocks#1/13 )/16 e.Conditions#2/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Blocks#1 as range 13
  // closed e.Conditions#2 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Blocks#1: 13
  //DEBUG: e.Conditions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & RemoveAssigns-Sentence$2=2/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/2 } Tile{ AsIs: )/12 } {*}/18 </19 & RemoveAssigns-WindBlocks/20 (/21 Tile{ AsIs: e.Result#1/9 } Tile{ HalfReuse: )/15 AsIs: e.Blocks#1/13 HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_RemoveAssignsm_WindBlocks]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Sentence_S2A2]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A1("RemoveAssigns-Sentence$2=1", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Sentence_S2A1);


static refalrts::FnResult func_RemoveAssignsm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & RemoveAssigns-Sentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  do {
    // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/15 (/21 # Assign/23 (/26 e.AssignName#1/24 )/27 (/30 e.AssignResult#1/28 )/31 (/34 e.Blocks#1/32 )/35 (/38 e.AssignPattern#1/36 )/39 )/22 e.SentenceTail#1/17 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Pattern#1 as range 9
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left( identifiers[ident_Assign], context[19], context[20] );
      if( ! context[23] )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[19], context[20] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[19], context[20] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[19], context[20] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.AssignName#1 as range 24
      // closed e.AssignResult#1 as range 28
      // closed e.Blocks#1 as range 32
      // closed e.AssignPattern#1 as range 36
      // closed e.SentenceTail#1 as range 17
      //DEBUG: e.Pattern#1: 9
      //DEBUG: e.Conditions#1: 15
      //DEBUG: e.AssignName#1: 24
      //DEBUG: e.AssignResult#1: 28
      //DEBUG: e.Blocks#1: 32
      //DEBUG: e.AssignPattern#1: 36
      //DEBUG: e.SentenceTail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & RemoveAssigns-Sentence/4 AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: e.Conditions#1/15 AsIs: (/21 } Tile{ AsIs: e.AssignResult#1/28 } Tile{ AsIs: )/31 AsIs: (/34 AsIs: e.Blocks#1/32 HalfReuse: (/35 AsIs: (/38 } Tile{ AsIs: e.AssignName#1/24 } Tile{ AsIs: )/39 } Tile{ Reuse: # Sentences/23 AsIs: (/26 } (/40 Tile{ AsIs: e.AssignPattern#1/36 } Tile{ AsIs: )/22 AsIs: e.SentenceTail#1/17 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/27 HalfReuse: )/30 } >/41 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::update_ident(context[23], identifiers[ident_Sentences]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[30]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[30] );
      refalrts::link_brackets( context[34], context[27] );
      refalrts::link_brackets( context[35], context[1] );
      refalrts::link_brackets( context[26], context[8] );
      refalrts::link_brackets( context[40], context[22] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[21], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[27], context[30] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[23], context[26] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[31], context[38] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/19 e.Result#1/17 )/20 (/15 e.Blocks#1/13 )/16 )/8 >/1
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
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 17
  // closed e.Blocks#1 as range 13
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Blocks#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & RemoveAssigns-Sentence$2=1/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#1/13 AsIs: )/16 HalfReuse: {*}/8 HalfReuse: </1 } & RemoveAssigns-Conditions/21 Tile{ AsIs: e.Conditions#1/5 } >/22 >/23 Tile{ ]] }
  refalrts::alloc_name(vm, context[21], functions[efunc_RemoveAssignsm_Conditions]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_RemoveAssignsm_Sentence_S2A1]);
  refalrts::reinit_unwrapped_closure(context[8], context[4]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentence("RemoveAssigns-Sentence", 4132962843U, 2153315325U, func_RemoveAssignsm_Sentence);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Conditions\1=1/4 (/7 e.ConditionName#2/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionName#2 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.ConditionName#2: 5
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Condition/4 AsIs: (/7 AsIs: e.ConditionName#2/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & RemoveAssigns-Result/15 AsIs: e.Result#3/13 HalfReuse: >/16 HalfReuse: )/1 } (/17 Tile{ AsIs: e.Pattern#2/9 } )/18 )/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Condition]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_RemoveAssignsm_Result]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1A1("RemoveAssigns-Conditions\\1=1", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Conditions_L1A1);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemoveAssigns-Conditions\1/4 (/7 # Condition/9 (/12 e.ConditionName#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 (/24 e.Pattern#2/22 )/25 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Condition], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionName#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.Pattern#2 as range 22
  //DEBUG: e.ConditionName#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.Pattern#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: [*]/7 HalfReuse: & RemoveAssigns-Conditions\1=1/9 AsIs: (/12 AsIs: e.ConditionName#2/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Pattern#2/22 } Tile{ AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 } Tile{ HalfReuse: & RemoveAssigns-WindBlocks/17 AsIs: (/20 } Tile{ AsIs: e.Result#2/14 } Tile{ AsIs: )/25 } Tile{ AsIs: e.Blocks#2/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_gen_RemoveAssignsm_Conditions_L1A1]);
  refalrts::reinit_unwrapped_closure(context[24], context[7]);
  refalrts::reinit_name(context[17], functions[efunc_RemoveAssignsm_WindBlocks]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[25] );
  refalrts::link_brackets( context[16], context[21] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[4], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1("RemoveAssigns-Conditions\\1", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Conditions_L1);


static refalrts::FnResult func_RemoveAssignsm_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveAssigns-Conditions/4 e.Conditions#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Conditions#1 as range 2
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemoveAssigns-Conditions\1/4 AsIs: e.Conditions#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Conditions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Conditions("RemoveAssigns-Conditions", 4132962843U, 2153315325U, func_RemoveAssignsm_Conditions);


static refalrts::FnResult func_gen_RemoveAssignsm_WindBlocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RemoveAssigns-WindBlocks\1/4 (/7 e.Result#2/5 )/8 (/11 (/15 e.BlockName#2/13 )/16 e.Body#2/9 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 5
  // closed e.BlockName#2 as range 13
  // closed e.Body#2 as range 9
  //DEBUG: e.Result#2: 5
  //DEBUG: e.BlockName#2: 13
  //DEBUG: e.Body#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CallBrackets/7 } Tile{ HalfReuse: (/8 HalfReuse: # Closure/11 AsIs: (/15 AsIs: e.BlockName#2/13 AsIs: )/16 AsIs: e.Body#2/9 AsIs: )/12 } Tile{ AsIs: e.Result#2/5 } )/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CallBrackets]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[11], identifiers[ident_Closure]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[4], context[17] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_WindBlocks_L1("RemoveAssigns-WindBlocks\\1", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_WindBlocks_L1);


static refalrts::FnResult func_RemoveAssignsm_WindBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RemoveAssigns-WindBlocks/4 (/7 e.Result#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.Result#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Result#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce/0 Reuse: & RemoveAssigns-WindBlocks\1/4 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_Reduce]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_WindBlocks_L1]);
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

static refalrts::NativeReference nat_ref_RemoveAssignsm_WindBlocks("RemoveAssigns-WindBlocks", 4132962843U, 2153315325U, func_RemoveAssignsm_WindBlocks);


static refalrts::FnResult func_gen_RemoveAssignsm_Result_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RemoveAssigns-Result\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveAssigns-Result\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & RemoveAssigns-Result\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 7
      //DEBUG: e.InBrackets#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#2 as range 12
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.Name#2: 12
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Result/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RemoveAssigns-Result\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 7
      //DEBUG: e.InBrackets#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_RemoveAssignsm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemoveAssigns-Result\1/4 (/5 # Closure/9 (/14 e.ClosureName#2/12 )/15 e.Sentences#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.ClosureName#2 as range 12
    // closed e.Sentences#2 as range 10
    //DEBUG: e.ClosureName#2: 12
    //DEBUG: e.Sentences#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Closure/9 AsIs: (/14 AsIs: e.ClosureName#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Sentences#2/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RemoveAssignsm_Sentences]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveAssigns-Result\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Result\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Result_L1("RemoveAssigns-Result\\1", 4132962843U, 2153315325U, func_gen_RemoveAssignsm_Result_L1);


static refalrts::FnResult func_RemoveAssignsm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveAssigns-Result/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemoveAssigns-Result\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_RemoveAssignsm_Result_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Result("RemoveAssigns-Result", 4132962843U, 2153315325U, func_RemoveAssignsm_Result);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Pass-FlatNestedFuncs\1$1=1/4 s.ScopeClass#2/5 (/8 e.Name#2/6 )/9 (/12 e.NestedFuncs#3/10 )/13 e.Body#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#2 as range 6
  // closed e.NestedFuncs#3 as range 10
  // closed e.Body#3 as range 2
  //DEBUG: s.ScopeClass#2: 5
  //DEBUG: e.Name#2: 6
  //DEBUG: e.NestedFuncs#3: 10
  //DEBUG: e.Body#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NestedFuncs#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#2/5 AsIs: (/8 AsIs: e.Name#2/6 AsIs: )/9 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1S1A1("Pass-FlatNestedFuncs\\1$1=1", 4132962843U, 2153315325U, func_gen_Passm_FlatNestedFuncs_L1S1A1);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Pass-FlatNestedFuncs\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-FlatNestedFuncs\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 (/6 # Function/10 s.ScopeClass#2/11 (/14 e.Name#2/12 )/15 e.Body#2/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left( identifiers[ident_Function], context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Body#2 as range 8
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: s.ScopeClass#2: 11
    //DEBUG: e.Name#2: 12
    //DEBUG: e.Body#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/6 HalfReuse: & Pass-FlatNestedFuncs\1$1=1/10 AsIs: s.ScopeClass#2/11 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } {*}/17 Tile{ AsIs: </0 Reuse: & ExtractNested/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.Body#2/8 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_unwrapped_closure(vm, context[17], context[6]);
    refalrts::reinit_closure_head(context[6]);
    refalrts::reinit_name(context[10], functions[efunc_gen_Passm_FlatNestedFuncs_L1S1A1]);
    refalrts::update_name(context[4], functions[efunc_ExtractNested]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[6], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 t.OtherProgramElement#2/6 >/1
  //DEBUG: t.OtherProgramElement#2: 6
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1("Pass-FlatNestedFuncs\\1", 4132962843U, 2153315325U, func_gen_Passm_FlatNestedFuncs_L1);


static refalrts::FnResult func_Passm_FlatNestedFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-FlatNestedFuncs/4 s.MarkupContext#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/6 & Pass-FlatNestedFuncs\1/7 Tile{ AsIs: s.MarkupContext#1/5 } {*}/8 Tile{ AsIs: e.AST#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Passm_FlatNestedFuncs_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[6]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_FlatNestedFuncs("Pass-FlatNestedFuncs", 4132962843U, 2153315325U, func_Passm_FlatNestedFuncs);


static refalrts::FnResult func_gen_ExtractNested_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractNested=1/4 (/7 )/8 (/11 e.NestedFuncs#2/9 )/12 e.Sentences#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested=1/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNested_A1("ExtractNested=1", 4132962843U, 2153315325U, func_gen_ExtractNested_A1);


static refalrts::FnResult func_ExtractNested(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractNested/4 s.MarkupContext#1/5 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested=1/4 } </6 & ExtractNestedRec/7 Tile{ AsIs: s.MarkupContext#1/5 } (/8 )/9 Tile{ AsIs: e.Sentences#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_ExtractNestedRec]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNested_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNested("ExtractNested", 4132962843U, 2153315325U, func_ExtractNested);


static refalrts::FnResult func_gen_ExtractNestedRec_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNestedRec$1=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Sentences#2/2 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNestedRec$1=1/4 {REMOVED TILE} {REMOVED TILE} )/16 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#2/13 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 HalfReuse: # Sentences/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_ident(context[15], identifiers[ident_Sentences]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedRec_S1A1("ExtractNestedRec$1=1", 4132962843U, 2153315325U, func_gen_ExtractNestedRec_S1A1);


static refalrts::FnResult func_ExtractNestedRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractNestedRec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNestedRec/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 # Sentences/10 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 6
    // closed e.Sentences#1 as range 2
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 6
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNestedRec$1=1/4 } </11 & MapReduce/12 Tile{ AsIs: (/8 } & ExtractNested-Sentence/13 Tile{ AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.ScopeVars#1/6 } )/14 (/15 (/16 )/17 (/18 Tile{ AsIs: )/9 HalfReuse: )/10 AsIs: e.Sentences#1/2 AsIs: >/1 } >/19 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_MapReduce]);
    refalrts::alloc_name(vm, context[13], functions[efunc_ExtractNestedm_Sentence]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedRec_S1A1]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::link_brackets( context[18], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 6
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.ScopeVars#1/6 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: (/8 } Tile{ AsIs: )/9 AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedRec("ExtractNestedRec", 4132962843U, 2153315325U, func_ExtractNestedRec);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Sentence=3/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ConditionsNestedFuncs#3/9 )/12 (/15 e.Pattern#1/13 )/16 (/19 e.Conditions#3/17 )/20 (/23 e.ResultNestedFuncs#4/21 )/24 (/27 e.BorrowedVars#4/25 )/28 e.Result#4/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.NestedFuncs#1 as range 5
  // closed e.ConditionsNestedFuncs#3 as range 9
  // closed e.Pattern#1 as range 13
  // closed e.Conditions#3 as range 17
  // closed e.ResultNestedFuncs#4 as range 21
  // closed e.BorrowedVars#4 as range 25
  // closed e.Result#4 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ConditionsNestedFuncs#3: 9
  //DEBUG: e.Pattern#1: 13
  //DEBUG: e.Conditions#3: 17
  //DEBUG: e.ResultNestedFuncs#4: 21
  //DEBUG: e.BorrowedVars#4: 25
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.ConditionsNestedFuncs#3/9 } Tile{ AsIs: e.ResultNestedFuncs#4/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#4/25 AsIs: )/28 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.Pattern#1/13 AsIs: )/16 } Tile{ AsIs: e.Conditions#3/17 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Result#4/2 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[4], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A3("ExtractNested-Sentence=3", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Sentence_A3);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Sentence=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.ConditionsNestedFuncs#3/22 )/25 (/28 e.BorrowedVars#3/26 )/29 (/32 e.LocalVars#3/30 )/33 e.Conditions#3/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.ConditionsNestedFuncs#3 as range 22
  // closed e.BorrowedVars#3 as range 26
  // closed e.LocalVars#3 as range 30
  // closed e.Conditions#3 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.ConditionsNestedFuncs#3: 22
  //DEBUG: e.BorrowedVars#3: 26
  //DEBUG: e.LocalVars#3: 30
  //DEBUG: e.Conditions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Sentence=3/7 } (/34 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.ConditionsNestedFuncs#3/22 AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#3/2 } )/35 {*}/36 </37 Tile{ HalfReuse: & ExtractNested-Result/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 } Tile{ AsIs: e.BorrowedVars#3/26 } Tile{ AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.ScopeVars#1/14 } Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.LocalVars#3/30 AsIs: )/33 } Tile{ AsIs: e.Result#1/18 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_unwrapped_closure(vm, context[36], context[4]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ExtractNestedm_Sentence_A3]);
  refalrts::reinit_name(context[12], functions[efunc_ExtractNestedm_Result]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[20], context[29] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[35] );
  refalrts::link_brackets( context[28], context[8] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[34], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[36] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A2("ExtractNested-Sentence=2", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Sentence_A2);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ExtractNested-Sentence=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.Conditions#1/22 )/25 (/28 e.BorrowedVars#2/26 )/29 e.LocalVars#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.Conditions#1 as range 22
  // closed e.BorrowedVars#2 as range 26
  // closed e.LocalVars#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.Conditions#1: 22
  //DEBUG: e.BorrowedVars#2: 26
  //DEBUG: e.LocalVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Sentence=2/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Result#1/18 AsIs: )/21 HalfReuse: {*}/24 } </31 & ExtractNested-Conditions/32 Tile{ HalfReuse: s.MarkupContext1 #13/25 AsIs: (/28 AsIs: e.BorrowedVars#2/26 AsIs: )/29 } (/33 e.ScopeVars#1/14/34 )/36 (/37 Tile{ AsIs: e.LocalVars#2/2 } )/38 Tile{ AsIs: e.Conditions#1/22 } >/39 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_ExtractNestedm_Conditions]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[14], context[15]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Sentence_A2]);
  refalrts::reinit_unwrapped_closure(context[24], context[0]);
  refalrts::reinit_svar( context[25], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[37] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A1("ExtractNested-Sentence=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Sentence_A1);


static refalrts::FnResult func_ExtractNestedm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNested-Sentence/4 s.MarkupContext#1/29 e.ScopeVars#1/2 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/27 e.Result#1/25 )/28 )/8 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[5], context[6] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#1 as range 17
  // closed e.BorrowedVars#1 as range 21
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: e.NestedFuncs#1: 17
  //DEBUG: e.BorrowedVars#1: 21
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 25
  //DEBUG: s.MarkupContext#1: 29
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & ExtractNested-Sentence=1/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/16 HalfReuse: s.MarkupContext1 #29/7 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: (/27 AsIs: e.Result#1/25 AsIs: )/28 HalfReuse: (/8 } Tile{ AsIs: e.Conditions#1/5 } Tile{ AsIs: )/24 } {*}/30 </31 & ExtractNested-Pattern/32 (/33 e.ScopeVars#1/2/34 )/36 (/37 Tile{ AsIs: e.BorrowedVars#1/21 } )/38 e.Pattern#1/9/39 >/41 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_unwrapped_closure(vm, context[30], context[4]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_ExtractNestedm_Pattern]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::copy_evar(vm, context[39], context[40], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[15], functions[efunc_gen_ExtractNestedm_Sentence_A1]);
  refalrts::reinit_svar( context[7], context[29] );
  refalrts::reinit_open_bracket(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[8], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[30], context[37] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[27], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[23] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Sentence("ExtractNested-Sentence", 4132962843U, 2153315325U, func_ExtractNestedm_Sentence);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ExtractNested-Conditions$1=4/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.ConditionsNestedFuncs#5/21 )/24 (/27 e.BorrowedVars#5/25 )/28 (/31 e.LocalVars#5/29 )/32 e.Conditions#5/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.ConditionsNestedFuncs#5 as range 21
  // closed e.BorrowedVars#5 as range 25
  // closed e.LocalVars#5 as range 29
  // closed e.Conditions#5 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.ConditionsNestedFuncs#5: 21
  //DEBUG: e.BorrowedVars#5: 25
  //DEBUG: e.LocalVars#5: 29
  //DEBUG: e.Conditions#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions$1=4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ResultNestedFuncs#2/5 } Tile{ AsIs: e.ConditionsNestedFuncs#5/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#5/25 AsIs: )/28 AsIs: (/31 AsIs: e.LocalVars#5/29 AsIs: )/32 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Condition/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: )/23 } Tile{ AsIs: e.Conditions#5/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[8], identifiers[ident_Condition]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[24], context[32] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A4("ExtractNested-Conditions$1=4", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Conditions_S1A4);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Conditions$1=3/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.BorrowedVars#3/22 )/25 (/28 e.ScopeVars#1/26 )/29 (/32 e.Conditions#1/30 )/33 e.LocalVars#4/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.BorrowedVars#3 as range 22
  // closed e.ScopeVars#1 as range 26
  // closed e.Conditions#1 as range 30
  // closed e.LocalVars#4 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.BorrowedVars#3: 22
  //DEBUG: e.ScopeVars#1: 26
  //DEBUG: e.Conditions#1: 30
  //DEBUG: e.LocalVars#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Conditions$1=4/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 } {*}/35 </36 & ExtractNested-Conditions/37 Tile{ AsIs: s.MarkupContext#1/21 AsIs: (/24 AsIs: e.BorrowedVars#3/22 AsIs: )/25 AsIs: (/28 AsIs: e.ScopeVars#1/26 AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.LocalVars#4/2 } Tile{ AsIs: )/33 } Tile{ AsIs: e.Conditions#1/30 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_unwrapped_closure(vm, context[35], context[0]);
  refalrts::alloc_open_call(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_ExtractNestedm_Conditions]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Conditions_S1A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[32] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A3("ExtractNested-Conditions$1=3", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Conditions_S1A3);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ExtractNested-Conditions$1=2/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.ScopeVars#1/22 )/25 (/28 e.Conditions#1/26 )/29 (/32 e.LocalVars#1/30 )/33 (/36 e.BorrowedVars#3/34 )/37 e.PatternLocalVars#3/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.ScopeVars#1 as range 22
  // closed e.Conditions#1 as range 26
  // closed e.LocalVars#1 as range 30
  // closed e.BorrowedVars#3 as range 34
  // closed e.PatternLocalVars#3 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ScopeVars#1: 22
  //DEBUG: e.Conditions#1: 26
  //DEBUG: e.LocalVars#1: 30
  //DEBUG: e.BorrowedVars#3: 34
  //DEBUG: e.PatternLocalVars#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </38 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Conditions$1=3/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 AsIs: s.MarkupContext#1/21 AsIs: (/24 } Tile{ AsIs: e.BorrowedVars#3/34 } Tile{ AsIs: )/33 AsIs: (/36 } Tile{ AsIs: e.ScopeVars#1/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.Conditions#1/26 AsIs: )/29 HalfReuse: {*}/32 } </39 Tile{ HalfReuse: & Uniq/37 } Tile{ AsIs: e.LocalVars#1/30 } Tile{ AsIs: e.PatternLocalVars#3/2 } >/40 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Conditions_S1A3]);
  refalrts::reinit_unwrapped_closure(context[32], context[0]);
  refalrts::reinit_name(context[37], functions[efunc_Uniq]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[36], context[25] );
  refalrts::link_brackets( context[24], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  refalrts::use( res );
  refalrts::wrap_closure( context[32] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A2("ExtractNested-Conditions$1=2", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Conditions_S1A2);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ExtractNested-Conditions$1=1/4 (/7 e.ConditionName#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Conditions#1/18 )/21 (/24 e.LocalVars#1/22 )/25 (/28 e.ResultNestedFuncs#2/26 )/29 (/32 e.BorrowedVars#2/30 )/33 e.Result#2/2 >/1
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
  // closed e.ConditionName#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Conditions#1 as range 18
  // closed e.LocalVars#1 as range 22
  // closed e.ResultNestedFuncs#2 as range 26
  // closed e.BorrowedVars#2 as range 30
  // closed e.Result#2 as range 2
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Conditions#1: 18
  //DEBUG: e.LocalVars#1: 22
  //DEBUG: e.ResultNestedFuncs#2: 26
  //DEBUG: e.BorrowedVars#2: 30
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Conditions$1=2/7 } (/34 Tile{ AsIs: e.ResultNestedFuncs#2/26 } )/35 (/36 Tile{ AsIs: e.ConditionName#1/5 } )/37 (/38 Tile{ AsIs: e.Result#2/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Conditions#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.LocalVars#1/22 AsIs: )/25 HalfReuse: {*}/28 } </39 & ExtractNested-Pattern/40 (/41 e.ScopeVars#1/14/42 Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.BorrowedVars#2/30 AsIs: )/33 } e.Pattern#1/9/44 >/46 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_ExtractNestedm_Pattern]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[14], context[15]);
  refalrts::copy_evar(vm, context[44], context[45], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ExtractNestedm_Conditions_S1A2]);
  refalrts::reinit_unwrapped_closure(context[28], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[41], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[38], context[8] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[46], context[46] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[39], context[41] );
  res = refalrts::splice_evar( res, context[8], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A1("ExtractNested-Conditions$1=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Conditions_S1A1);


static refalrts::FnResult func_ExtractNestedm_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & ExtractNested-Conditions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Conditions/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 (/22 # Condition/24 (/27 e.ConditionName#1/25 )/28 (/31 e.Result#1/29 )/32 (/35 e.Pattern#1/33 )/36 )/23 e.Conditions#1/18 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left( identifiers[ident_Condition], context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[20], context[21] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[20], context[21] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_left( context[33], context[34], context[20], context[21] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.BorrowedVars#1 as range 6
    // closed e.ScopeVars#1 as range 10
    // closed e.LocalVars#1 as range 14
    // closed e.ConditionName#1 as range 25
    // closed e.Result#1 as range 29
    // closed e.Pattern#1 as range 33
    // closed e.Conditions#1 as range 18
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.BorrowedVars#1: 6
    //DEBUG: e.ScopeVars#1: 10
    //DEBUG: e.LocalVars#1: 14
    //DEBUG: e.ConditionName#1: 25
    //DEBUG: e.Result#1: 29
    //DEBUG: e.Pattern#1: 33
    //DEBUG: e.Conditions#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </37 Tile{ HalfReuse: [*]/22 HalfReuse: & ExtractNested-Conditions$1=1/24 AsIs: (/27 AsIs: e.ConditionName#1/25 AsIs: )/28 AsIs: (/31 } Tile{ AsIs: e.Pattern#1/33 } )/38 Tile{ HalfReuse: s.MarkupContext1 #5/32 AsIs: (/35 } e.ScopeVars#1/10/39 Tile{ AsIs: )/36 HalfReuse: (/23 AsIs: e.Conditions#1/18 HalfReuse: )/1 } (/41 e.LocalVars#1/14/42 )/44 {*}/45 Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 AsIs: e.BorrowedVars#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } Tile{ AsIs: e.Result#1/29 } >/46 >/47 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::copy_evar(vm, context[39], context[40], context[10], context[11]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::copy_evar(vm, context[42], context[43], context[14], context[15]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_unwrapped_closure(vm, context[45], context[22]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::reinit_closure_head(context[22]);
    refalrts::reinit_name(context[24], functions[efunc_gen_ExtractNestedm_Conditions_S1A1]);
    refalrts::reinit_svar( context[32], context[5] );
    refalrts::reinit_open_bracket(context[23]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_ExtractNestedm_Result]);
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[41], context[44] );
    refalrts::link_brackets( context[23], context[1] );
    refalrts::link_brackets( context[35], context[36] );
    refalrts::link_brackets( context[31], context[38] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[41], context[45] );
    res = refalrts::splice_evar( res, context[36], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[32], context[35] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[22], context[31] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    refalrts::use( res );
    refalrts::wrap_closure( context[45] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BorrowedVars#1 as range 6
  // closed e.ScopeVars#1 as range 10
  // closed e.LocalVars#1 as range 14
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.BorrowedVars#1: 6
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.LocalVars#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/6 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Conditions("ExtractNested-Conditions", 4132962843U, 2153315325U, func_ExtractNestedm_Conditions);


static refalrts::FnResult func_ExtractNestedm_Pattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractNested-Pattern/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 e.Pattern#1/2 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Pattern#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & MapReduce/0 HalfReuse: (/4 HalfReuse: & UpdateBorrowedVars/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } </14 & Uniq/15 </16 & ExtractAllVars/17 Tile{ AsIs: e.Pattern#1/2 } >/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Uniq]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_ExtractAllVars]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_name(context[0], functions[efunc_MapReduce]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_UpdateBorrowedVars]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Pattern("ExtractNested-Pattern", 4132962843U, 2153315325U, func_ExtractNestedm_Pattern);


static refalrts::FnResult func_ExtractAllVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ExtractAllVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ExtractAllVars/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & ExtractAllVars/4 (/7 s.new#3/11 e.new#4/9 )/8 e.new#5/5 >/1
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
        continue;
      // closed e.new#5 as range 5
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & ExtractAllVars/4 (/7 # TkVariable/11 s.Mode#1/14 e.Index#1/12 )/8 e.Tail#1/5 >/1
        context[12] = context[9];
        context[13] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
          continue;
        // closed e.Tail#1 as range 5
        if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
          continue;
        // closed e.Index#1 as range 12
        //DEBUG: e.Tail#1: 5
        //DEBUG: s.Mode#1: 14
        //DEBUG: e.Index#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.Mode#1/14 AsIs: e.Index#1/12 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[11]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[11], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractAllVars/4 (/7 # Brackets/11 e.Inner#1/9 )/8 e.Tail#1/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[11] ) )
          continue;
        // closed e.Inner#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.Inner#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 # Brackets/11 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/9 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractAllVars/4 (/7 # ADT-Brackets/11 e.Inner#1/9 )/8 e.Tail#1/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[11] ) )
        continue;
      // closed e.Inner#1 as range 9
      // closed e.Tail#1 as range 5
      //DEBUG: e.Inner#1: 9
      //DEBUG: e.Tail#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/11 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/9 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAllVars/4 t.OtherTerm#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.OtherTerm#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & ExtractAllVars/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAllVars/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAllVars("ExtractAllVars", 4132962843U, 2153315325U, func_ExtractAllVars);


static refalrts::FnResult func_Uniq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Uniq/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Uniq/4 e.Uniqs#1/7 t.Repeated#1/11 e.NotScanned-M#1/13 t.Repeated#1/17 e.NotScanned-E#1/15 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[15] = context[9];
        context[16] = context[10];
        context[18] = refalrts::repeated_stvar_left( vm, context[17], context[11], context[15], context[16] );
        if( ! context[18] )
          continue;
        // closed e.NotScanned-E#1 as range 15
        //DEBUG: e.Uniqs#1: 7
        //DEBUG: t.Repeated#1: 11
        //DEBUG: e.NotScanned-M#1: 13
        //DEBUG: e.NotScanned-E#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/11 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/7 } Tile{ AsIs: </0 AsIs: & Uniq/4 } Tile{ AsIs: e.NotScanned-M#1/13 } Tile{ AsIs: t.Repeated#1/17 AsIs: e.NotScanned-E#1/15 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Uniq/4 e.Uniqs#1/2 >/1
  // closed e.Uniqs#1 as range 2
  //DEBUG: e.Uniqs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Uniq/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Uniq("Uniq", 4132962843U, 2153315325U, func_Uniq);


static refalrts::FnResult func_UpdateBorrowedVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & UpdateBorrowedVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateBorrowedVars/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 s.new#3/13 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 (/11 e.BorrowedVars-B#1/16 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.BorrowedVars-E#1/18 )/12 (/7 s.Mode#1/13 e.Index#1/5 )/8 >/1
    context[14] = context[9];
    context[15] = context[10];
    // closed e.ScopeVars#1 as range 2
    // closed e.Index#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[13], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[5], context[6], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 18
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.ScopeVars#1: 2
      //DEBUG: e.Index#1: 5
      //DEBUG: e.BorrowedVars-B#1: 16
      //DEBUG: e.BorrowedVars-E#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 {REMOVED TILE} (/7 s.Mode#1/13 e.Index#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/16 AsIs: (/22 AsIs: s.Mode#1/24 AsIs: e.Index#1/25 AsIs: )/23 AsIs: e.BorrowedVars-E#1/18 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & UpdateBorrowedVars/4 e.ScopeVars-B#1/16 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/18 (/11 e.BorrowedVars#1/9 )/12 (/7 s.Mode#1/13 e.Index#1/5 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    // closed e.BorrowedVars#1 as range 9
    // closed e.Index#1 as range 5
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[13], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[5], context[6], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 18
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.BorrowedVars#1: 9
      //DEBUG: e.Index#1: 5
      //DEBUG: e.ScopeVars-B#1: 16
      //DEBUG: e.ScopeVars-E#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & UpdateBorrowedVars/4 e.ScopeVars-B#1/16 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/18 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/9 } Tile{ AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 (/11 e.BorrowedVars#1/9 )/12 (/7 s.Mode#1/13 e.Index#1/5 )/8 >/1
  // closed e.ScopeVars#1 as range 2
  // closed e.BorrowedVars#1 as range 9
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 13
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateBorrowedVars("UpdateBorrowedVars", 4132962843U, 2153315325U, func_UpdateBorrowedVars);


static refalrts::FnResult func_gen_ExtractNestedm_Result_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Result#2/2 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Result#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result=1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Result_A1("ExtractNested-Result=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Result_A1);


static refalrts::FnResult func_ExtractNestedm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Result/4 s.MarkupContext#1/5 (/8 e.OriginBorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 e.OriginResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.OriginBorrowedVars#1 as range 6
  // closed e.ScopeVars#1 as range 10
  // closed e.LocalVars#1 as range 14
  // closed e.OriginResult#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.OriginBorrowedVars#1: 6
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.LocalVars#1: 14
  //DEBUG: e.OriginResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result=1/4 } </18 & MapReduce/19 Tile{ AsIs: (/8 } & ExtractNested-Result-Term/20 Tile{ HalfReuse: s.MarkupContext1 #5/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } )/21 (/22 (/23 )/24 (/25 Tile{ AsIs: e.OriginBorrowedVars#1/6 } )/26 )/27 Tile{ AsIs: e.OriginResult#1/2 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ExtractNestedm_Resultm_Term]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractNestedm_Result_A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[22], context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[8], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Result("ExtractNested-Result", 4132962843U, 2153315325U, func_ExtractNestedm_Result);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$2=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Brackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S2A1("ExtractNested-Result-Term$2=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$3=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.InBracketsNestedFuncs#2/13 )/16 (/19 e.BorrowedVars#2/17 )/20 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.InBracketsNestedFuncs#2 as range 13
  // closed e.BorrowedVars#2 as range 17
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.InBracketsNestedFuncs#2: 13
  //DEBUG: e.BorrowedVars#2: 17
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.BorrowedVars#2/17 AsIs: )/20 } Tile{ HalfReuse: )/7 } Tile{ AsIs: (/15 } Tile{ HalfReuse: # ADT-Brackets/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_ident(context[8], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[4], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S3A1("ExtractNested-Result-Term$3=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S3A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$4=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # CallBrackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S4A1("ExtractNested-Result-Term$4=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S4A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.NestedNestedFuncs#2/9 )/12 t.Function#3/13 (/17 e.BorrowedVars#3/15 )/18 t.ClosureTerm#3/19 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.NestedNestedFuncs#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.BorrowedVars#3 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.NestedNestedFuncs#2: 9
  //DEBUG: t.Function#3: 13
  //DEBUG: e.BorrowedVars#3: 15
  //DEBUG: t.ClosureTerm#3: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/9 } Tile{ AsIs: t.Function#3/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.BorrowedVars#3/15 AsIs: )/18 } Tile{ AsIs: )/8 } Tile{ AsIs: t.ClosureTerm#3/19 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2("ExtractNested-Result-Term$5=2", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S5A2);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 e.Context#4/5 )/8 (/11 (/15 e.Pattern#5/13 )/16 e.Conditions#5/9 (/19 e.Result#5/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#4 as range 5
  // closed e.Pattern#5 as range 13
  // closed e.Conditions#5 as range 9
  // closed e.Result#5 as range 17
  //DEBUG: e.Context#4: 5
  //DEBUG: e.Pattern#5: 13
  //DEBUG: e.Conditions#5: 9
  //DEBUG: e.Result#5: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 } Tile{ AsIs: e.Context#4/5 } Tile{ AsIs: e.Pattern#5/13 } Tile{ AsIs: )/16 AsIs: e.Conditions#5/9 AsIs: (/19 AsIs: e.Result#5/17 AsIs: )/20 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1("ExtractNested-Result-Term$5=2\\1$2\\1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & ExtractNested-Result-Term$5=2\1$2=1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.Sentences#3/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.BorrowedVars#1/17 )/20 (/23 e.NestedBorrowedVars#2/21 )/24 e.Context#4/2 >/1
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
  // closed e.ClosureName#1 as range 5
  // closed e.Sentences#3 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.BorrowedVars#1 as range 17
  // closed e.NestedBorrowedVars#2 as range 21
  // closed e.Context#4 as range 2
  //DEBUG: e.ClosureName#1: 5
  //DEBUG: e.Sentences#3: 9
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.BorrowedVars#1: 17
  //DEBUG: e.NestedBorrowedVars#2: 21
  //DEBUG: e.Context#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/25 Tile{ HalfReuse: # Function/0 HalfReuse: # GN-Local/4 AsIs: (/7 AsIs: e.ClosureName#1/5 AsIs: )/8 HalfReuse: # Sentences/11 } </26 & Map/27 [*]/28 & ExtractNested-Result-Term$5=2\1$2\1/29 Tile{ AsIs: (/23 } e.Context#4/2/30 Tile{ AsIs: )/12 HalfReuse: {*}/15 } Tile{ AsIs: e.Sentences#3/9 } >/32 )/33 </34 & Reduce/35 (/36 & CheckBorrowed/37 (/38 Tile{ AsIs: e.ScopeVars#1/13 } )/39 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.BorrowedVars#1/17 AsIs: )/20 } Tile{ AsIs: e.NestedBorrowedVars#2/21 } >/40 (/41 # ClosureBrackets/42 (/43 # Symbol/44 # Name/45 e.ClosureName#1/5/46 Tile{ AsIs: )/24 AsIs: e.Context#4/2 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1]);
  refalrts::copy_evar(vm, context[30], context[31], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_Reduce]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_CheckBorrowed]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_ident(vm, context[42], identifiers[ident_ClosureBrackets]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_ident(vm, context[44], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[45], identifiers[ident_Name]);
  refalrts::copy_evar(vm, context[46], context[47], context[5], context[6]);
  refalrts::reinit_ident(context[0], identifiers[ident_Function]);
  refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
  refalrts::reinit_ident(context[11], identifiers[ident_Sentences]);
  refalrts::reinit_unwrapped_closure(context[15], context[28]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[41], context[1] );
  refalrts::link_brackets( context[43], context[24] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[36], context[16] );
  refalrts::link_brackets( context[38], context[39] );
  refalrts::link_brackets( context[25], context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[23], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[46], context[47] );
  res = refalrts::splice_evar( res, context[40], context[45] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[32], context[38] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1("ExtractNested-Result-Term$5=2\\1$2=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ExtractNested-Result-Term$5=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 (/24 e.new#6/22 )/25 e.new#7/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.new#6 as range 22
  // closed e.new#7 as range 2
  do {
    // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 e.NestedBorrowedVars#2/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 )/25 e.Body#3/2 >/1
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.ClosureName#1 as range 5
    // closed e.BorrowedVars#1 as range 9
    // closed e.NestedBorrowedVars#2 as range 13
    // closed e.ScopeVars#1 as range 17
    // closed e.Body#3 as range 2
    //DEBUG: s.MarkupContext#1: 21
    //DEBUG: e.ClosureName#1: 5
    //DEBUG: e.BorrowedVars#1: 9
    //DEBUG: e.NestedBorrowedVars#2: 13
    //DEBUG: e.ScopeVars#1: 17
    //DEBUG: e.Body#3: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.NestedBorrowedVars#2/13 )/16 {REMOVED TILE} e.ScopeVars#1/17 {REMOVED TILE} s.MarkupContext#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 HalfReuse: # GN-Local/7 } Tile{ AsIs: (/19 } Tile{ AsIs: e.ClosureName#1/5 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Body#3/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 AsIs: (/15 } Tile{ HalfReuse: # Symbol/24 HalfReuse: # Name/25 } e.ClosureName#1/5/26 Tile{ HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Function]);
    refalrts::reinit_ident(context[7], identifiers[ident_GNm_Local]);
    refalrts::reinit_ident(context[24], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[25], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 e.NestedBorrowedVars#2/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/27 )/25 # Sentences/26 e.Sentences#3/2 >/1
  context[26] = refalrts::ident_left( identifiers[ident_Sentences], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureName#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.NestedBorrowedVars#2 as range 13
  if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[13], context[14], context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 17
  // closed e.Sentences#3 as range 2
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ClosureName#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.NestedBorrowedVars#2: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Result-Term$5=2\1$2=1/7 } Tile{ AsIs: (/24 } Tile{ AsIs: e.ClosureName#1/5 } Tile{ AsIs: )/25 HalfReuse: (/26 AsIs: e.Sentences#3/2 HalfReuse: )/1 } (/29 Tile{ AsIs: e.ScopeVars#1/17 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.NestedBorrowedVars#2/13 AsIs: )/16 HalfReuse: {*}/19 } </30 Tile{ HalfReuse: & CreateContext/20 AsIs: s.MarkupContext#1/21 } Tile{ AsIs: e.NestedBorrowedVars#2/27 } >/31 >/32 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1]);
  refalrts::reinit_open_bracket(context[26]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_unwrapped_closure(context[19], context[4]);
  refalrts::reinit_name(context[20], functions[efunc_CreateContext]);
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[29], context[8] );
  refalrts::link_brackets( context[26], context[1] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1("ExtractNested-Result-Term$5=2\\1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/22 )/25 (/28 e.NestedNestedFuncs#2/26 )/29 e.Body#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.ClosureName#1 as range 9
  // closed e.BorrowedVars#1 as range 13
  // closed e.ScopeVars#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.NestedBorrowedVars#2 as range 22
  // closed e.NestedNestedFuncs#2 as range 26
  // closed e.Body#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ClosureName#1: 9
  //DEBUG: e.BorrowedVars#1: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.NestedBorrowedVars#2: 22
  //DEBUG: e.NestedNestedFuncs#2: 26
  //DEBUG: e.Body#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Result-Term$5=2/7 } (/30 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.NestedNestedFuncs#2/26 AsIs: )/29 } {*}/31 </32 & Fetch/33 (/34 e.NestedBorrowedVars#2/22/35 )/37 Tile{ AsIs: e.Body#2/2 } [*]/38 Tile{ HalfReuse: & ExtractNested-Result-Term$5=2\1/8 AsIs: (/11 AsIs: e.ClosureName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.NestedBorrowedVars#2/22 } )/39 (/40 Tile{ AsIs: e.ScopeVars#1/17 } Tile{ AsIs: )/20 AsIs: s.MarkupContext#1/21 HalfReuse: {*}/24 } >/41 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_unwrapped_closure(vm, context[31], context[4]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_Fetch]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::copy_evar(vm, context[35], context[36], context[22], context[23]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_closure_head(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2]);
  refalrts::reinit_name(context[8], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A2L1]);
  refalrts::reinit_unwrapped_closure(context[24], context[38]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[40], context[20] );
  refalrts::link_brackets( context[19], context[39] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[30], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[37] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  refalrts::wrap_closure( context[31] );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A1("ExtractNested-Result-Term$5=1", 4132962843U, 2153315325U, func_gen_ExtractNestedm_Resultm_Term_S5A1);


static refalrts::FnResult func_ExtractNestedm_Resultm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ExtractNested-Result-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractNested-Result-Term/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 (/20 e.new#4/18 )/21 (/24 e.new#5/22 )/25 )/17 t.new#6/26 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[14], context[15] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 18
  // closed e.new#5 as range 22
  context[27] = refalrts::tvar_left( context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractNested-Result-Term/4 s.new#7/5 (/8 e.new#8/6 )/9 (/12 e.new#9/10 )/13 (/16 (/20 e.new#10/18 )/21 (/24 e.new#11/22 )/25 )/17 (/26 s.new#12/30 e.new#13/28 )/27 >/1
    context[28] = 0;
    context[29] = 0;
    if( ! refalrts::brackets_term( context[28], context[29], context[26] ) )
      continue;
    // closed e.new#8 as range 6
    // closed e.new#9 as range 10
    // closed e.new#10 as range 18
    // closed e.new#11 as range 22
    if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
      continue;
    // closed e.new#13 as range 28
    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 (/26 # TkVariable/30 s.Mode#1/33 e.Index#1/31 )/27 >/1
      context[31] = context[28];
      context[32] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[30] ) )
        continue;
      // closed e.ScopeVars#1 as range 6
      // closed e.LocalVars#1 as range 10
      // closed e.NestedFuncs#1 as range 18
      // closed e.BorrowedVars#1 as range 22
      if( ! refalrts::svar_left( context[33], context[31], context[32] ) )
        continue;
      // closed e.Index#1 as range 31
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 6
      //DEBUG: e.LocalVars#1: 10
      //DEBUG: e.NestedFuncs#1: 18
      //DEBUG: e.BorrowedVars#1: 22
      //DEBUG: s.Mode#1: 33
      //DEBUG: e.Index#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.LocalVars#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 HalfReuse: </24 } Tile{ Reuse: & CheckBorrowed/4 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/22 } Tile{ AsIs: )/13 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: s.Mode1 #33/0 } e.Index#1/31/34 )/36 Tile{ HalfReuse: >/25 AsIs: )/17 AsIs: (/26 AsIs: # TkVariable/30 AsIs: s.Mode#1/33 AsIs: e.Index#1/31 AsIs: )/27 } Tile{ ]] }
      refalrts::copy_evar(vm, context[34], context[35], context[31], context[32]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::reinit_open_call(context[24]);
      refalrts::update_name(context[4], functions[efunc_CheckBorrowed]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_svar( context[0], context[33] );
      refalrts::reinit_close_call(context[25]);
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[1], context[36] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 (/26 # Brackets/30 e.InBrackets#1/28 )/27 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[30] ) )
        continue;
      // closed e.ScopeVars#1 as range 6
      // closed e.LocalVars#1 as range 10
      // closed e.NestedFuncs#1 as range 18
      // closed e.BorrowedVars#1 as range 22
      // closed e.InBrackets#1 as range 28
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 6
      //DEBUG: e.LocalVars#1: 10
      //DEBUG: e.NestedFuncs#1: 18
      //DEBUG: e.BorrowedVars#1: 22
      //DEBUG: e.InBrackets#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/30 } Tile{ HalfReuse: & ExtractNested-Result-Term$2=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/22 } Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/10 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/28 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_closure_head(context[30]);
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S2A1]);
      refalrts::reinit_unwrapped_closure(context[24], context[30]);
      refalrts::update_name(context[4], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[26], context[17] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      refalrts::wrap_closure( context[24] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 (/26 # ADT-Brackets/30 (/35 e.Name#1/33 )/36 e.InBrackets#1/31 )/27 >/1
      context[31] = context[28];
      context[32] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[30] ) )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.ScopeVars#1 as range 6
      // closed e.LocalVars#1 as range 10
      // closed e.NestedFuncs#1 as range 18
      // closed e.BorrowedVars#1 as range 22
      // closed e.Name#1 as range 33
      // closed e.InBrackets#1 as range 31
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 6
      //DEBUG: e.LocalVars#1: 10
      //DEBUG: e.NestedFuncs#1: 18
      //DEBUG: e.BorrowedVars#1: 22
      //DEBUG: e.Name#1: 33
      //DEBUG: e.InBrackets#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/30 } Tile{ HalfReuse: & ExtractNested-Result-Term$3=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Name#1/33 } Tile{ AsIs: )/17 HalfReuse: {*}/26 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/35 } Tile{ AsIs: e.BorrowedVars#1/22 } Tile{ AsIs: )/36 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/10 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/31 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_closure_head(context[30]);
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S3A1]);
      refalrts::reinit_unwrapped_closure(context[26], context[30]);
      refalrts::update_name(context[4], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[24], context[17] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[17], context[26] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      refalrts::wrap_closure( context[26] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 (/26 # CallBrackets/30 e.InBrackets#1/28 )/27 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[30] ) )
        continue;
      // closed e.ScopeVars#1 as range 6
      // closed e.LocalVars#1 as range 10
      // closed e.NestedFuncs#1 as range 18
      // closed e.BorrowedVars#1 as range 22
      // closed e.InBrackets#1 as range 28
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ScopeVars#1: 6
      //DEBUG: e.LocalVars#1: 10
      //DEBUG: e.NestedFuncs#1: 18
      //DEBUG: e.BorrowedVars#1: 22
      //DEBUG: e.InBrackets#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/30 } Tile{ HalfReuse: & ExtractNested-Result-Term$4=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/22 } Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/10 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/28 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_closure_head(context[30]);
      refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S4A1]);
      refalrts::reinit_unwrapped_closure(context[24], context[30]);
      refalrts::update_name(context[4], functions[efunc_ExtractNestedm_Result]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[26], context[17] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      refalrts::wrap_closure( context[24] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 (/26 # Closure/30 (/35 e.ClosureName#1/33 )/36 e.Body#1/31 )/27 >/1
    context[31] = context[28];
    context[32] = context[29];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[30] ) )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    // closed e.ScopeVars#1 as range 6
    // closed e.LocalVars#1 as range 10
    // closed e.NestedFuncs#1 as range 18
    // closed e.BorrowedVars#1 as range 22
    // closed e.ClosureName#1 as range 33
    // closed e.Body#1 as range 31
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 6
    //DEBUG: e.LocalVars#1: 10
    //DEBUG: e.NestedFuncs#1: 18
    //DEBUG: e.BorrowedVars#1: 22
    //DEBUG: e.ClosureName#1: 33
    //DEBUG: e.Body#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </37 Tile{ HalfReuse: [*]/13 HalfReuse: & ExtractNested-Result-Term$5=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.ClosureName#1/33 } Tile{ AsIs: )/17 AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/22 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScopeVars#1/6 } Tile{ AsIs: )/25 } Tile{ HalfReuse: s.MarkupContext1 #5/30 HalfReuse: {*}/35 } Tile{ AsIs: </0 Reuse: & ExtractNestedRec/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 } e.ScopeVars#1/6/38 Tile{ AsIs: e.LocalVars#1/10 } Tile{ AsIs: )/36 AsIs: e.Body#1/31 HalfReuse: >/27 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[6], context[7]);
    refalrts::reinit_closure_head(context[13]);
    refalrts::reinit_name(context[16], functions[efunc_gen_ExtractNestedm_Resultm_Term_S5A1]);
    refalrts::reinit_svar( context[30], context[5] );
    refalrts::reinit_unwrapped_closure(context[35], context[13]);
    refalrts::update_name(context[4], functions[efunc_ExtractNestedRec]);
    refalrts::reinit_close_call(context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[36] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[26], context[9] );
    refalrts::link_brackets( context[24], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[36];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[30], context[35] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[17], context[26] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[13], context[24] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    refalrts::use( res );
    refalrts::wrap_closure( context[35] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 (/16 (/20 e.NestedFuncs#1/18 )/21 (/24 e.BorrowedVars#1/22 )/25 )/17 t.OtherTerm#1/26 >/1
  // closed e.ScopeVars#1 as range 6
  // closed e.LocalVars#1 as range 10
  // closed e.NestedFuncs#1 as range 18
  // closed e.BorrowedVars#1 as range 22
  //DEBUG: t.OtherTerm#1: 26
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: e.LocalVars#1: 10
  //DEBUG: e.NestedFuncs#1: 18
  //DEBUG: e.BorrowedVars#1: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/6 )/9 (/12 e.LocalVars#1/10 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.BorrowedVars#1/22 AsIs: )/25 AsIs: )/17 AsIs: t.OtherTerm#1/26 } Tile{ ]] }
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[27] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Resultm_Term("ExtractNested-Result-Term", 4132962843U, 2153315325U, func_ExtractNestedm_Resultm_Term);


static refalrts::FnResult func_CheckBorrowed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & CheckBorrowed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckBorrowed/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 s.new#3/17 e.new#4/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 13
  do {
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.BorrowedVars-E#1/22 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
    context[18] = context[9];
    context[19] = context[10];
    // closed e.ScopeVars#1 as range 5
    // closed e.Index#1 as range 13
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( vm, context[28], context[17], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[13], context[14], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 22
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.ScopeVars#1: 5
      //DEBUG: e.Index#1: 13
      //DEBUG: e.BorrowedVars-B#1: 20
      //DEBUG: e.BorrowedVars-E#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/20 AsIs: (/26 AsIs: s.Mode#1/28 AsIs: e.Index#1/29 AsIs: )/27 AsIs: e.BorrowedVars-E#1/22 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    // closed e.BorrowedVars#1 as range 9
    // closed e.Index#1 as range 13
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( vm, context[28], context[17], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[13], context[14], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 22
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.BorrowedVars#1: 9
      //DEBUG: e.Index#1: 13
      //DEBUG: e.ScopeVars-B#1: 20
      //DEBUG: e.ScopeVars-E#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CheckBorrowed/4 (/7 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/9 } Tile{ AsIs: (/15 AsIs: s.Mode#1/17 AsIs: e.Index#1/13 AsIs: )/16 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Index#1 as range 13
  //DEBUG: s.Mode#1: 17
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Index#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckBorrowed("CheckBorrowed", 4132962843U, 2153315325U, func_CheckBorrowed);


static refalrts::FnResult func_gen_CreateContext_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CreateContext$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & CreateContext$1\1/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 5
    //DEBUG: e.Index#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 # Symbol/11 # Identifier/12 # VAR/13 'e'/14 e.Index#2/5/15 )/17 (/18 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_ident(vm, context[11], identifiers[ident_Symbol]);
    refalrts::alloc_ident(vm, context[12], identifiers[ident_Identifier]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_VAR]);
    refalrts::alloc_char(vm, context[14], 'e');
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[18], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[10], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext$1\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Symbol/0 HalfReuse: # Identifier/4 HalfReuse: # VAR/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: (/1 } # TkVariable/11 s.Mode#2/9/12 e.Index#2/5/13 )/15 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TkVariable]);
  refalrts::copy_stvar(vm, context[12], context[9]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::reinit_ident(context[0], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[4], identifiers[ident_Identifier]);
  refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[15] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S1L1("CreateContext$1\\1", 4132962843U, 2153315325U, func_gen_CreateContext_S1L1);


static refalrts::FnResult func_gen_CreateContext_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CreateContext$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext$2\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & CreateContext$2\1/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 5
    //DEBUG: e.Index#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext$2\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S2L1("CreateContext$2\\1", 4132962843U, 2153315325U, func_gen_CreateContext_S2L1);


static refalrts::FnResult func_CreateContext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CreateContext/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateContext/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateContext/4 # MarkupContext/5 e.Context#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_MarkupContext], context[5] ) )
      continue;
    // closed e.Context#1 as range 2
    //DEBUG: e.Context#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CreateContext$1\1/5 AsIs: e.Context#1/2 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Map]);
    refalrts::reinit_name(context[5], functions[efunc_gen_CreateContext_S1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateContext/4 # NoMarkupContext/5 e.Context#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoMarkupContext], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#1 as range 2
  //DEBUG: e.Context#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CreateContext$2\1/5 AsIs: e.Context#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[5], functions[efunc_gen_CreateContext_S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateContext("CreateContext", 4132962843U, 2153315325U, func_CreateContext);


static refalrts::FnResult func_gen_Passm_CleanupRedudandExterns_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Pass-CleanupRedudandExterns=1/4 (/7 e.DefinedFunctions#2/5 )/8 e.AST#2/2 >/1
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
  // closed e.DefinedFunctions#2 as range 5
  // closed e.AST#2 as range 2
  //DEBUG: e.DefinedFunctions#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FilterDeclarations/7 AsIs: e.DefinedFunctions#2/5 AsIs: )/8 AsIs: e.AST#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_FilterDeclarations]);
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

static refalrts::NativeReference nat_ref_gen_Passm_CleanupRedudandExterns_A1("Pass-CleanupRedudandExterns=1", 4132962843U, 2153315325U, func_gen_Passm_CleanupRedudandExterns_A1);


static refalrts::FnResult func_gen_Passm_CleanupRedudandExterns_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Pass-CleanupRedudandExterns=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.new#4/5 )/8 (/11 s.new#5/13 s.new#6/16 e.new#7/14 )/12 >/1
    context[14] = context[9];
    context[15] = context[10];
    // closed e.new#4 as range 5
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    // closed e.new#7 as range 14
    do {
      // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Function/13 s.ScopeClass#2/16 (/21 e.Name#2/19 )/22 e.Body#2/17 )/12 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.DefinedFunctions#2 as range 5
      // closed e.Name#2 as range 19
      // closed e.Body#2 as range 17
      //DEBUG: s.ScopeClass#2: 16
      //DEBUG: e.DefinedFunctions#2: 5
      //DEBUG: e.Name#2: 19
      //DEBUG: e.Body#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/5 } Tile{ AsIs: (/7 } e.Name#2/19/23 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/13 AsIs: s.ScopeClass#2/16 AsIs: (/21 AsIs: e.Name#2/19 AsIs: )/22 AsIs: e.Body#2/17 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[19], context[20]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Enum/13 s.ScopeClass#2/16 e.Name#2/14 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Enum], context[13] ) )
        continue;
      // closed e.DefinedFunctions#2 as range 5
      // closed e.Name#2 as range 14
      //DEBUG: s.ScopeClass#2: 16
      //DEBUG: e.DefinedFunctions#2: 5
      //DEBUG: e.Name#2: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/5 } Tile{ AsIs: (/7 } e.Name#2/14/17 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/16 AsIs: e.Name#2/14 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[17], context[18], context[14], context[15]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Swap/13 s.ScopeClass#2/16 e.Name#2/14 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_Swap], context[13] ) )
        continue;
      // closed e.DefinedFunctions#2 as range 5
      // closed e.Name#2 as range 14
      //DEBUG: s.ScopeClass#2: 16
      //DEBUG: e.DefinedFunctions#2: 5
      //DEBUG: e.Name#2: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DefinedFunctions#2/5 } Tile{ AsIs: (/7 } e.Name#2/14/17 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/16 AsIs: e.Name#2/14 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[17], context[18], context[14], context[15]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Declaration/13 s.ScopeClass#2/16 e.Name#2/14 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_Declaration], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 5
    // closed e.Name#2 as range 14
    //DEBUG: s.ScopeClass#2: 16
    //DEBUG: e.DefinedFunctions#2: 5
    //DEBUG: e.Name#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/16 AsIs: e.Name#2/14 AsIs: )/12 } Tile{ ]] }
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

  do {
    // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # Ident/13 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[13] ) )
      continue;
    // closed e.DefinedFunctions#2 as range 5
    // closed e.Name#2 as range 9
    //DEBUG: e.DefinedFunctions#2: 5
    //DEBUG: e.Name#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ ]] }
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

  // </0 & Pass-CleanupRedudandExterns=1\1/4 (/7 e.DefinedFunctions#2/5 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DefinedFunctions#2 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 9
  //DEBUG: e.DefinedFunctions#2: 5
  //DEBUG: t.SrcPos#2: 14
  //DEBUG: e.Code#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-CleanupRedudandExterns=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DefinedFunctions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_CleanupRedudandExterns_A1L1("Pass-CleanupRedudandExterns=1\\1", 4132962843U, 2153315325U, func_gen_Passm_CleanupRedudandExterns_A1L1);


static refalrts::FnResult func_Passm_CleanupRedudandExterns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Pass-CleanupRedudandExterns/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pass-CleanupRedudandExterns=1/4 } </5 & MapAccum/6 & Pass-CleanupRedudandExterns=1\1/7 (/8 )/9 Tile{ AsIs: e.AST#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Passm_CleanupRedudandExterns_A1L1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_CleanupRedudandExterns_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_CleanupRedudandExterns("Pass-CleanupRedudandExterns", 4132962843U, 2153315325U, func_Passm_CleanupRedudandExterns);


static refalrts::FnResult func_FilterDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FilterDeclarations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterDeclarations/4 e.new#1/2 t.new#2/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & FilterDeclarations/4 e.DefinedFunctions-B#1/13 (/19 e.Name#1/21 )/20 e.DefinedFunctions-E#1/15 (/5 # Declaration/11 s.ScopeClass#1/12 e.Name#1/9 )/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Declaration], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[7];
      context[16] = context[8];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.DefinedFunctions-E#1 as range 15
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 9
      //DEBUG: e.DefinedFunctions-B#1: 13
      //DEBUG: e.DefinedFunctions-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FilterDeclarations/4 e.DefinedFunctions-B#1/13 (/19 e.Name#1/21 )/20 e.DefinedFunctions-E#1/15 (/5 # Declaration/11 s.ScopeClass#1/12 e.Name#1/9 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterDeclarations/4 e.DefinedFunctions#1/2 t.OtherItem#1/5 >/1
  // closed e.DefinedFunctions#1 as range 2
  //DEBUG: t.OtherItem#1: 5
  //DEBUG: e.DefinedFunctions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterDeclarations/4 e.DefinedFunctions#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterDeclarations("FilterDeclarations", 4132962843U, 2153315325U, func_FilterDeclarations);


static refalrts::FnResult func_gen_Passm_FoldEnums_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Pass-FoldEnums\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pass-FoldEnums\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Pass-FoldEnums\1/4 (/5 # Function/9 s.ScopeClass#2/15 (/13 e.Name#2/11 )/14 # Sentences/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right( identifiers[ident_Sentences], context[7], context[8] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Name#2: 11
    //DEBUG: s.ScopeClass#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Pass-FoldEnums\1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 # Sentences/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Enum/9 AsIs: s.ScopeClass#2/15 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident(context[9], identifiers[ident_Enum]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pass-FoldEnums\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pass-FoldEnums\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FoldEnums_L1("Pass-FoldEnums\\1", 4132962843U, 2153315325U, func_gen_Passm_FoldEnums_L1);


static refalrts::FnResult func_Passm_FoldEnums(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-FoldEnums/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-FoldEnums\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_Passm_FoldEnums_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_FoldEnums("Pass-FoldEnums", 4132962843U, 2153315325U, func_Passm_FoldEnums);


//End of file
