// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CallBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

// identifier #CloseCall
template <typename SREFAL_PARAM_INT>
struct ident_CloseCall {
  static const char *name() {
    return "CloseCall";
  }
};

// identifier #CmdAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdAllocateElem {
  static const char *name() {
    return "CmdAllocateElem";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmptyResult {
  static const char *name() {
    return "CmdEmptyResult";
  }
};

// identifier #CmdInsertElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertElem {
  static const char *name() {
    return "CmdInsertElem";
  }
};

// identifier #CmdInsertRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertRange {
  static const char *name() {
    return "CmdInsertRange";
  }
};

// identifier #CmdInsertVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertVar {
  static const char *name() {
    return "CmdInsertVar";
  }
};

// identifier #CmdLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdLinkBrackets {
  static const char *name() {
    return "CmdLinkBrackets";
  }
};

// identifier #CmdPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdPushStack {
  static const char *name() {
    return "CmdPushStack";
  }
};

// identifier #CmdReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult {
  static const char *name() {
    return "CmdReturnResult";
  }
};

// identifier #ElChar
template <typename SREFAL_PARAM_INT>
struct ident_ElChar {
  static const char *name() {
    return "ElChar";
  }
};

// identifier #ElCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseADT {
  static const char *name() {
    return "ElCloseADT";
  }
};

// identifier #ElCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseBracket {
  static const char *name() {
    return "ElCloseBracket";
  }
};

// identifier #ElCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseCall {
  static const char *name() {
    return "ElCloseCall";
  }
};

// identifier #ElIdent
template <typename SREFAL_PARAM_INT>
struct ident_ElIdent {
  static const char *name() {
    return "ElIdent";
  }
};

// identifier #ElName
template <typename SREFAL_PARAM_INT>
struct ident_ElName {
  static const char *name() {
    return "ElName";
  }
};

// identifier #ElNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElNumber {
  static const char *name() {
    return "ElNumber";
  }
};

// identifier #ElOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenADT {
  static const char *name() {
    return "ElOpenADT";
  }
};

// identifier #ElOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenBracket {
  static const char *name() {
    return "ElOpenBracket";
  }
};

// identifier #ElOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenCall {
  static const char *name() {
    return "ElOpenCall";
  }
};

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Offset
template <typename SREFAL_PARAM_INT>
struct ident_Offset {
  static const char *name() {
    return "Offset";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseADT {
  static const char *name() {
    return "TkCloseADT";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkString
template <typename SREFAL_PARAM_INT>
struct ident_TkString {
  static const char *name() {
    return "TkString";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_GenResult_Simple_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenResult_Simple_0/4 (/7 s.Mode#2/9 (/12 e.Index#2/10 )/13 e.Offsets#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    // closed e.Index#2 as range 10
    // closed e.Offsets#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_GenResult_Simple_0/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#2/9 AsIs: (/12 AsIs: e.Index#2/10 AsIs: )/13 } Tile{ HalfReuse: (/0 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Offsets#2/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_GenResult_Simple_0/4 (/7 s.Mode#2/9 (/12 e.Index#2/10 )/13 e.Offsets#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#2 as range 10
  // closed e.Offsets#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_GenResult_Simple_0/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#2/9 AsIs: (/12 AsIs: e.Index#2/10 AsIs: )/13 } Tile{ HalfReuse: (/0 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Offsets#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_Simple_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MakeVariableCommentTable, "MakeVariableCommentTable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdReturnResult<int>::name,
    & ident_CmdEmptyResult<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_GenResult_Simple_1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.CommonVars#2 as range 6
    // closed e.ResultCommands#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.ContextOffset#2/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdEmptyResult/12 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdReturnResult/13 )/14 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocIdent, 0, 1, 12},
    {refalrts::icAllocIdent, 0, 0, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icReinitSVar, 0, 5, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
    {refalrts::icLinkBrackets, 1, 14, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 9, 1, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_GenResult_Simple_1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
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
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ContextOffset#2/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdEmptyResult/12 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdReturnResult/13 )/14 Tile{ ]] }
  if( ! refalrts::alloc_name( context[10], MakeVariableCommentTable, "MakeVariableCommentTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdEmptyResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_CmdReturnResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult GenResult_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { lambda_GenResult_Simple_0, "lambda_GenResult_Simple_0" },
    { Fetch, "Fetch" },
    { lambda_GenResult_Simple_1, "lambda_GenResult_Simple_1" },
    { Map, "Map" },
    { DoGenResult, "DoGenResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenResult_Simple/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    // closed e.PatternVars#1 as range 6
    // closed e.MarkedPattern#1 as range 10
    // closed e.Result#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.MarkedPattern#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </14 & DoGenResult/15 (/16 </17 & Map/18 Tile{ HalfReuse: & lambda_GenResult_Simple_0/8 AsIs: e.PatternVars#1/6 HalfReuse: >/9 HalfReuse: )/12 } (/19 )/20 (/21 )/22 Tile{ AsIs: s.ContextOffset#1/5 } </23 Tile{ HalfReuse: & CollectStrings/13 AsIs: e.Result#1/2 AsIs: >/1 } >/24 & lambda_GenResult_Simple_1/25 >/26 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 5, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 4, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocFunc, 0, 3, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icReinitFunc, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 12, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 26, 0},
    {refalrts::icSpliceTile, 13, 1, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 19, 22, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 14, 18, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & GenResult_Simple/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.MarkedPattern#1/10 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </14 & DoGenResult/15 (/16 </17 & Map/18 Tile{ HalfReuse: & lambda_GenResult_Simple_0/8 AsIs: e.PatternVars#1/6 HalfReuse: >/9 HalfReuse: )/12 } (/19 )/20 (/21 )/22 Tile{ AsIs: s.ContextOffset#1/5 } </23 Tile{ HalfReuse: & CollectStrings/13 AsIs: e.Result#1/2 AsIs: >/1 } >/24 & lambda_GenResult_Simple_1/25 >/26 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], DoGenResult, "DoGenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], lambda_GenResult_Simple_1, "lambda_GenResult_Simple_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_name( context[8], lambda_GenResult_Simple_0, "lambda_GenResult_Simple_0" );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_close_bracket( context[12] );
  refalrts::reinit_name( context[13], CollectStrings, "CollectStrings" );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[16], context[12] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CollectStrings_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_CollectStrings_0/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Chars#2 as range 5
    // closed e.Tail#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_CollectStrings_0/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Chars#2 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TkString<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], CollectStrings, "CollectStrings" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { lambda_CollectStrings_0, "lambda_CollectStrings_0" },
    { BuildString, "BuildString" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & CollectStrings/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +27, 0, 0},
    //(#TkCharS )(#TkCharS )E 
    // </0 & CollectStrings/4 (/7 # TkChar/9 s.Value1#1/15 )/8 (/12 # TkChar/14 s.Value2#1/16 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 3, 5},
    {refalrts::icBracketLeftSave, 0, 10, 18},
    {refalrts::icIdentLeftSave, 14, 3, 10},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icsVarLeft, 0, 15, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icsVarLeft, 0, 16, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Value1#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & BuildString/8 AsIs: (/12 HalfReuse: s.Value11 #15/14 AsIs: s.Value2#1/16 AsIs: )/13 AsIs: e.Tail#1/18(2) AsIs: >/1 } Tile{ HalfReuse: & lambda_CollectStrings_0/9 } >/17 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 2, 8},
    {refalrts::icReinitSVar, 0, 15, 14},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#BracketsE )E 
    // </0 & CollectStrings/4 (/7 # Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 2, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#CallBracketsE )E 
    // </0 & CollectStrings/4 (/7 # CallBrackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 1, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //(#ADT_BracketsE )E 
    // </0 & CollectStrings/4 (/7 # ADT_Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeftSave, 0, 5, 18},
    {refalrts::icIdentLeftSave, 9, 0, 5},
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT_Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    //T E 
    // </0 & CollectStrings/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 18, 2},
    {refalrts::ictVarLeftSave, 0, 5, 18},
    // closed e.Tail#1 as range 18(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & CollectStrings/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CollectStrings/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & CollectStrings/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(#TkCharS )(#TkCharS )E 
    // </0 & CollectStrings/4 (/7 # TkChar/9 s.Value1#1/15 )/8 (/12 # TkChar/14 s.Value2#1/16 )/13 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[18], context[19] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkChar<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 18(2)
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Value1#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & BuildString/8 AsIs: (/12 HalfReuse: s.Value11 #15/14 AsIs: s.Value2#1/16 AsIs: )/13 AsIs: e.Tail#1/18(2) AsIs: >/1 } Tile{ HalfReuse: & lambda_CollectStrings_0/9 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], BuildString, "BuildString" );
    refalrts::reinit_svar( context[14], context[15] );
    refalrts::reinit_name( context[9], lambda_CollectStrings_0, "lambda_CollectStrings_0" );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#BracketsE )E 
    // </0 & CollectStrings/4 (/7 # Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#CallBracketsE )E 
    // </0 & CollectStrings/4 (/7 # CallBrackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CallBrackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ADT_BracketsE )E 
    // </0 & CollectStrings/4 (/7 # ADT_Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[18], context[19] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT_Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T E 
    // </0 & CollectStrings/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[18], context[19] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/18(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & CollectStrings/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CollectStrings/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )E 
    //GLOBAL GEN:(E )E 
    // </0 & BuildString/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(E )(#TkCharS )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Value#1/14 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 9, 15},
    {refalrts::icIdentLeftSave, 13, 0, 9},
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    {refalrts::icsVarLeft, 0, 14, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TkChar/13 s.Value#1/14 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #14/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitSVar, 0, 14, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & BuildString/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )E 
  //GLOBAL GEN:(E )E 
  // </0 & BuildString/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )(#TkCharS )E 
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Value#1/14 )/12 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[15], context[16] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkChar/13 s.Value#1/14 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #14/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )E 
  // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & BuildString/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { IncVarOffset, "IncVarOffset" },
    { Inc, "Inc" },
    { Add, "Add" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInsertVar<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_TkVariable<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_CloseCall<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkName<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_ElString<int>::name,
    & ident_TkString<int>::name,
    & ident_ElIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_ElNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:(E )(E )(E )S E 
    // </0 & DoGenResult/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 s.idxTTT#0/17 e.idxTTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    {refalrts::icsVarLeft, 0, 17, 2},
    // closed e.idxTTTV#0 as range 2
    {refalrts::icOnFailGoTo, +38, 0, 0},
    //(E )(E )(E )S (#TkCharS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkChar/22 s.Value#1/23 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 29, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElChar/22 AsIs: s.Value#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icCopySTVar, 32, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitSVar, 0, 17, 20},
    {refalrts::icUpdateIdent, 0, 28, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 29, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //(E )(E )(E )S (#TkNameE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkName/22 e.Name#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 13, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElName/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 23, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 27, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 27, 20, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 28, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    //(E )(E )(E )S (#TkNumberS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkNumber/22 s.Number#1/23 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 26, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElNumber/22 AsIs: s.Number#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icCopySTVar, 32, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitSVar, 0, 17, 20},
    {refalrts::icUpdateIdent, 0, 25, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 29, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //(E )(E )(E )S (#TkIdentifierE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkIdentifier/22 e.Name#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 24, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElIdent/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 23, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 23, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 27, 20, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 28, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    //(E )(E )(E )S (#TkStringE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkString/22 e.Chars#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 22, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Chars#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElString/22 } Tile{ AsIs: e.Chars#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertRange/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Add/30 s.Counter#1/17/31 2/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 23, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 2, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icAllocInt, 0, 2, 32},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 21, 22},
    {refalrts::icReinitIdent, 0, 20, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 27, 20, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 28, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //(E )(E )(E )S (#BracketsE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # Brackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 19, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenBracket/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # TkCloseBracket/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 23, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocIdent, 0, 12, 34},
    {refalrts::icCopySTVar, 35, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 18, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 21, 0},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 27, 20, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 33, 35, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 28, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //(E )(E )(E )S (#CallBracketsE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CallBrackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 17, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenCall/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # CloseCall/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 23, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 1, 30},
    {refalrts::icCopySTVar, 31, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocIdent, 0, 7, 34},
    {refalrts::icCopySTVar, 35, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 16, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 21, 0},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 27, 20, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 33, 35, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 28, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    //(E )(E )(E )S (#ADT_Brackets(E )E )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # ADT_Brackets/22 (/25 e.Name#1/23 )/26 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 15, 18},
    {refalrts::icBracketLeftSave, 0, 23, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 23
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/27 # ElOpenADT/28 )/29 )/30 (/31 (/32 # CmdInsertElem/33 s.Counter#1/17/34 )/35 Tile{ AsIs: e.Commands#1/13 } )/36 </37 Tile{ HalfReuse: & Inc/16 AsIs: s.Counter#1/17 HalfReuse: >/20 HalfReuse: (/22 HalfReuse: # TkName/25 AsIs: e.Name#1/23 AsIs: )/26 AsIs: e.InBrackets#1/18 HalfReuse: (/21 } # TkCloseADT/38 s.Counter#1/17/39 )/40 Tile{ AsIs: e.Result#1/54(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 27, 17, 0},
    {refalrts::icAllocIdent, 0, 14, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icAllocIdent, 0, 5, 33},
    {refalrts::icCopySTVar, 34, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icAllocIdent, 0, 10, 38},
    {refalrts::icCopySTVar, 39, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitFunc, 0, 1, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icReinitIdent, 0, 13, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 40, 0},
    {refalrts::icLinkBrackets, 22, 26, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icLinkBrackets, 31, 36, 0},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icLinkBrackets, 11, 30, 0},
    {refalrts::icLinkBrackets, 12, 29, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 54},
    {refalrts::icSpliceTile, 38, 40, 0},
    {refalrts::icSpliceTile, 16, 21, 0},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 27, 35, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //(E )(E )(E )S (#TkCloseBracketS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseBracket/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 12, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseBracket/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 24, 17, 0},
    {refalrts::icAllocIdent, 0, 11, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icCopySTVar, 29, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icAllocFunc, 0, 1, 35},
    {refalrts::icCopySTVar, 36, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 8, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 28, 33, 0},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 33, 36, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 24, 28, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //(E )(E )(E )S (#TkCloseADTS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseADT/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 10, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseADT/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 24, 17, 0},
    {refalrts::icAllocIdent, 0, 9, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icCopySTVar, 29, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icAllocFunc, 0, 1, 35},
    {refalrts::icCopySTVar, 36, 17, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icUpdateIdent, 0, 8, 22},
    {refalrts::icReinitIdent, 0, 5, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 28, 33, 0},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 33, 36, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 24, 28, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    //(E )(E )(E )S (#CloseCallS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CloseCall/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 7, 18},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    {refalrts::icEmpty, 0, 0, 18},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseCall/25 )/26 )/27 (/28 (/29 Tile{ HalfReuse: # CmdPushStack/16 AsIs: s.Counter#1/17 } )/30 Tile{ AsIs: (/20 Reuse: # CmdPushStack/22 AsIs: s.OpenCounter#1/23 AsIs: )/21 } (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 >/39 Tile{ AsIs: e.Result#1/54(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icCopySTVar, 24, 17, 0},
    {refalrts::icAllocIdent, 0, 6, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icAllocIdent, 0, 5, 32},
    {refalrts::icCopySTVar, 33, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 1, 37},
    {refalrts::icCopySTVar, 38, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 4, 15},
    {refalrts::icReinitIdent, 0, 3, 16},
    {refalrts::icUpdateIdent, 0, 3, 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 28, 35, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icLinkBrackets, 11, 27, 0},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 54},
    {refalrts::icSpliceTile, 35, 39, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 31, 34, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 24, 29, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    //(E )(E )(E )S (#TkVariableS E )E 
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/30 (/33 e.Index#1/39 )/34 (/37 e.ResultVars#1/35 )/38 s.NextPatternVar#1/41 e.PatternVars#1/26 )/29 e.Vars_E#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 2, 18},
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    // closed e.Index#1 as range 18
    {refalrts::icSave, 0, 56, 5},
    {refalrts::icEPrepare, 0, 24, 56},
    {refalrts::icEStart, 0, 24, 56},
    {refalrts::icSave, 0, 58, 56},
    {refalrts::icBracketLeftSave, 0, 26, 58},
    {refalrts::icsRepeatLeft, 30, 23, 26},
    {refalrts::icBracketLeftSave, 0, 31, 26},
    {refalrts::icBracketLeftSave, 0, 35, 26},
    {refalrts::iceRepeatLeft, 39, 18, 31},
    {refalrts::icEmpty, 0, 0, 31},
    // closed e.ResultVars#1 as range 35
    // closed e.Vars_E#1 as range 58(5)
    {refalrts::icsVarLeft, 0, 41, 26},
    // closed e.PatternVars#1 as range 26
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Counter#1/17 {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/30 AsIs: (/33 AsIs: e.Index#1/39 AsIs: )/34 AsIs: (/37 AsIs: e.ResultVars#1/35 HalfReuse: s.NextPatternVar1 #41/38 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/26 } Tile{ AsIs: )/29 AsIs: e.Vars_E#1/58(5) AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } Tile{ AsIs: s.NextPatternVar#1/41 } )/42 Tile{ AsIs: e.Commands#1/13 } )/43 Tile{ HalfReuse: s.Counter1 #17/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icReinitSVar, 0, 41, 38},
    {refalrts::icUpdateIdent, 0, 0, 22},
    {refalrts::icReinitSVar, 0, 17, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 43, 0},
    {refalrts::icLinkBrackets, 20, 42, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 37, 16, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 43, 43, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 42, 42, 0},
    {refalrts::icSpliceTile, 41, 41, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 29, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icTrash, 0, 0, 38},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    //(E )(E )(E )S (#TkVariableS E )E 
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/38 (/36 e.Index#1/39 )/37 (/32 e.ResultVars#1/30 s.Sample#1/41 )/33 )/29 e.Vars_E#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
    {refalrts::icSave, 0, 54, 2},
    {refalrts::icBracketLeftSave, 0, 18, 54},
    {refalrts::icIdentLeftSave, 22, 2, 18},
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    {refalrts::icsVarLeft, 0, 23, 18},
    // closed e.Index#1 as range 18
    {refalrts::icSave, 0, 56, 5},
    {refalrts::icEPrepare, 0, 24, 56},
    {refalrts::icEStart, 0, 24, 56},
    {refalrts::icSave, 0, 58, 56},
    {refalrts::icBracketLeftSave, 0, 26, 58},
    {refalrts::icBracketRightSave, 0, 30, 26},
    {refalrts::icBracketRightSave, 0, 34, 26},
    {refalrts::icsRepeatLeft, 38, 23, 26},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::iceRepeatLeft, 39, 18, 34},
    {refalrts::icEmpty, 0, 0, 34},
    // closed e.Vars_E#1 as range 58(5)
    {refalrts::icsVarRight, 0, 41, 30},
    // closed e.ResultVars#1 as range 30
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/38 AsIs: (/36 AsIs: e.Index#1/39 AsIs: )/37 AsIs: (/32 AsIs: e.ResultVars#1/30 AsIs: s.Sample#1/41 HalfReuse: s.Counter1 #17/33 AsIs: )/29 } )/42 Tile{ AsIs: e.Vars_E#1/58(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #38/16 AsIs: s.Counter#1/17 } s.Sample#1/41/43 )/44 )/45 (/46 Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } s.Counter#1/17/47 )/48 Tile{ AsIs: e.Commands#1/13 } )/49 </50 & IncVarOffset/51 s.Counter#1/17/52 s.Mode#1/38/53 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icCopySTVar, 43, 41, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icCopySTVar, 47, 17, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 50},
    {refalrts::icAllocFunc, 0, 0, 51},
    {refalrts::icCopySTVar, 52, 17, 0},
    {refalrts::icCopySTVar, 53, 38, 0},
    {refalrts::icReinitSVar, 0, 17, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 1, 15},
    {refalrts::icReinitSVar, 0, 38, 16},
    {refalrts::icUpdateIdent, 0, 0, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icLinkBrackets, 46, 49, 0},
    {refalrts::icLinkBrackets, 20, 48, 0},
    {refalrts::icLinkBrackets, 11, 45, 0},
    {refalrts::icLinkBrackets, 12, 44, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 28, 42, 0},
    {refalrts::icLinkBrackets, 32, 29, 0},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icSetRes, 0, 0, 21},
    {refalrts::icSpliceTile, 49, 53, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 47, 48, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 43, 46, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 8, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 58},
    {refalrts::icSpliceTile, 42, 42, 0},
    {refalrts::icTrash, 0, 0, 29},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(E )(E )S 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 s.Counter#1/17 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Counter1 #17/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 } Tile{ AsIs: e.AllocCommands#1/9 } Tile{ AsIs: e.Commands#1/13 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 17, 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[15];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:(E )(E )(E )S E 
  // </0 & DoGenResult/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 s.idxTTT#0/17 e.idxTTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkCharS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkChar/22 s.Value#1/23 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkChar<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElChar/22 AsIs: s.Value#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[20], context[17] );
    refalrts::update_ident( context[22], & ident_ElChar<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkNameE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkName/22 e.Name#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkName<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElName/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElName<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkNumberS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkNumber/22 s.Number#1/23 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } Tile{ HalfReuse: s.Counter1 #17/20 Reuse: # ElNumber/22 AsIs: s.Number#1/23 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/28 Tile{ AsIs: e.Commands#1/13 } )/29 </30 & Inc/31 s.Counter#1/17/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[20], context[17] );
    refalrts::update_ident( context[22], & ident_ElNumber<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkIdentifierE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkIdentifier/22 e.Name#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElIdent/22 } Tile{ AsIs: e.Name#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElIdent<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkStringE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkString/22 e.Chars#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkString<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Chars#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElString/22 } Tile{ AsIs: e.Chars#1/18 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertRange/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Add/30 s.Counter#1/17/31 2/32 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Add, "Add" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[32], 2UL ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElString<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertRange<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#BracketsE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # Brackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenBracket/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # TkCloseBracket/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElOpenBracket<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[33], context[21] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#CallBracketsE )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CallBrackets/22 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/23 Tile{ Reuse: # ElOpenCall/22 } )/24 )/25 (/26 (/27 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 HalfReuse: )/20 } Tile{ AsIs: e.Commands#1/13 } )/28 </29 & Inc/30 s.Counter#1/17/31 >/32 Tile{ AsIs: e.InBrackets#1/18 } (/33 # CloseCall/34 s.Counter#1/17/35 Tile{ AsIs: )/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[23], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_ElOpenCall<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[33], context[21] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[27], context[20] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#ADT_Brackets(E )E )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # ADT_Brackets/22 (/25 e.Name#1/23 )/26 e.InBrackets#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[18], context[19] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Name#1 as range 23
    // closed e.InBrackets#1 as range 18
    // closed e.Result#1 as range 54(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/27 # ElOpenADT/28 )/29 )/30 (/31 (/32 # CmdInsertElem/33 s.Counter#1/17/34 )/35 Tile{ AsIs: e.Commands#1/13 } )/36 </37 Tile{ HalfReuse: & Inc/16 AsIs: s.Counter#1/17 HalfReuse: >/20 HalfReuse: (/22 HalfReuse: # TkName/25 AsIs: e.Name#1/23 AsIs: )/26 AsIs: e.InBrackets#1/18 HalfReuse: (/21 } # TkCloseADT/38 s.Counter#1/17/39 )/40 Tile{ AsIs: e.Result#1/54(2) } Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[27], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_ElOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[38], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_name( context[16], Inc, "Inc" );
    refalrts::reinit_close_call( context[20] );
    refalrts::reinit_open_bracket( context[22] );
    refalrts::reinit_ident( context[25], & ident_TkName<int>::name );
    refalrts::reinit_open_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[40] );
    refalrts::link_brackets( context[22], context[26] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[37] );
    refalrts::link_brackets( context[31], context[36] );
    refalrts::link_brackets( context[32], context[35] );
    refalrts::link_brackets( context[11], context[30] );
    refalrts::link_brackets( context[12], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[27], context[35] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkCloseBracketS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseBracket/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseBracket/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[28], context[33] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[20], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkCloseADTS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkCloseADT/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseADT/25 )/26 )/27 (/28 Tile{ AsIs: (/20 Reuse: # CmdLinkBrackets/22 AsIs: s.OpenCounter#1/23 } s.Counter#1/17/29 )/30 (/31 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/32 Tile{ AsIs: e.Commands#1/13 } )/33 </34 & Inc/35 s.Counter#1/17/36 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::update_ident( context[22], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdInsertElem<int>::name );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[28], context[33] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[20], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#CloseCallS )E 
    // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # CloseCall/22 s.OpenCounter#1/23 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_CloseCall<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Vars#1 as range 5
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdAllocateElem/15 } s.Counter#1/17/24 # ElCloseCall/25 )/26 )/27 (/28 (/29 Tile{ HalfReuse: # CmdPushStack/16 AsIs: s.Counter#1/17 } )/30 Tile{ AsIs: (/20 Reuse: # CmdPushStack/22 AsIs: s.OpenCounter#1/23 AsIs: )/21 } (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 >/39 Tile{ AsIs: e.Result#1/54(2) } Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[24], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_ElCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[16], & ident_CmdPushStack<int>::name );
    refalrts::update_ident( context[22], & ident_CmdPushStack<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[36] );
    refalrts::link_brackets( context[28], context[35] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkVariableS E )E 
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/30 (/33 e.Index#1/39 )/34 (/37 e.ResultVars#1/35 )/38 s.NextPatternVar#1/41 e.PatternVars#1/26 )/29 e.Vars_E#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Index#1 as range 18
    context[56] = context[5];
    context[57] = context[6];
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[58] = context[56];
      context[59] = context[57];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[58], context[59] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_stvar_left( context[30], context[23], context[26], context[27] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[26], context[27] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[18], context[19], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.ResultVars#1 as range 35
      // closed e.Vars_E#1 as range 58(5)
      if( ! refalrts::svar_left( context[41], context[26], context[27] ) )
        continue;
      // closed e.PatternVars#1 as range 26

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Counter#1/17 {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/30 AsIs: (/33 AsIs: e.Index#1/39 AsIs: )/34 AsIs: (/37 AsIs: e.ResultVars#1/35 HalfReuse: s.NextPatternVar1 #41/38 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/26 } Tile{ AsIs: )/29 AsIs: e.Vars_E#1/58(5) AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } Tile{ AsIs: s.NextPatternVar#1/41 } )/42 Tile{ AsIs: e.Commands#1/13 } )/43 Tile{ HalfReuse: s.Counter1 #17/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[38], context[41] );
      refalrts::update_ident( context[22], & ident_CmdInsertVar<int>::name );
      refalrts::reinit_svar( context[21], context[17] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[43] );
      refalrts::link_brackets( context[20], context[42] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[37], context[16] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[21];
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[29], context[15] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[38], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[56], context[57] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(E )(E )(E )S (#TkVariableS E )E 
    // </0 & DoGenResult/4 (/7 e.Vars_B#1/24 (/28 s.Mode#1/38 (/36 e.Index#1/39 )/37 (/32 e.ResultVars#1/30 s.Sample#1/41 )/33 )/29 e.Vars_E#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/20 # TkVariable/22 s.Mode#1/23 e.Index#1/18 )/21 e.Result#1/2 >/1
    context[54] = context[2];
    context[55] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[54], context[55] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Result#1 as range 54(2)
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    // closed e.Index#1 as range 18
    context[56] = context[5];
    context[57] = context[6];
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[58] = context[56];
      context[59] = context[57];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[58], context[59] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[26], context[27] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[26], context[27] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      if( ! refalrts::repeated_stvar_left( context[38], context[23], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[18], context[19], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Vars_E#1 as range 58(5)
      if( ! refalrts::svar_right( context[41], context[30], context[31] ) )
        continue;
      // closed e.ResultVars#1 as range 30

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Index#1/18 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars_B#1/24 AsIs: (/28 AsIs: s.Mode#1/38 AsIs: (/36 AsIs: e.Index#1/39 AsIs: )/37 AsIs: (/32 AsIs: e.ResultVars#1/30 AsIs: s.Sample#1/41 HalfReuse: s.Counter1 #17/33 AsIs: )/29 } )/42 Tile{ AsIs: e.Vars_E#1/58(5) } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #38/16 AsIs: s.Counter#1/17 } s.Sample#1/41/43 )/44 )/45 (/46 Tile{ AsIs: (/20 Reuse: # CmdInsertVar/22 AsIs: s.Mode#1/23 } s.Counter#1/17/47 )/48 Tile{ AsIs: e.Commands#1/13 } )/49 </50 & IncVarOffset/51 s.Counter#1/17/52 s.Mode#1/38/53 Tile{ HalfReuse: >/21 AsIs: e.Result#1/54(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[51], IncVarOffset, "IncVarOffset" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[17]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[38]))
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[33], context[17] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], & ident_CmdCopyVar<int>::name );
      refalrts::reinit_svar( context[16], context[38] );
      refalrts::update_ident( context[22], & ident_CmdInsertVar<int>::name );
      refalrts::reinit_close_call( context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[21] );
      refalrts::push_stack( context[50] );
      refalrts::link_brackets( context[46], context[49] );
      refalrts::link_brackets( context[20], context[48] );
      refalrts::link_brackets( context[11], context[45] );
      refalrts::link_brackets( context[12], context[44] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[28], context[42] );
      refalrts::link_brackets( context[32], context[29] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[21];
      res = refalrts::splice_evar( res, context[49], context[53] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[43], context[46] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[56], context[57] ) );
  } while ( 0 );

  //(E )(E )(E )S 
  // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#1 as range 5
  // closed e.AllocCommands#1 as range 9
  // closed e.Commands#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 {REMOVED TILE}  )/12 (/15 {REMOVED TILE}  )/16 s.Counter#1/17 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Counter1 #17/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 } Tile{ AsIs: e.AllocCommands#1/9 } Tile{ AsIs: e.Commands#1/13 } Tile{ ]] }
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { MakeVariableComment, "MakeVariableComment" },
    { Map, "Map" },
    { Sort, "Sort" },
    { ReplicateVar, "ReplicateVar" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Vars#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Vars#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ReplicateVar/8 )/9 & Sort/10 (/11 & Map/12 & MakeVariableComment/13 )/14 >/15 >/16 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 5, 5},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocFunc, 0, 4, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocFunc, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 16, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Vars#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Vars#1/2 HalfReuse: </1 } & Seq/5 (/6 & Map/7 & ReplicateVar/8 )/9 & Sort/10 (/11 & Map/12 & MakeVariableComment/13 )/14 >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ReplicateVar, "ReplicateVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Sort, "Sort" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], MakeVariableComment, "MakeVariableComment" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ReplicateVar_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ReplicateVar_0/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 s.ContextOffset#2/10 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.Index#1 as range 6
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 s.ContextOffset#2/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.ContextOffset2 #10/4 AsIs: s.Mode#1/5 } Tile{ AsIs: e.Index#1/6 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 10, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icTrash, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_ReplicateVar_0/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 s.ContextOffset#2/10 >/1
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
  // closed e.Index#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 s.ContextOffset#2/10 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.ContextOffset2 #10/4 AsIs: s.Mode#1/5 } Tile{ AsIs: e.Index#1/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ReplicateVar_0, "lambda_ReplicateVar_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ReplicateVar/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 (/16 e.ResultOccurences#1/14 )/17 e.PatternOccurences#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    // closed e.Index#1 as range 10
    // closed e.ResultOccurences#1 as range 14
    // closed e.PatternOccurences#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & Map/8 } Tile{ AsIs: </0 Reuse: & CreateClosure /4 HalfReuse: & lambda_ReplicateVar_0/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 HalfReuse: >/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icReinitFunc, 0, 2, 8},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 0, 16, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & ReplicateVar/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 (/16 e.ResultOccurences#1/14 )/17 e.PatternOccurences#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
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
  // closed e.Index#1 as range 10
  // closed e.ResultOccurences#1 as range 14
  // closed e.PatternOccurences#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & Map/8 } Tile{ AsIs: </0 Reuse: & CreateClosure /4 HalfReuse: & lambda_ReplicateVar_0/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 HalfReuse: >/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[17] );
  refalrts::reinit_name( context[8], Map, "Map" );
  refalrts::update_name( context[4], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::reinit_name( context[7], lambda_ReplicateVar_0, "lambda_ReplicateVar_0" );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintVar, "PrintVar" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Offset<int>::name,
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & MakeVariableComment/4 (/7 s.Offset#1/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    {refalrts::icsVarRight, 0, 11, 5},
    // closed e.Index#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: # Offset/7 AsIs: s.Offset#1/9 }": "/12 </14 & PrintVar/15 Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 0, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & MakeVariableComment/4 (/7 s.Offset#1/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: # Offset/7 AsIs: s.Offset#1/9 }": "/12 </14 & PrintVar/15 Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], ": ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], PrintVar, "PrintVar" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdComment<int>::name );
  refalrts::reinit_ident( context[7], & ident_Offset<int>::name );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
