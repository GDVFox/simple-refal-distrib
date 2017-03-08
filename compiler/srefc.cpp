// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Collision
template <typename SREFAL_PARAM_INT>
struct ident_Collision {
  static const char *name() {
    return "Collision";
  }
};

// identifier #CommandLine
template <typename SREFAL_PARAM_INT>
struct ident_CommandLine {
  static const char *name() {
    return "CommandLine";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #GrammarCheck
template <typename SREFAL_PARAM_INT>
struct ident_GrammarCheck {
  static const char *name() {
    return "GrammarCheck";
  }
};

// identifier #NoCppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_NoCppCompiler {
  static const char *name() {
    return "NoCppCompiler";
  }
};

// identifier #NoErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_NoErrorFile {
  static const char *name() {
    return "NoErrorFile";
  }
};

// identifier #NormalRun
template <typename SREFAL_PARAM_INT>
struct ident_NormalRun {
  static const char *name() {
    return "NormalRun";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Output
template <typename SREFAL_PARAM_INT>
struct ident_Output {
  static const char *name() {
    return "Output";
  }
};

// identifier #Source
template <typename SREFAL_PARAM_INT>
struct ident_Source {
  static const char *name() {
    return "Source";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

extern refalrts::RefalFunction& CompileFile;
extern refalrts::RefalFunction& GrammarCheck;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& ArgList;
extern refalrts::RefalFunction& LoadFile;
extern refalrts::RefalFunction& SaveFile;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Inc;
extern refalrts::RefalFunction& DelAccumulator;
extern refalrts::RefalFunction& MapReduce;
extern refalrts::RefalFunction& WriteLine;
extern refalrts::RefalFunction& System;
extern refalrts::RefalFunction& Exit;
extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& ParseCommandLine;
extern refalrts::RefalFunction& FindFiles;
extern refalrts::RefalFunction& Go;
namespace /* unnamed */ {
extern refalrts::RefalFunction& Main;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Main_SwValidCommandLine;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ReportErrors_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_ReportErrors_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ReportErrors;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& CreateErrorFileMark;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Main_SwFoundFiles_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Main_SwFoundFiles;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Main_SwRenamedTargets_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Main_SwRenamedTargets;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Main_SwCompiledFiles;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_LookupSourceFiles_L1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_LookupSourceFiles_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& LookupSourceFiles;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& RenameTargets;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& GetFileName;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& ScanCollisions;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& RenameLocations;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_RenameLocations_Aux_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& RenameLocations_Aux;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFiles_S1L1S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFiles_S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFiles_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& CompileFiles;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Link_S2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Link;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& GetBaseNameLowerCase;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& DoGetFileName;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Lower_L1S1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_Lower_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& Lower;
} // unnamed namespace


#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Go {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Main,
      & ArgList
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & Go/4 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 1, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Go

} // unnamed namespace

refalrts::RASLFunction descr_Go(
  "Go",
  scope_Go::raa,
  scope_Go::functions,
  scope_Go::idents,
  scope_Go::numbers,
  scope_Go::strings,
  scope_Go::filename
);
refalrts::RefalFunction& Go = descr_Go;

#else
static refalrts::FnResult func_Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & ArgList ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Main );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_Go(func_Go, "Go");
refalrts::RefalFunction& Go = descr_Go;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Main {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & ParseCommandLine,
      & Main_SwValidCommandLine,
      & LoadFile
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CommandLine<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 21, 0, 0},
      //FAST GEN: ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( '@' e.idx )
      // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/11 '@'/13 e.Config#1/9 )/12 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 9, 19},
      {refalrts::icCharLeftSave, 13, static_cast<unsigned char>('@'), 9},
      {refalrts::icEmpty, 0, 0, 19},
      // closed e.ProgName#1 as range 5
      // closed e.Config#1 as range 9
      //DEBUG: e.ProgName#1: 5
      //DEBUG: e.Config#1: 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 AsIs: (/7 } e.Config#1/9/14 )/16 </17 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </11 HalfReuse: & LoadFile/13 AsIs: e.Config#1/9 HalfReuse: >/12 AsIs: >/1 } >/18 Tile{ ]] }
      {refalrts::icCopyEVar, 14, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icReinitFunc, 0, 2, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 7, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 8, 1, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
      // closed e.ProgName#1 as range 5
      // closed e.Arguments#1 as range 2
      //DEBUG: e.ProgName#1: 5
      //DEBUG: e.Arguments#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 8, 1, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Main

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Main(
  "Main",
  scope_Main::raa,
  scope_Main::functions,
  scope_Main::idents,
  scope_Main::numbers,
  scope_Main::strings,
  scope_Main::filename
);
refalrts::RefalFunction& Main = descr_Main;

} // unnamed namespace

#else
static refalrts::FnResult func_Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Main/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( '@' e.idx )
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/11 '@'/13 e.Config#1/9 )/12 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[19], context[20] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::char_left( '@', context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.ProgName#1 as range 5
    // closed e.Config#1 as range 9
    //DEBUG: e.ProgName#1: 5
    //DEBUG: e.Config#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 AsIs: (/7 } e.Config#1/9/14 )/16 </17 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </11 HalfReuse: & LoadFile/13 AsIs: e.Config#1/9 HalfReuse: >/12 AsIs: >/1 } >/18 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Main_SwValidCommandLine );
    refalrts::reinit_name( context[8], & ParseCommandLine );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], & LoadFile );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.ProgName#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.ProgName#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Main_SwValidCommandLine );
  refalrts::reinit_ident( context[7], & ident_CommandLine<int>::name );
  refalrts::reinit_name( context[8], & ParseCommandLine );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Main(func_Main, "Main");
refalrts::RefalFunction& Main = descr_Main;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Main_SwValidCommandLine {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & ReportErrors,
      & LookupSourceFiles,
      & Main_SwFoundFiles
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoErrorFile<int>::name,
      & ident_Fails<int>::name,
      & ident_Success<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 25, 0, 0},
      //FAST GEN: t.$ s.$ e.$
      //GLOBAL GEN: t.$ s.$ e.$
      // </0 & Main-SwValidCommandLine/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 7, 2},
      // closed e.idxVV#0 as range 2
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // t.idx # Success t.idx s.idx s.idx t.idx t.idx s.idx ( e.idx ) e.idx
      // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.CppCompiler#1/8 s.GenMode#1/10 s.Opt#1/11 t.ErrorFile#1/12 t.DebugMode#1/14 s.GrammarCheck#1/16 (/19 e.Folders#1/17 )/20 e.Files#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 7},
      {refalrts::icSave, 0, 23, 2},
      {refalrts::ictVarLeftSave, 0, 8, 23},
      {refalrts::icsVarLeft, 0, 10, 23},
      {refalrts::icsVarLeft, 0, 11, 23},
      {refalrts::ictVarLeftSave, 0, 12, 23},
      {refalrts::ictVarLeftSave, 0, 14, 23},
      {refalrts::icsVarLeft, 0, 16, 23},
      {refalrts::icBracketLeftSave, 0, 17, 23},
      // closed e.Folders#1 as range 17
      // closed e.Files#1 as range 23(2)
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 8
      //DEBUG: s.GenMode#1: 10
      //DEBUG: s.Opt#1: 11
      //DEBUG: t.ErrorFile#1: 12
      //DEBUG: t.DebugMode#1: 14
      //DEBUG: s.GrammarCheck#1: 16
      //DEBUG: e.Folders#1: 17
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.CppCompiler#1/8 AsIs: s.GenMode#1/10 AsIs: s.Opt#1/11 AsIs: t.ErrorFile#1/12 AsIs: t.DebugMode#1/14 AsIs: s.GrammarCheck#1/16 HalfReuse: </19 } Tile{ HalfReuse: & LookupSourceFiles/7 } (/21 Tile{ AsIs: e.Folders#1/17 } Tile{ AsIs: )/20 AsIs: e.Files#1/23(2) AsIs: >/1 } >/22 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icReinitFunc, 0, 1, 7},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icLinkBrackets, 21, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 20, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 21, 21, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 8, 19, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx # Fails e.idx
      // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 7},
      // closed e.Errors#1 as range 2
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: e.Errors#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoErrorFile/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icUpdateIdent, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Main_SwValidCommandLine

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Main_SwValidCommandLine(
  "Main-SwValidCommandLine",
  scope_Main_SwValidCommandLine::raa,
  scope_Main_SwValidCommandLine::functions,
  scope_Main_SwValidCommandLine::idents,
  scope_Main_SwValidCommandLine::numbers,
  scope_Main_SwValidCommandLine::strings,
  scope_Main_SwValidCommandLine::filename
);
refalrts::RefalFunction& Main_SwValidCommandLine = descr_Main_SwValidCommandLine;

} // unnamed namespace

#else
static refalrts::FnResult func_Main_SwValidCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: t.$ s.$ e.$
  //GLOBAL GEN: t.$ s.$ e.$
  // </0 & Main-SwValidCommandLine/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVV#0 as range 2
  do {
    // t.idx # Success t.idx s.idx s.idx t.idx t.idx s.idx ( e.idx ) e.idx
    // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.CppCompiler#1/8 s.GenMode#1/10 s.Opt#1/11 t.ErrorFile#1/12 t.DebugMode#1/14 s.GrammarCheck#1/16 (/19 e.Folders#1/17 )/20 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[7] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[23], context[24] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[23], context[24] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[23], context[24] );
    if( ! context[13] )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[23], context[24] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[23], context[24] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[23], context[24] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Folders#1 as range 17
    // closed e.Files#1 as range 23(2)
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.CppCompiler#1: 8
    //DEBUG: s.GenMode#1: 10
    //DEBUG: s.Opt#1: 11
    //DEBUG: t.ErrorFile#1: 12
    //DEBUG: t.DebugMode#1: 14
    //DEBUG: s.GrammarCheck#1: 16
    //DEBUG: e.Folders#1: 17
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.CppCompiler#1/8 AsIs: s.GenMode#1/10 AsIs: s.Opt#1/11 AsIs: t.ErrorFile#1/12 AsIs: t.DebugMode#1/14 AsIs: s.GrammarCheck#1/16 HalfReuse: </19 } Tile{ HalfReuse: & LookupSourceFiles/7 } (/21 Tile{ AsIs: e.Folders#1/17 } Tile{ AsIs: )/20 AsIs: e.Files#1/23(2) AsIs: >/1 } >/22 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Main_SwFoundFiles );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[7], & LookupSourceFiles );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx # Fails e.idx
  // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoErrorFile/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], & ReportErrors );
  refalrts::update_ident( context[7], & ident_NoErrorFile<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Main_SwValidCommandLine(func_Main_SwValidCommandLine, "Main-SwValidCommandLine");
refalrts::RefalFunction& Main_SwValidCommandLine = descr_Main_SwValidCommandLine;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ReportErrors_S1L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & WriteLine,
      & StrFromInt
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {": Error: ", 9},
      {"nd line argument ", 17},
      {"omm", 3}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      // </0 & ReportErrors$1\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.Message#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Message#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": Error: "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 2, 10},
      {refalrts::icAllocString, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icAllocString, 0, 0, 17},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, 'C', 7},
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 16, 18, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ReportErrors_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ReportErrors_S1L1(
  "ReportErrors$1\\1",
  scope_gen_ReportErrors_S1L1::raa,
  scope_gen_ReportErrors_S1L1::functions,
  scope_gen_ReportErrors_S1L1::idents,
  scope_gen_ReportErrors_S1L1::numbers,
  scope_gen_ReportErrors_S1L1::strings,
  scope_gen_ReportErrors_S1L1::filename
);
refalrts::RefalFunction& gen_ReportErrors_S1L1 = descr_gen_ReportErrors_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ReportErrors_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ReportErrors$1\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  // closed e.Message#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Message#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & StrFromInt/15 Tile{ AsIs: s.Pos#2/9 } >/16": Error: "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "omm", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "nd line argument ", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & StrFromInt ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], ": Error: ", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_char( context[7], 'C' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_ReportErrors_S1L1(func_gen_ReportErrors_S1L1, "ReportErrors$1\\1");
refalrts::RefalFunction& gen_ReportErrors_S1L1 = descr_gen_ReportErrors_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ReportErrors_S2L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & WriteLine
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" Error: ", 8}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & ReportErrors$2\1/4 (/7 e.ConfigFile#1/5 )/8 (/11 s.Pos#2/13 e.Message#2/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.ConfigFile#1 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.Message#2 as range 9
      //DEBUG: e.ConfigFile#1: 5
      //DEBUG: s.Pos#2: 13
      //DEBUG: e.Message#2: 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.ConfigFile#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.Pos#2/13 } >/14 Tile{ HalfReuse: ':'/12 }" Error: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocString, 0, 0, 15},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitChar, 0, ':', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icReinitFunc, 0, 0, 11},
      {refalrts::icReinitChar, 0, ':', 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 8, 13, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ReportErrors_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_ReportErrors_S2L1(
  "ReportErrors$2\\1",
  scope_gen_ReportErrors_S2L1::raa,
  scope_gen_ReportErrors_S2L1::functions,
  scope_gen_ReportErrors_S2L1::idents,
  scope_gen_ReportErrors_S2L1::numbers,
  scope_gen_ReportErrors_S2L1::strings,
  scope_gen_ReportErrors_S2L1::filename
);
refalrts::RefalFunction& gen_ReportErrors_S2L1 = descr_gen_ReportErrors_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ReportErrors_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ReportErrors$2\1/4 (/7 e.ConfigFile#1/5 )/8 (/11 s.Pos#2/13 e.Message#2/9 )/12 >/1
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
  // closed e.ConfigFile#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#2 as range 9
  //DEBUG: e.ConfigFile#1: 5
  //DEBUG: s.Pos#2: 13
  //DEBUG: e.Message#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.ConfigFile#1/5 } Tile{ HalfReuse: ':'/7 } Tile{ HalfReuse: </8 HalfReuse: & StrFromInt/11 AsIs: s.Pos#2/13 } >/14 Tile{ HalfReuse: ':'/12 }" Error: "/15 Tile{ AsIs: e.Message#2/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], " Error: ", 8 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_char( context[7], ':' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], & StrFromInt );
  refalrts::reinit_char( context[12], ':' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_ReportErrors_S2L1(func_gen_ReportErrors_S2L1, "ReportErrors$2\\1");
refalrts::RefalFunction& gen_ReportErrors_S2L1 = descr_gen_ReportErrors_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ReportErrors {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_ReportErrors_S2L1,
      & refalrts::create_closure,
      & Exit,
      & CreateErrorFileMark,
      & Map,
      & gen_ReportErrors_S1L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CommandLine<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: t.$ t.$ e.$
      //GLOBAL GEN: t.$ t.$ e.$
      // </0 & ReportErrors/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      // closed e.idxVV#0 as range 2
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // # CommandLine t.idx e.idx
      // </0 & ReportErrors/4 # CommandLine/5 t.ErrorFile#1/7 e.Errors#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.Errors#1 as range 2
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: e.Errors#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & ReportErrors$1\1/5 } Tile{ AsIs: e.Errors#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.ErrorFile#1/7 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 3, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 2, 14},
      {refalrts::icAllocInt, 0, 1, 15},
      {refalrts::icUpdateFunc, 0, 4, 4},
      {refalrts::icReinitFunc, 0, 5, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) t.idx e.idx
      // </0 & ReportErrors/4 (/5 e.ConfigFile#1/9 )/6 t.ErrorFile#1/7 e.Errors#1/2 >/1
      {refalrts::icBracketTerm, 0, 9, 5},
      // closed e.ConfigFile#1 as range 9
      // closed e.Errors#1 as range 2
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: e.ConfigFile#1: 9
      //DEBUG: e.Errors#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </11 & Map/12 </13 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ReportErrors$2\1/4 AsIs: (/5 AsIs: e.ConfigFile#1/9 AsIs: )/6 } >/14 Tile{ AsIs: e.Errors#1/2 } >/15 </16 & CreateErrorFileMark/17 Tile{ AsIs: t.ErrorFile#1/7 } >/18 </19 & Exit/20 1/21 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 4, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 3, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 2, 20},
      {refalrts::icAllocInt, 0, 1, 21},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 18, 21, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ReportErrors

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ReportErrors(
  "ReportErrors",
  scope_ReportErrors::raa,
  scope_ReportErrors::functions,
  scope_ReportErrors::idents,
  scope_ReportErrors::numbers,
  scope_ReportErrors::strings,
  scope_ReportErrors::filename
);
refalrts::RefalFunction& ReportErrors = descr_ReportErrors;

} // unnamed namespace

#else
static refalrts::FnResult func_ReportErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: t.$ t.$ e.$
  //GLOBAL GEN: t.$ t.$ e.$
  // </0 & ReportErrors/4 t.idx#0/5 t.idxV#0/7 e.idxVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVV#0 as range 2
  do {
    // # CommandLine t.idx e.idx
    // </0 & ReportErrors/4 # CommandLine/5 t.ErrorFile#1/7 e.Errors#1/2 >/1
    if( ! refalrts::ident_term(  & ident_CommandLine<int>::name, context[5] ) )
      continue;
    // closed e.Errors#1 as range 2
    //DEBUG: t.ErrorFile#1: 7
    //DEBUG: e.Errors#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & ReportErrors$1\1/5 } Tile{ AsIs: e.Errors#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.ErrorFile#1/7 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & CreateErrorFileMark ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Exit ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Map );
    refalrts::reinit_name( context[5], & gen_ReportErrors_S1L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx e.idx
  // </0 & ReportErrors/4 (/5 e.ConfigFile#1/9 )/6 t.ErrorFile#1/7 e.Errors#1/2 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConfigFile#1 as range 9
  // closed e.Errors#1 as range 2
  //DEBUG: t.ErrorFile#1: 7
  //DEBUG: e.ConfigFile#1: 9
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Map/12 </13 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ReportErrors$2\1/4 AsIs: (/5 AsIs: e.ConfigFile#1/9 AsIs: )/6 } >/14 Tile{ AsIs: e.Errors#1/2 } >/15 </16 & CreateErrorFileMark/17 Tile{ AsIs: t.ErrorFile#1/7 } >/18 </19 & Exit/20 1/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & CreateErrorFileMark ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & Exit ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 1UL ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_ReportErrors_S2L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_ReportErrors(func_ReportErrors, "ReportErrors");
refalrts::RefalFunction& ReportErrors = descr_ReportErrors;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CreateErrorFileMark {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & SaveFile
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ErrorFile<int>::name,
      & ident_NoErrorFile<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & CreateErrorFileMark/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # NoErrorFile
      // </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( # ErrorFile e.idx )
      // </0 & CreateErrorFileMark/4 (/5 # ErrorFile/9 e.FileName#1/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 0, 7},
      // closed e.FileName#1 as range 7
      //DEBUG: e.FileName#1: 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SaveFile/5 HalfReuse: (/9 AsIs: e.FileName#1/7 AsIs: )/6 AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icLinkBrackets, 9, 6, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CreateErrorFileMark

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_CreateErrorFileMark(
  "CreateErrorFileMark",
  scope_CreateErrorFileMark::raa,
  scope_CreateErrorFileMark::functions,
  scope_CreateErrorFileMark::idents,
  scope_CreateErrorFileMark::numbers,
  scope_CreateErrorFileMark::strings,
  scope_CreateErrorFileMark::filename
);
refalrts::RefalFunction& CreateErrorFileMark = descr_CreateErrorFileMark;

} // unnamed namespace

#else
static refalrts::FnResult func_CreateErrorFileMark(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & CreateErrorFileMark/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # NoErrorFile
    // </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1
    if( ! refalrts::ident_term(  & ident_NoErrorFile<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CreateErrorFileMark/4 # NoErrorFile/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # ErrorFile e.idx )
  // </0 & CreateErrorFileMark/4 (/5 # ErrorFile/9 e.FileName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::ident_left(  & ident_ErrorFile<int>::name, context[7], context[8] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  //DEBUG: e.FileName#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SaveFile/5 HalfReuse: (/9 AsIs: e.FileName#1/7 AsIs: )/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[5], & SaveFile );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[9], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_CreateErrorFileMark(func_CreateErrorFileMark, "CreateErrorFileMark");
refalrts::RefalFunction& CreateErrorFileMark = descr_CreateErrorFileMark;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Main_SwFoundFiles_S1L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Output<int>::name,
      & ident_Source<int>::name,
      & ident_NotFound<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {" is not foun", 12}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: ( s.$ s.$ e.$ )
      //GLOBAL GEN: ( s.$ s.$ e.$ )
      // </0 & Main-SwFoundFiles$1\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.idxBVV#0 as range 5
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( s.idx # NotFound e.idx )
      // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 2, 10},
      // closed e.FileName#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.FileName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/11 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/12 Tile{ AsIs: e.FileName#2/5 }" is not foun"/13 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocChar, 0, 'i', 11},
      {refalrts::icAllocChar, 0, ' ', 12},
      {refalrts::icAllocString, 0, 0, 13},
      {refalrts::icReinitChar, 0, 'f', 10},
      {refalrts::icReinitChar, 0, 'l', 0},
      {refalrts::icReinitChar, 0, 'e', 4},
      {refalrts::icReinitChar, 0, 'd', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( s.idx # Source ( e.idx ) e.idx )
      // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 10},
      {refalrts::icSave, 0, 15, 5},
      {refalrts::icBracketLeftSave, 0, 11, 15},
      // closed e.Source#2 as range 11
      // closed e.Output#2 as range 15(5)
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Source#2: 11
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/15(5) )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( s.idx # Output e.idx )
      // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      // closed e.Output#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Main_SwFoundFiles_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Main_SwFoundFiles_S1L1(
  "Main-SwFoundFiles$1\\1",
  scope_gen_Main_SwFoundFiles_S1L1::raa,
  scope_gen_Main_SwFoundFiles_S1L1::functions,
  scope_gen_Main_SwFoundFiles_S1L1::idents,
  scope_gen_Main_SwFoundFiles_S1L1::numbers,
  scope_gen_Main_SwFoundFiles_S1L1::strings,
  scope_gen_Main_SwFoundFiles_S1L1::filename
);
refalrts::RefalFunction& gen_Main_SwFoundFiles_S1L1 = descr_gen_Main_SwFoundFiles_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Main_SwFoundFiles_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & Main-SwFoundFiles$1\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # NotFound e.idx )
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NotFound<int>::name, context[10] ) )
      continue;
    // closed e.FileName#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FileName#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/11 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/12 Tile{ AsIs: e.FileName#2/5 }" is not foun"/13 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " is not foun", 12 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # Source ( e.idx ) e.idx )
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
      continue;
    context[15] = context[5];
    context[16] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[15], context[16] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 15(5)
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Source#2: 11
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/15(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # Output e.idx )
  // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Main_SwFoundFiles_S1L1(func_gen_Main_SwFoundFiles_S1L1, "Main-SwFoundFiles$1\\1");
refalrts::RefalFunction& gen_Main_SwFoundFiles_S1L1 = descr_gen_Main_SwFoundFiles_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Main_SwFoundFiles {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Main_SwRenamedTargets,
      & RenameTargets,
      & ReportErrors,
      & gen_Main_SwFoundFiles_S1L1,
      & Map
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NotFound<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
      //GLOBAL GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
      // </0 & Main-SwFoundFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 t.idxVVVVV#0/13 s.idxVVVVVV#0/15 e.idxVVVVVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::ictVarLeftSave, 0, 11, 2},
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icsVarLeft, 0, 15, 2},
      // closed e.idxVVVVVVV#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
      // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 (/20 s.Pos#1/22 # NotFound/23 e.FileName#1/18 )/21 e.Files-E#1/2 >/1
      {refalrts::icSave, 0, 28, 2},
      {refalrts::icEPrepare, 0, 16, 28},
      {refalrts::icEStart, 0, 16, 28},
      {refalrts::icSave, 0, 30, 28},
      {refalrts::icBracketLeftSave, 0, 18, 30},
      // closed e.Files-E#1 as range 30(2)
      {refalrts::icsVarLeft, 0, 22, 18},
      {refalrts::icIdentLeftSave, 23, 0, 18},
      // closed e.FileName#1 as range 18
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files-B#1: 16
      //DEBUG: e.Files-E#1: 2
      //DEBUG: s.Pos#1: 22
      //DEBUG: e.FileName#1: 18
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE} t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </24 & Map/25 & Main-SwFoundFiles$1\1/26 Tile{ AsIs: (/20 AsIs: s.Pos#1/22 AsIs: # NotFound/23 AsIs: e.FileName#1/18 AsIs: )/21 AsIs: e.Files-E#1/30(2) AsIs: >/1 } >/27 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 4, 25},
      {refalrts::icAllocFunc, 0, 3, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icLinkBrackets, 20, 21, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icSpliceTile, 20, 1, 0},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
      // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files#1/2 >/1
      // closed e.Files#1 as range 2
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.CppCompiler#1/7 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.ErrorFile#1/11 AsIs: t.DebugMode#1/13 AsIs: s.GrammarCheck#1/15 } </16 & RenameTargets/17 t.CppCompiler#1/7/18 Tile{ AsIs: e.Files#1/2 } >/20 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 1, 17},
      {refalrts::icCopyEVar, 18, 7, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 16, 19, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Main_SwFoundFiles

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Main_SwFoundFiles(
  "Main-SwFoundFiles",
  scope_Main_SwFoundFiles::raa,
  scope_Main_SwFoundFiles::functions,
  scope_Main_SwFoundFiles::idents,
  scope_Main_SwFoundFiles::numbers,
  scope_Main_SwFoundFiles::strings,
  scope_Main_SwFoundFiles::filename
);
refalrts::RefalFunction& Main_SwFoundFiles = descr_Main_SwFoundFiles;

} // unnamed namespace

#else
static refalrts::FnResult func_Main_SwFoundFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
  //GLOBAL GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
  // </0 & Main-SwFoundFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 t.idxVVVVV#0/13 s.idxVVVVVV#0/15 e.idxVVVVVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVVVVV#0 as range 2
  do {
    // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
    // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 (/20 s.Pos#1/22 # NotFound/23 e.FileName#1/18 )/21 e.Files-E#1/2 >/1
    context[28] = context[2];
    context[29] = context[3];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[30] = context[28];
      context[31] = context[29];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[30], context[31] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Files-E#1 as range 30(2)
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      context[23] = refalrts::ident_left(  & ident_NotFound<int>::name, context[18], context[19] );
      if( ! context[23] )
        continue;
      // closed e.FileName#1 as range 18
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files-B#1: 16
      //DEBUG: e.Files-E#1: 2
      //DEBUG: s.Pos#1: 22
      //DEBUG: e.FileName#1: 18

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE} t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </24 & Map/25 & Main-SwFoundFiles$1\1/26 Tile{ AsIs: (/20 AsIs: s.Pos#1/22 AsIs: # NotFound/23 AsIs: e.FileName#1/18 AsIs: )/21 AsIs: e.Files-E#1/30(2) AsIs: >/1 } >/27 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], & Map ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[26], & gen_Main_SwFoundFiles_S1L1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & ReportErrors );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[24] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[28], context[29] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
  // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.CppCompiler#1: 7
  //DEBUG: t.ErrorFile#1: 11
  //DEBUG: t.DebugMode#1: 13
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Opt#1: 10
  //DEBUG: s.GrammarCheck#1: 15
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.CppCompiler#1/7 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.ErrorFile#1/11 AsIs: t.DebugMode#1/13 AsIs: s.GrammarCheck#1/15 } </16 & RenameTargets/17 t.CppCompiler#1/7/18 Tile{ AsIs: e.Files#1/2 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & RenameTargets ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Main_SwRenamedTargets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Main_SwFoundFiles(func_Main_SwFoundFiles, "Main-SwFoundFiles");
refalrts::RefalFunction& Main_SwFoundFiles = descr_Main_SwFoundFiles;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Main_SwRenamedTargets_S1L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Output<int>::name,
      & ident_Source<int>::name,
      & ident_Collision<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"ave same name", 13},
      {" and", 4},
      {"le", 2}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: ( s.$ s.$ e.$ )
      //GLOBAL GEN: ( s.$ s.$ e.$ )
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.idxBVV#0 as range 5
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // ( s.idx # Collision ( e.idx ) e.idx )
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Collision/10 (/13 e.FirstTarget#2/11 )/14 e.SecondTarget#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 2, 10},
      {refalrts::icSave, 0, 22, 5},
      {refalrts::icBracketLeftSave, 0, 11, 22},
      // closed e.FirstTarget#2 as range 11
      // closed e.SecondTarget#2 as range 22(5)
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.FirstTarget#2: 11
      //DEBUG: e.SecondTarget#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/13 }"le"/15 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/11 }" and"/17 Tile{ HalfReuse: ' '/14 AsIs: e.SecondTarget#2/22(5) HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/19 )/21 Tile{ ]] }
      {refalrts::icAllocString, 0, 2, 15},
      {refalrts::icAllocString, 0, 1, 17},
      {refalrts::icAllocString, 0, 0, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icReinitChar, 0, 'f', 10},
      {refalrts::icReinitChar, 0, 'i', 13},
      {refalrts::icReinitChar, 0, 's', 0},
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitChar, 0, ' ', 14},
      {refalrts::icReinitChar, 0, ' ', 8},
      {refalrts::icReinitChar, 0, 'h', 1},
      {refalrts::icLinkBrackets, 7, 21, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 19, 21, 0},
      {refalrts::icSpliceTile, 14, 1, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 7, 13, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( s.idx # Source ( e.idx ) e.idx )
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 10},
      {refalrts::icSave, 0, 22, 5},
      {refalrts::icBracketLeftSave, 0, 11, 22},
      // closed e.Source#2 as range 11
      // closed e.Output#2 as range 22(5)
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Source#2: 11
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/22(5) )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( s.idx # Output e.idx )
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      // closed e.Output#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Main_SwRenamedTargets_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Main_SwRenamedTargets_S1L1(
  "Main-SwRenamedTargets$1\\1",
  scope_gen_Main_SwRenamedTargets_S1L1::raa,
  scope_gen_Main_SwRenamedTargets_S1L1::functions,
  scope_gen_Main_SwRenamedTargets_S1L1::idents,
  scope_gen_Main_SwRenamedTargets_S1L1::numbers,
  scope_gen_Main_SwRenamedTargets_S1L1::strings,
  scope_gen_Main_SwRenamedTargets_S1L1::filename
);
refalrts::RefalFunction& gen_Main_SwRenamedTargets_S1L1 = descr_gen_Main_SwRenamedTargets_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Main_SwRenamedTargets_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # Collision ( e.idx ) e.idx )
    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Collision/10 (/13 e.FirstTarget#2/11 )/14 e.SecondTarget#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Collision<int>::name, context[10] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[22], context[23] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.FirstTarget#2 as range 11
    // closed e.SecondTarget#2 as range 22(5)
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FirstTarget#2: 11
    //DEBUG: e.SecondTarget#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/13 }"le"/15 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/11 }" and"/17 Tile{ HalfReuse: ' '/14 AsIs: e.SecondTarget#2/22(5) HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/19 )/21 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[15], context[16], "le", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], " and", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "ave same name", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[10], 'f' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[14], ' ' );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[1], 'h' );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx # Source ( e.idx ) e.idx )
    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[22], context[23] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Source#2 as range 11
    // closed e.Output#2 as range 22(5)
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Source#2: 11
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.Output#2/22(5) )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # Output e.idx )
  // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Main_SwRenamedTargets_S1L1(func_gen_Main_SwRenamedTargets_S1L1, "Main-SwRenamedTargets$1\\1");
refalrts::RefalFunction& gen_Main_SwRenamedTargets_S1L1 = descr_gen_Main_SwRenamedTargets_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Main_SwRenamedTargets {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Main_SwCompiledFiles,
      & CompileFiles,
      & ReportErrors,
      & gen_Main_SwRenamedTargets_S1L1,
      & Map
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Collision<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 32, 0, 0},
      //FAST GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
      //GLOBAL GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
      // </0 & Main-SwRenamedTargets/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 t.idxVVVVV#0/13 s.idxVVVVVV#0/15 e.idxVVVVVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::ictVarLeftSave, 0, 11, 2},
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icsVarLeft, 0, 15, 2},
      // closed e.idxVVVVVVV#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
      // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 (/20 s.Pos#1/22 # Collision/23 e.Collision#1/18 )/21 e.Files-E#1/2 >/1
      {refalrts::icSave, 0, 28, 2},
      {refalrts::icEPrepare, 0, 16, 28},
      {refalrts::icEStart, 0, 16, 28},
      {refalrts::icSave, 0, 30, 28},
      {refalrts::icBracketLeftSave, 0, 18, 30},
      // closed e.Files-E#1 as range 30(2)
      {refalrts::icsVarLeft, 0, 22, 18},
      {refalrts::icIdentLeftSave, 23, 0, 18},
      // closed e.Collision#1 as range 18
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files-B#1: 16
      //DEBUG: e.Files-E#1: 2
      //DEBUG: s.Pos#1: 22
      //DEBUG: e.Collision#1: 18
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE} t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </24 & Map/25 & Main-SwRenamedTargets$1\1/26 Tile{ AsIs: (/20 AsIs: s.Pos#1/22 AsIs: # Collision/23 AsIs: e.Collision#1/18 AsIs: )/21 AsIs: e.Files-E#1/30(2) AsIs: >/1 } >/27 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 4, 25},
      {refalrts::icAllocFunc, 0, 3, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icLinkBrackets, 20, 21, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icSpliceTile, 20, 1, 0},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
      // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files#1/2 >/1
      // closed e.Files#1 as range 2
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwCompiledFiles/4 } Tile{ AsIs: t.CppCompiler#1/7 } Tile{ AsIs: t.ErrorFile#1/11 } s.GrammarCheck#1/15/16 </17 & CompileFiles/18 Tile{ AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 } Tile{ AsIs: t.DebugMode#1/13 AsIs: s.GrammarCheck#1/15 AsIs: e.Files#1/2 AsIs: >/1 } >/19 Tile{ ]] }
      {refalrts::icCopySTVar, 16, 15, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 1, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceTile, 13, 1, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceTile, 16, 18, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Main_SwRenamedTargets

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Main_SwRenamedTargets(
  "Main-SwRenamedTargets",
  scope_Main_SwRenamedTargets::raa,
  scope_Main_SwRenamedTargets::functions,
  scope_Main_SwRenamedTargets::idents,
  scope_Main_SwRenamedTargets::numbers,
  scope_Main_SwRenamedTargets::strings,
  scope_Main_SwRenamedTargets::filename
);
refalrts::RefalFunction& Main_SwRenamedTargets = descr_Main_SwRenamedTargets;

} // unnamed namespace

#else
static refalrts::FnResult func_Main_SwRenamedTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
  //GLOBAL GEN: t.$ t.$ s.$ s.$ t.$ t.$ s.$ e.$
  // </0 & Main-SwRenamedTargets/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 s.idxVVV#0/10 t.idxVVVV#0/11 t.idxVVVVV#0/13 s.idxVVVVVV#0/15 e.idxVVVVVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVVVVV#0 as range 2
  do {
    // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
    // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 (/20 s.Pos#1/22 # Collision/23 e.Collision#1/18 )/21 e.Files-E#1/2 >/1
    context[28] = context[2];
    context[29] = context[3];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[30] = context[28];
      context[31] = context[29];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[30], context[31] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Files-E#1 as range 30(2)
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      context[23] = refalrts::ident_left(  & ident_Collision<int>::name, context[18], context[19] );
      if( ! context[23] )
        continue;
      // closed e.Collision#1 as range 18
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.CppCompiler#1: 7
      //DEBUG: t.ErrorFile#1: 11
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GrammarCheck#1: 15
      //DEBUG: e.Files-B#1: 16
      //DEBUG: e.Files-E#1: 2
      //DEBUG: s.Pos#1: 22
      //DEBUG: e.Collision#1: 18

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 {REMOVED TILE} t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files-B#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.ErrorFile#1/11 } </24 & Map/25 & Main-SwRenamedTargets$1\1/26 Tile{ AsIs: (/20 AsIs: s.Pos#1/22 AsIs: # Collision/23 AsIs: e.Collision#1/18 AsIs: )/21 AsIs: e.Files-E#1/30(2) AsIs: >/1 } >/27 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], & Map ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[26], & gen_Main_SwRenamedTargets_S1L1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & ReportErrors );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[24] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[28], context[29] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx s.idx t.idx t.idx s.idx e.idx
  // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.CppCompiler#1/7 s.GenMode#1/9 s.Opt#1/10 t.ErrorFile#1/11 t.DebugMode#1/13 s.GrammarCheck#1/15 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.CppCompiler#1: 7
  //DEBUG: t.ErrorFile#1: 11
  //DEBUG: t.DebugMode#1: 13
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Opt#1: 10
  //DEBUG: s.GrammarCheck#1: 15
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwCompiledFiles/4 } Tile{ AsIs: t.CppCompiler#1/7 } Tile{ AsIs: t.ErrorFile#1/11 } s.GrammarCheck#1/15/16 </17 & CompileFiles/18 Tile{ AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 } Tile{ AsIs: t.DebugMode#1/13 AsIs: s.GrammarCheck#1/15 AsIs: e.Files#1/2 AsIs: >/1 } >/19 Tile{ ]] }
  if (! refalrts::copy_stvar(context[16], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & CompileFiles ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Main_SwCompiledFiles );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Main_SwRenamedTargets(func_Main_SwRenamedTargets, "Main-SwRenamedTargets");
refalrts::RefalFunction& Main_SwRenamedTargets = descr_Main_SwRenamedTargets;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Main_SwCompiledFiles {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & WriteLine,
      & Link,
      & CreateErrorFileMark,
      & Exit
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GrammarCheck<int>::name,
      & ident_NormalRun<int>::name,
      & ident_Fails<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"* No syntax errors found **", 27},
      {"** Compilation successed **", 27}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: t.$ t.$ s.$ e.$
      //GLOBAL GEN: t.$ t.$ s.$ e.$
      // </0 & Main-SwCompiledFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxVVV#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // t.idx t.idx s.idx e.idx
      // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 s.GrammarCheck#1/9 e.Outputs-B#1/10 # Fails/12 e.OutputsErrors-E#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icEPrepare, 0, 10, 16},
      {refalrts::icEStart, 0, 10, 16},
      {refalrts::icSave, 0, 18, 16},
      {refalrts::icIdentLeftSave, 12, 2, 18},
      // closed e.OutputsErrors-E#1 as range 18(2)
      //DEBUG: t.CppCompiler#1: 5
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: s.GrammarCheck#1: 9
      //DEBUG: e.Outputs-B#1: 10
      //DEBUG: e.OutputsErrors-E#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.CppCompiler#1/5 {REMOVED TILE} s.GrammarCheck#1/9 e.Outputs-B#1/10 {REMOVED TILE} e.OutputsErrors-E#1/18(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 } Tile{ AsIs: t.ErrorFile#1/7 } >/13 Tile{ HalfReuse: </12 } & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icAllocFunc, 0, 3, 14},
      {refalrts::icAllocInt, 0, 1, 15},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // t.idx t.idx # NormalRun e.idx
      // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 # NormalRun/9 e.Targets#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.Targets#1 as range 2
      //DEBUG: t.CppCompiler#1: 5
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: e.Targets#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.ErrorFile#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 AsIs: t.CppCompiler#1/5 } Tile{ AsIs: e.Targets#1/2 } Tile{ HalfReuse: >/9 } </10 & WriteLine/11"** Compilation successed **"/12 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 0, 11},
      {refalrts::icAllocString, 0, 1, 12},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 13, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // t.idx t.idx # GrammarCheck e.idx
      // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 # GrammarCheck/9 e.Targets#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.Targets#1 as range 2
      //DEBUG: t.CppCompiler#1: 5
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: e.Targets#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.CppCompiler#1/5 t.ErrorFile#1/7 {REMOVED TILE} e.Targets#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ HalfReuse: '*'/9 }"* No syntax errors found **"/10 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '*', 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Main_SwCompiledFiles

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Main_SwCompiledFiles(
  "Main-SwCompiledFiles",
  scope_Main_SwCompiledFiles::raa,
  scope_Main_SwCompiledFiles::functions,
  scope_Main_SwCompiledFiles::idents,
  scope_Main_SwCompiledFiles::numbers,
  scope_Main_SwCompiledFiles::strings,
  scope_Main_SwCompiledFiles::filename
);
refalrts::RefalFunction& Main_SwCompiledFiles = descr_Main_SwCompiledFiles;

} // unnamed namespace

#else
static refalrts::FnResult func_Main_SwCompiledFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: t.$ t.$ s.$ e.$
  //GLOBAL GEN: t.$ t.$ s.$ e.$
  // </0 & Main-SwCompiledFiles/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx t.idx s.idx e.idx
    // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 s.GrammarCheck#1/9 e.Outputs-B#1/10 # Fails/12 e.OutputsErrors-E#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[16];
      context[19] = context[17];
      context[12] = refalrts::ident_left(  & ident_Fails<int>::name, context[18], context[19] );
      if( ! context[12] )
        continue;
      // closed e.OutputsErrors-E#1 as range 18(2)
      //DEBUG: t.CppCompiler#1: 5
      //DEBUG: t.ErrorFile#1: 7
      //DEBUG: s.GrammarCheck#1: 9
      //DEBUG: e.Outputs-B#1: 10
      //DEBUG: e.OutputsErrors-E#1: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} t.CppCompiler#1/5 {REMOVED TILE} s.GrammarCheck#1/9 e.Outputs-B#1/10 {REMOVED TILE} e.OutputsErrors-E#1/18(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 } Tile{ AsIs: t.ErrorFile#1/7 } >/13 Tile{ HalfReuse: </12 } & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_call( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[14], & Exit ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[15], 1UL ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & CreateErrorFileMark );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[12] );
      refalrts::push_stack( context[13] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[10], context[11], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx t.idx # NormalRun e.idx
    // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 # NormalRun/9 e.Targets#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NormalRun<int>::name, context[9] ) )
      continue;
    // closed e.Targets#1 as range 2
    //DEBUG: t.CppCompiler#1: 5
    //DEBUG: t.ErrorFile#1: 7
    //DEBUG: e.Targets#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.ErrorFile#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 AsIs: t.CppCompiler#1/5 } Tile{ AsIs: e.Targets#1/2 } Tile{ HalfReuse: >/9 } </10 & WriteLine/11"** Compilation successed **"/12 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & WriteLine ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "** Compilation successed **", 27 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Link );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx # GrammarCheck e.idx
  // </0 & Main-SwCompiledFiles/4 t.CppCompiler#1/5 t.ErrorFile#1/7 # GrammarCheck/9 e.Targets#1/2 >/1
  if( ! refalrts::ident_term(  & ident_GrammarCheck<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Targets#1 as range 2
  //DEBUG: t.CppCompiler#1: 5
  //DEBUG: t.ErrorFile#1: 7
  //DEBUG: e.Targets#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} t.CppCompiler#1/5 t.ErrorFile#1/7 {REMOVED TILE} e.Targets#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ HalfReuse: '*'/9 }"* No syntax errors found **"/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "* No syntax errors found **", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_char( context[9], '*' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Main_SwCompiledFiles(func_Main_SwCompiledFiles, "Main-SwCompiledFiles");
refalrts::RefalFunction& Main_SwCompiledFiles = descr_Main_SwCompiledFiles;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_LookupSourceFiles_L1L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & LookupSourceFiles\1\1/4 s.Pos#2/9 (/7 s.ResultTag#3/10 e.Info#3/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.Info#3 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: s.ResultTag#3: 10
      //DEBUG: e.Info#3: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & LookupSourceFiles\1\1/4 s.Pos#2/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/7 AsIs: s.ResultTag#3/10 AsIs: e.Info#3/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitSVar, 0, 9, 7},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_LookupSourceFiles_L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_LookupSourceFiles_L1L1(
  "LookupSourceFiles\\1\\1",
  scope_gen_LookupSourceFiles_L1L1::raa,
  scope_gen_LookupSourceFiles_L1L1::functions,
  scope_gen_LookupSourceFiles_L1L1::idents,
  scope_gen_LookupSourceFiles_L1L1::numbers,
  scope_gen_LookupSourceFiles_L1L1::strings,
  scope_gen_LookupSourceFiles_L1L1::filename
);
refalrts::RefalFunction& gen_LookupSourceFiles_L1L1 = descr_gen_LookupSourceFiles_L1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_LookupSourceFiles_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & LookupSourceFiles\1\1/4 s.Pos#2/9 (/7 s.ResultTag#3/10 e.Info#3/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#3 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: s.ResultTag#3: 10
  //DEBUG: e.Info#3: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & LookupSourceFiles\1\1/4 s.Pos#2/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/7 AsIs: s.ResultTag#3/10 AsIs: e.Info#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_LookupSourceFiles_L1L1(func_gen_LookupSourceFiles_L1L1, "LookupSourceFiles\\1\\1");
refalrts::RefalFunction& gen_LookupSourceFiles_L1L1 = descr_gen_LookupSourceFiles_L1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_LookupSourceFiles_L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & FindFiles,
      & gen_LookupSourceFiles_L1L1,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 21, 0, 0},
      // </0 & LookupSourceFiles\1/4 (/7 e.Folders#1/5 )/8 (/11 s.Pos#2/13 e.FileName#2/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Folders#1 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.FileName#2 as range 9
      //DEBUG: e.Folders#1: 5
      //DEBUG: s.Pos#2: 13
      //DEBUG: e.FileName#2: 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FileName#2/9 } )/16 >/17 </18 & @create_closure@/19 & LookupSourceFiles\1\1/20 Tile{ AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocFunc, 0, 3, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
      {refalrts::icAllocFunc, 0, 2, 19},
      {refalrts::icAllocFunc, 0, 1, 20},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 16, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 16, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_LookupSourceFiles_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_LookupSourceFiles_L1(
  "LookupSourceFiles\\1",
  scope_gen_LookupSourceFiles_L1::raa,
  scope_gen_LookupSourceFiles_L1::functions,
  scope_gen_LookupSourceFiles_L1::idents,
  scope_gen_LookupSourceFiles_L1::numbers,
  scope_gen_LookupSourceFiles_L1::strings,
  scope_gen_LookupSourceFiles_L1::filename
);
refalrts::RefalFunction& gen_LookupSourceFiles_L1 = descr_gen_LookupSourceFiles_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_LookupSourceFiles_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & LookupSourceFiles\1/4 (/7 e.Folders#1/5 )/8 (/11 s.Pos#2/13 e.FileName#2/9 )/12 >/1
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
  // closed e.Folders#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#2 as range 9
  //DEBUG: e.Folders#1: 5
  //DEBUG: s.Pos#2: 13
  //DEBUG: e.FileName#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FileName#2/9 } )/16 >/17 </18 & @create_closure@/19 & LookupSourceFiles\1\1/20 Tile{ AsIs: s.Pos#2/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & gen_LookupSourceFiles_L1L1 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FindFiles );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_LookupSourceFiles_L1(func_gen_LookupSourceFiles_L1, "LookupSourceFiles\\1");
refalrts::RefalFunction& gen_LookupSourceFiles_L1 = descr_gen_LookupSourceFiles_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_LookupSourceFiles {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_LookupSourceFiles_L1,
      & refalrts::create_closure,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & LookupSourceFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Folders#1 as range 5
      // closed e.Files#1 as range 2
      //DEBUG: e.Folders#1: 5
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & @create_closure@/0 Reuse: & LookupSourceFiles\1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 2, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_LookupSourceFiles

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_LookupSourceFiles(
  "LookupSourceFiles",
  scope_LookupSourceFiles::raa,
  scope_LookupSourceFiles::functions,
  scope_LookupSourceFiles::idents,
  scope_LookupSourceFiles::numbers,
  scope_LookupSourceFiles::strings,
  scope_LookupSourceFiles::filename
);
refalrts::RefalFunction& LookupSourceFiles = descr_LookupSourceFiles;

} // unnamed namespace

#else
static refalrts::FnResult func_LookupSourceFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & LookupSourceFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Files#1 as range 2
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & @create_closure@/0 Reuse: & LookupSourceFiles\1/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_LookupSourceFiles_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_LookupSourceFiles(func_LookupSourceFiles, "LookupSourceFiles");
refalrts::RefalFunction& LookupSourceFiles = descr_LookupSourceFiles;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RenameTargets {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & GetFileName,
      & ScanCollisions,
      & Map
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoCppCompiler<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & RenameTargets/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // # NoCppCompiler e.idx
      // </0 & RenameTargets/4 # NoCppCompiler/5 e.Files#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.Files#1 as range 2
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RenameTargets/4 # NoCppCompiler/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & RenameTargets/4 (/5 e.CppCompiler#1/7 )/6 e.Files#1/2 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.CppCompiler#1 as range 7
      // closed e.Files#1 as range 2
      //DEBUG: e.CppCompiler#1: 7
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.CppCompiler#1/7 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 HalfReuse: </5 } & Map/9 Tile{ HalfReuse: & GetFileName/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 2, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 6, 1, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RenameTargets

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_RenameTargets(
  "RenameTargets",
  scope_RenameTargets::raa,
  scope_RenameTargets::functions,
  scope_RenameTargets::idents,
  scope_RenameTargets::numbers,
  scope_RenameTargets::strings,
  scope_RenameTargets::filename
);
refalrts::RefalFunction& RenameTargets = descr_RenameTargets;

} // unnamed namespace

#else
static refalrts::FnResult func_RenameTargets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & RenameTargets/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # NoCppCompiler e.idx
    // </0 & RenameTargets/4 # NoCppCompiler/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NoCppCompiler<int>::name, context[5] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RenameTargets/4 # NoCppCompiler/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & RenameTargets/4 (/5 e.CppCompiler#1/7 )/6 e.Files#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompiler#1 as range 7
  // closed e.Files#1 as range 2
  //DEBUG: e.CppCompiler#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.CppCompiler#1/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 HalfReuse: </5 } & Map/9 Tile{ HalfReuse: & GetFileName/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ScanCollisions );
  refalrts::reinit_open_call( context[5] );
  refalrts::reinit_name( context[6], & GetFileName );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_RenameTargets(func_RenameTargets, "RenameTargets");
refalrts::RefalFunction& RenameTargets = descr_RenameTargets;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GetFileName {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & GetBaseNameLowerCase
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Source<int>::name,
      & ident_Output<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 21, 0, 0},
      //FAST GEN: ( s.$ s.$ e.$ )
      //GLOBAL GEN: ( s.$ s.$ e.$ )
      // </0 & GetFileName/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.idxBVV#0 as range 5
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( s.idx # Output e.idx )
      // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 10},
      // closed e.FileName#1 as range 5
      //DEBUG: s.Pos#1: 9
      //DEBUG: e.FileName#1: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 0, 14},
      {refalrts::icCopyEVar, 15, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 12, 4, 0},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( s.idx # Source ( e.idx ) e.idx )
      // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      {refalrts::icBracketLeftSave, 0, 11, 5},
      // closed e.Source#1 as range 11
      // closed e.Output#1 as range 5
      //DEBUG: s.Pos#1: 9
      //DEBUG: e.Source#1: 11
      //DEBUG: e.Output#1: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 (/16 </17 & GetBaseNameLowerCase/18 e.Output#1/5/19 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 0, 18},
      {refalrts::icCopyEVar, 19, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 15, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 16, 4, 0},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 15, 18, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GetFileName

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_GetFileName(
  "GetFileName",
  scope_GetFileName::raa,
  scope_GetFileName::functions,
  scope_GetFileName::idents,
  scope_GetFileName::numbers,
  scope_GetFileName::strings,
  scope_GetFileName::filename
);
refalrts::RefalFunction& GetFileName = descr_GetFileName;

} // unnamed namespace

#else
static refalrts::FnResult func_GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & GetFileName/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # Output e.idx )
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & GetBaseNameLowerCase ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # Source ( e.idx ) e.idx )
  // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Source#1 as range 11
  // closed e.Output#1 as range 5
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.Source#1: 11
  //DEBUG: e.Output#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 (/16 </17 & GetBaseNameLowerCase/18 e.Output#1/5/19 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & GetBaseNameLowerCase ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_GetFileName(func_GetFileName, "GetFileName");
refalrts::RefalFunction& GetFileName = descr_GetFileName;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ScanCollisions {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & ScanCollisions,
      & RenameLocations
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 29, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & ScanCollisions/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( ( e.idx ) e.idx ) e.idx
      // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations1#1/5 )/8 e.Files-B#1/13 (/17 (/21 e.BaseName#1/23 )/22 e.Locations2#1/15 )/18 e.Files-E#1/2 >/1
      {refalrts::icSave, 0, 25, 2},
      {refalrts::icBracketLeftSave, 0, 5, 25},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      // closed e.BaseName#1 as range 9
      // closed e.Locations1#1 as range 5
      {refalrts::icEPrepare, 0, 13, 25},
      {refalrts::icEStart, 0, 13, 25},
      {refalrts::icSave, 0, 27, 25},
      {refalrts::icBracketLeftSave, 0, 15, 27},
      {refalrts::icBracketLeftSave, 0, 19, 15},
      {refalrts::iceRepeatLeft, 23, 9, 19},
      {refalrts::icEmpty, 0, 0, 19},
      // closed e.Locations2#1 as range 15
      // closed e.Files-E#1 as range 27(2)
      //DEBUG: e.BaseName#1: 9
      //DEBUG: e.Locations1#1: 5
      //DEBUG: e.Files-B#1: 13
      //DEBUG: e.Locations2#1: 15
      //DEBUG: e.Files-E#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files-B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.BaseName#1/23 AsIs: )/22 } Tile{ AsIs: e.Locations1#1/5 } Tile{ AsIs: e.Locations2#1/15 } Tile{ AsIs: )/18 AsIs: e.Files-E#1/27(2) AsIs: >/1 ]] }
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 21, 22, 0},
      {refalrts::icSetRes, 0, 0, 18},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 8, 22, 0},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( ( e.idx ) e.idx ) e.idx
      // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations#1/5 )/8 e.Files#1/2 >/1
      {refalrts::icSave, 0, 25, 2},
      {refalrts::icBracketLeftSave, 0, 5, 25},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      // closed e.BaseName#1 as range 9
      // closed e.Locations#1 as range 5
      // closed e.Files#1 as range 25(2)
      //DEBUG: e.BaseName#1: 9
      //DEBUG: e.Locations#1: 5
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.BaseName#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </11 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files#1/25(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 7, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      //
      // </0 & ScanCollisions/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ScanCollisions/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ScanCollisions

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ScanCollisions(
  "ScanCollisions",
  scope_ScanCollisions::raa,
  scope_ScanCollisions::functions,
  scope_ScanCollisions::idents,
  scope_ScanCollisions::numbers,
  scope_ScanCollisions::strings,
  scope_ScanCollisions::filename
);
refalrts::RefalFunction& ScanCollisions = descr_ScanCollisions;

} // unnamed namespace

#else
static refalrts::FnResult func_ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ScanCollisions/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( ( e.idx ) e.idx ) e.idx
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations1#1/5 )/8 e.Files-B#1/13 (/17 (/21 e.BaseName#1/23 )/22 e.Locations2#1/15 )/18 e.Files-E#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[25], context[26] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations1#1 as range 5
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[25];
      context[28] = context[26];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[27], context[28] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[9], context[10], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Locations2#1 as range 15
      // closed e.Files-E#1 as range 27(2)
      //DEBUG: e.BaseName#1: 9
      //DEBUG: e.Locations1#1: 5
      //DEBUG: e.Files-B#1: 13
      //DEBUG: e.Locations2#1: 15
      //DEBUG: e.Files-E#1: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files-B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.BaseName#1/23 AsIs: )/22 } Tile{ AsIs: e.Locations1#1/5 } Tile{ AsIs: e.Locations2#1/15 } Tile{ AsIs: )/18 AsIs: e.Files-E#1/27(2) AsIs: >/1 ]] }
      refalrts::reinit_name( context[8], & ScanCollisions );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[8], context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( e.idx ) e.idx ) e.idx
    // </0 & ScanCollisions/4 (/7 (/11 e.BaseName#1/9 )/12 e.Locations#1/5 )/8 e.Files#1/2 >/1
    context[25] = context[2];
    context[26] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[25], context[26] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.BaseName#1 as range 9
    // closed e.Locations#1 as range 5
    // closed e.Files#1 as range 25(2)
    //DEBUG: e.BaseName#1: 9
    //DEBUG: e.Locations#1: 5
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.BaseName#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </11 } Tile{ HalfReuse: & ScanCollisions/8 AsIs: e.Files#1/25(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & RenameLocations );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[8], & ScanCollisions );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & ScanCollisions/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ScanCollisions/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_ScanCollisions(func_ScanCollisions, "ScanCollisions");
refalrts::RefalFunction& ScanCollisions = descr_ScanCollisions;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RenameLocations {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & RenameLocations_Aux
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Output<int>::name,
      & ident_Collision<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 5, 0, 0},
      {refalrts::icIssueMemory, 27, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & RenameLocations/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // e.idx
      // </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos1#1/11 # Output/12 e.FirstTarget#1/7 )/10 e.Locations-M#1/13 (/17 s.Pos2#1/19 # Output/20 e.SecondTarget#1/15 )/18 e.Locations-E#1/2 >/1
      {refalrts::icSave, 0, 21, 2},
      {refalrts::icEPrepare, 0, 5, 21},
      {refalrts::icEStart, 0, 5, 21},
      {refalrts::icSave, 0, 23, 21},
      {refalrts::icBracketLeftSave, 0, 7, 23},
      {refalrts::icsVarLeft, 0, 11, 7},
      {refalrts::icIdentLeftSave, 12, 0, 7},
      // closed e.FirstTarget#1 as range 7
      {refalrts::icEPrepare, 0, 13, 23},
      {refalrts::icEStart, 0, 13, 23},
      {refalrts::icSave, 0, 25, 23},
      {refalrts::icBracketLeftSave, 0, 15, 25},
      // closed e.Locations-E#1 as range 25(2)
      {refalrts::icsVarLeft, 0, 19, 15},
      {refalrts::icIdentLeftSave, 20, 0, 15},
      // closed e.SecondTarget#1 as range 15
      //DEBUG: e.Locations-B#1: 5
      //DEBUG: s.Pos1#1: 11
      //DEBUG: e.FirstTarget#1: 7
      //DEBUG: e.Locations-M#1: 13
      //DEBUG: e.Locations-E#1: 2
      //DEBUG: s.Pos2#1: 19
      //DEBUG: e.SecondTarget#1: 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos1#1/11 {REMOVED TILE} e.Locations-M#1/13 {REMOVED TILE} {REMOVED TILE} )/18 e.Locations-E#1/25(2) {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/17 AsIs: s.Pos2#1/19 Reuse: # Collision/20 } Tile{ HalfReuse: (/12 AsIs: e.FirstTarget#1/7 AsIs: )/10 } Tile{ AsIs: e.SecondTarget#1/15 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 1, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 17, 1, 0},
      {refalrts::icLinkBrackets, 12, 10, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 12, 10, 0},
      {refalrts::icSpliceTile, 17, 20, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // e.idx
      // </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos#1/11 # Output/12 e.Target#1/7 )/10 e.Locations-E#1/2 >/1
      {refalrts::icSave, 0, 21, 2},
      {refalrts::icEPrepare, 0, 5, 21},
      {refalrts::icEStart, 0, 5, 21},
      {refalrts::icSave, 0, 23, 21},
      {refalrts::icBracketLeftSave, 0, 7, 23},
      // closed e.Locations-E#1 as range 23(2)
      {refalrts::icsVarLeft, 0, 11, 7},
      {refalrts::icIdentLeftSave, 12, 0, 7},
      // closed e.Target#1 as range 7
      //DEBUG: e.Locations-B#1: 5
      //DEBUG: e.Locations-E#1: 2
      //DEBUG: s.Pos#1: 11
      //DEBUG: e.Target#1: 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 1/4 AsIs: e.Locations-B#1/5 AsIs: (/9 AsIs: s.Pos#1/11 AsIs: # Output/12 AsIs: e.Target#1/7 AsIs: )/10 AsIs: e.Locations-E#1/23(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitInt, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // e.idx
      // </0 & RenameLocations/4 e.Locations#1/2 >/1
      // closed e.Locations#1 as range 2
      //DEBUG: e.Locations#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitInt, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RenameLocations

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_RenameLocations(
  "RenameLocations",
  scope_RenameLocations::raa,
  scope_RenameLocations::functions,
  scope_RenameLocations::idents,
  scope_RenameLocations::numbers,
  scope_RenameLocations::strings,
  scope_RenameLocations::filename
);
refalrts::RefalFunction& RenameLocations = descr_RenameLocations;

} // unnamed namespace

#else
static refalrts::FnResult func_RenameLocations(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & RenameLocations/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos1#1/11 # Output/12 e.FirstTarget#1/7 )/10 e.Locations-M#1/13 (/17 s.Pos2#1/19 # Output/20 e.SecondTarget#1/15 )/18 e.Locations-E#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.FirstTarget#1 as range 7
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[23];
        context[26] = context[24];
        context[15] = 0;
        context[16] = 0;
        context[17] = refalrts::brackets_left( context[15], context[16], context[25], context[26] );
        if( ! context[17] )
          continue;
        refalrts::bracket_pointers(context[17], context[18]);
        // closed e.Locations-E#1 as range 25(2)
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        context[20] = refalrts::ident_left(  & ident_Output<int>::name, context[15], context[16] );
        if( ! context[20] )
          continue;
        // closed e.SecondTarget#1 as range 15
        //DEBUG: e.Locations-B#1: 5
        //DEBUG: s.Pos1#1: 11
        //DEBUG: e.FirstTarget#1: 7
        //DEBUG: e.Locations-M#1: 13
        //DEBUG: e.Locations-E#1: 2
        //DEBUG: s.Pos2#1: 19
        //DEBUG: e.SecondTarget#1: 15

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos1#1/11 {REMOVED TILE} e.Locations-M#1/13 {REMOVED TILE} {REMOVED TILE} )/18 e.Locations-E#1/25(2) {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/17 AsIs: s.Pos2#1/19 Reuse: # Collision/20 } Tile{ HalfReuse: (/12 AsIs: e.FirstTarget#1/7 AsIs: )/10 } Tile{ AsIs: e.SecondTarget#1/15 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident( context[20], & ident_Collision<int>::name );
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[17], context[1] );
        refalrts::link_brackets( context[12], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[12], context[10] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & RenameLocations/4 e.Locations-B#1/5 (/9 s.Pos#1/11 # Output/12 e.Target#1/7 )/10 e.Locations-E#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      // closed e.Locations-E#1 as range 23(2)
      if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
        continue;
      context[12] = refalrts::ident_left(  & ident_Output<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Target#1 as range 7
      //DEBUG: e.Locations-B#1: 5
      //DEBUG: e.Locations-E#1: 2
      //DEBUG: s.Pos#1: 11
      //DEBUG: e.Target#1: 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 1/4 AsIs: e.Locations-B#1/5 AsIs: (/9 AsIs: s.Pos#1/11 AsIs: # Output/12 AsIs: e.Target#1/7 AsIs: )/10 AsIs: e.Locations-E#1/23(2) AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[13] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[0], & RenameLocations_Aux );
      refalrts::reinit_number( context[4], 1UL );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[13] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & RenameLocations/4 e.Locations#1/2 >/1
  // closed e.Locations#1 as range 2
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & RenameLocations_Aux );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_RenameLocations(func_RenameLocations, "RenameLocations");
refalrts::RefalFunction& RenameLocations = descr_RenameLocations;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RenameLocations_Aux_L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt,
      & Inc
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Output<int>::name,
      & ident_Source<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"cpp", 3}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 26, 0, 0},
      //FAST GEN: s.$ ( s.$ s.$ e.$ )
      //GLOBAL GEN: s.$ ( s.$ s.$ e.$ )
      // </0 & RenameLocations-Aux\1/4 s.idx#0/9 (/7 s.idxVB#0/10 s.idxVBV#0/11 e.idxVBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 10, 5},
      {refalrts::icsVarLeft, 0, 11, 5},
      // closed e.idxVBVV#0 as range 5
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // 0 ( s.idx # Source ( e.idx ) e.idx )
      // </0 & RenameLocations-Aux\1/4 0/9 (/7 s.Pos#2/10 # Source/11 (/14 e.Source#2/12 )/15 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      {refalrts::icNumTerm, 0, 0, 9},
      {refalrts::icSave, 0, 24, 5},
      {refalrts::icBracketLeftSave, 0, 12, 24},
      // closed e.Source#2 as range 12
      // closed e.Output#2 as range 24(5)
      //DEBUG: s.Pos#2: 10
      //DEBUG: e.Source#2: 12
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: 1/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/14 AsIs: e.Source#2/12 AsIs: )/15 AsIs: e.Output#2/24(5) AsIs: )/8 } Tile{ ]] }
      {refalrts::icUpdateInt, 0, 1, 9},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +29, 0, 0},
      // s.idx ( s.idx # Source ( e.idx ) e.idx '.cpp' )
      // </0 & RenameLocations-Aux\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Source/11 (/18 e.Source#2/16 )/19 e.Output#2/5 '.'/15 'c'/14 'p'/13 'p'/12 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      {refalrts::icSave, 0, 24, 5},
      {refalrts::icCharRightSave, 12, static_cast<unsigned char>('p'), 24},
      {refalrts::icCharRightSave, 13, static_cast<unsigned char>('p'), 24},
      {refalrts::icCharRightSave, 14, static_cast<unsigned char>('c'), 24},
      {refalrts::icCharRightSave, 15, static_cast<unsigned char>('.'), 24},
      {refalrts::icBracketLeftSave, 0, 16, 24},
      // closed e.Source#2 as range 16
      // closed e.Output#2 as range 24(5)
      //DEBUG: s.Num#2: 9
      //DEBUG: s.Pos#2: 10
      //DEBUG: e.Source#2: 16
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/9 } >/20 Tile{ AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/18 AsIs: e.Source#2/16 AsIs: )/19 AsIs: e.Output#2/24(5) Reuse: '@'/15 HalfReuse: </14 HalfReuse: & StrFromInt/13 HalfReuse: s.Num2 #9/12 HalfReuse: >/8 HalfReuse: '.'/1 }"cpp"/21 )/23 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icAllocString, 0, 0, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icUpdateChar, 0, '@', 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icReinitSVar, 0, 9, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitChar, 0, '.', 1},
      {refalrts::icLinkBrackets, 7, 23, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icLinkBrackets, 18, 19, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 21, 23, 0},
      {refalrts::icSpliceTile, 7, 1, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx ( s.idx # Output e.idx )
      // </0 & RenameLocations-Aux\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 11},
      // closed e.Output#2 as range 5
      //DEBUG: s.Num#2: 9
      //DEBUG: s.Pos#2: 10
      //DEBUG: e.Output#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RenameLocations_Aux_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_RenameLocations_Aux_L1(
  "RenameLocations-Aux\\1",
  scope_gen_RenameLocations_Aux_L1::raa,
  scope_gen_RenameLocations_Aux_L1::functions,
  scope_gen_RenameLocations_Aux_L1::idents,
  scope_gen_RenameLocations_Aux_L1::numbers,
  scope_gen_RenameLocations_Aux_L1::strings,
  scope_gen_RenameLocations_Aux_L1::filename
);
refalrts::RefalFunction& gen_RenameLocations_Aux_L1 = descr_gen_RenameLocations_Aux_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RenameLocations_Aux_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: s.$ ( s.$ s.$ e.$ )
  //GLOBAL GEN: s.$ ( s.$ s.$ e.$ )
  // </0 & RenameLocations-Aux\1/4 s.idx#0/9 (/7 s.idxVB#0/10 s.idxVBV#0/11 e.idxVBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 5
  do {
    // 0 ( s.idx # Source ( e.idx ) e.idx )
    // </0 & RenameLocations-Aux\1/4 0/9 (/7 s.Pos#2/10 # Source/11 (/14 e.Source#2/12 )/15 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[11] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[9] ) )
      continue;
    context[24] = context[5];
    context[25] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[24], context[25] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Source#2 as range 12
    // closed e.Output#2 as range 24(5)
    //DEBUG: s.Pos#2: 10
    //DEBUG: e.Source#2: 12
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: 1/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/14 AsIs: e.Source#2/12 AsIs: )/15 AsIs: e.Output#2/24(5) AsIs: )/8 } Tile{ ]] }
    refalrts::update_number( context[9], 1UL );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( s.idx # Source ( e.idx ) e.idx '.cpp' )
    // </0 & RenameLocations-Aux\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Source/11 (/18 e.Source#2/16 )/19 e.Output#2/5 '.'/15 'c'/14 'p'/13 'p'/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Source<int>::name, context[11] ) )
      continue;
    context[24] = context[5];
    context[25] = context[6];
    context[12] = refalrts::char_right( 'p', context[24], context[25] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_right( 'p', context[24], context[25] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_right( 'c', context[24], context[25] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_right( '.', context[24], context[25] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[24], context[25] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Source#2 as range 16
    // closed e.Output#2 as range 24(5)
    //DEBUG: s.Num#2: 9
    //DEBUG: s.Pos#2: 10
    //DEBUG: e.Source#2: 16
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/9 } >/20 Tile{ AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/18 AsIs: e.Source#2/16 AsIs: )/19 AsIs: e.Output#2/24(5) Reuse: '@'/15 HalfReuse: </14 HalfReuse: & StrFromInt/13 HalfReuse: s.Num2 #9/12 HalfReuse: >/8 HalfReuse: '.'/1 }"cpp"/21 )/23 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "cpp", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Inc );
    refalrts::update_char( context[15], '@' );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[13], & StrFromInt );
    refalrts::reinit_svar( context[12], context[9] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_char( context[1], '.' );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( s.idx # Output e.idx )
  // </0 & RenameLocations-Aux\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Output<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  //DEBUG: s.Num#2: 9
  //DEBUG: s.Pos#2: 10
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_RenameLocations_Aux_L1(func_gen_RenameLocations_Aux_L1, "RenameLocations-Aux\\1");
refalrts::RefalFunction& gen_RenameLocations_Aux_L1 = descr_gen_RenameLocations_Aux_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RenameLocations_Aux {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_RenameLocations_Aux_L1,
      & MapReduce,
      & DelAccumulator
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & RenameLocations-Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.Locations#1 as range 2
      //DEBUG: s.InitNumber#1: 5
      //DEBUG: e.Locations#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 & DelAccumulator/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & RenameLocations-Aux\1/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 8, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RenameLocations_Aux

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_RenameLocations_Aux(
  "RenameLocations-Aux",
  scope_RenameLocations_Aux::raa,
  scope_RenameLocations_Aux::functions,
  scope_RenameLocations_Aux::idents,
  scope_RenameLocations_Aux::numbers,
  scope_RenameLocations_Aux::strings,
  scope_RenameLocations_Aux::filename
);
refalrts::RefalFunction& RenameLocations_Aux = descr_RenameLocations_Aux;

} // unnamed namespace

#else
static refalrts::FnResult func_RenameLocations_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RenameLocations-Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Locations#1 as range 2
  //DEBUG: s.InitNumber#1: 5
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & DelAccumulator/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & RenameLocations-Aux\1/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & DelAccumulator ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & MapReduce );
  refalrts::update_name( context[4], & gen_RenameLocations_Aux_L1 );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_RenameLocations_Aux(func_RenameLocations_Aux, "RenameLocations-Aux");
refalrts::RefalFunction& RenameLocations_Aux = descr_RenameLocations_Aux;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFiles_S1L1S2L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Fails<int>::name,
      & ident_Success<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & CompileFiles$1\1$2\1/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // # Success e.idx
      // </0 & CompileFiles$1\1$2\1/4 # Success/5 e.OutputName#3/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.OutputName#3 as range 2
      //DEBUG: e.OutputName#3: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CompileFiles$1\1$2\1/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.OutputName#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // # Fails
      // </0 & CompileFiles$1\1$2\1/4 # Fails/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CompileFiles$1\1$2\1/4 # Fails/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFiles_S1L1S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFiles_S1L1S2L1(
  "CompileFiles$1\\1$2\\1",
  scope_gen_CompileFiles_S1L1S2L1::raa,
  scope_gen_CompileFiles_S1L1S2L1::functions,
  scope_gen_CompileFiles_S1L1S2L1::idents,
  scope_gen_CompileFiles_S1L1S2L1::numbers,
  scope_gen_CompileFiles_S1L1S2L1::strings,
  scope_gen_CompileFiles_S1L1S2L1::filename
);
refalrts::RefalFunction& gen_CompileFiles_S1L1S2L1 = descr_gen_CompileFiles_S1L1S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFiles_S1L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & CompileFiles$1\1$2\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Success e.idx
    // </0 & CompileFiles$1\1$2\1/4 # Success/5 e.OutputName#3/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[5] ) )
      continue;
    // closed e.OutputName#3 as range 2
    //DEBUG: e.OutputName#3: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CompileFiles$1\1$2\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.OutputName#3/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Fails
  // </0 & CompileFiles$1\1$2\1/4 # Fails/5 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFiles$1\1$2\1/4 # Fails/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_CompileFiles_S1L1S2L1(func_gen_CompileFiles_S1L1S2L1, "CompileFiles$1\\1$2\\1");
refalrts::RefalFunction& gen_CompileFiles_S1L1S2L1 = descr_gen_CompileFiles_S1L1S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFiles_S1L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_CompileFiles_S1L1S2L1,
      & CompileFile,
      & Fetch,
      & WriteLine
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Source<int>::name,
      & ident_Output<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"mpiling ", 8},
      {"inking ", 7}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 31, 0, 0},
      //FAST GEN: s.$ s.$ t.$ ( s.$ s.$ e.$ )
      //GLOBAL GEN: s.$ s.$ t.$ ( s.$ s.$ e.$ )
      // </0 & CompileFiles$1\1/4 s.idx#0/9 s.idxV#0/10 t.idxVV#0/13 (/7 s.idxVVVB#0/11 s.idxVVVBV#0/12 e.idxVVVBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 5},
      {refalrts::icsVarLeft, 0, 12, 5},
      // closed e.idxVVVBVV#0 as range 5
      {refalrts::ictVarLeftSave, 0, 13, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // s.idx s.idx t.idx ( s.idx # Output e.idx )
      // </0 & CompileFiles$1\1/4 s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 (/7 s.Pos#2/11 # Output/12 e.OutputName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 12},
      // closed e.OutputName#2 as range 5
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.Pos#2: 11
      //DEBUG: e.OutputName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 {REMOVED TILE} s.Pos#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } '+'/15 Tile{ HalfReuse: 'L'/7 }"inking "/16 e.OutputName#2/5/18 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/12 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icAllocChar, 0, '+', 15},
      {refalrts::icAllocString, 0, 1, 16},
      {refalrts::icCopyEVar, 18, 5, 0},
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitChar, 0, 'L', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icLinkBrackets, 12, 8, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 8, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx s.idx t.idx ( s.idx # Source ( e.idx ) e.idx )
      // </0 & CompileFiles$1\1/4 s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 (/7 s.Pos#2/11 # Source/12 (/17 e.Source#2/15 )/18 e.OutputName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 12},
      {refalrts::icBracketLeftSave, 0, 15, 5},
      // closed e.Source#2 as range 15
      // closed e.OutputName#2 as range 5
      //DEBUG: t.DebugMode#1: 13
      //DEBUG: s.GenMode#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.Pos#2: 11
      //DEBUG: e.Source#2: 15
      //DEBUG: e.OutputName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Pos#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 & WriteLine/20 '*'/21 Tile{ HalfReuse: 'C'/12 HalfReuse: 'o'/17 }"mpiling "/22 Tile{ AsIs: e.Source#2/15 } ':'/24 >/25 </26 & Fetch/27 Tile{ AsIs: </0 Reuse: & CompileFile/4 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.DebugMode#1/13 AsIs: (/7 } e.Source#2/15/28 Tile{ AsIs: )/18 AsIs: e.OutputName#2/5 HalfReuse: >/8 HalfReuse: & CompileFiles$1\1$2\1/1 } >/30 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 3, 20},
      {refalrts::icAllocChar, 0, '*', 21},
      {refalrts::icAllocString, 0, 0, 22},
      {refalrts::icAllocChar, 0, ':', 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
      {refalrts::icAllocFunc, 0, 2, 27},
      {refalrts::icCopyEVar, 28, 15, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
      {refalrts::icReinitChar, 0, 'C', 12},
      {refalrts::icReinitChar, 0, 'o', 17},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitFunc, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 30},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 18, 0},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 30, 30, 0},
      {refalrts::icSpliceTile, 18, 1, 0},
      {refalrts::icSpliceTile, 28, 29, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 24, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceTile, 12, 17, 0},
      {refalrts::icSpliceTile, 19, 21, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFiles_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFiles_S1L1(
  "CompileFiles$1\\1",
  scope_gen_CompileFiles_S1L1::raa,
  scope_gen_CompileFiles_S1L1::functions,
  scope_gen_CompileFiles_S1L1::idents,
  scope_gen_CompileFiles_S1L1::numbers,
  scope_gen_CompileFiles_S1L1::strings,
  scope_gen_CompileFiles_S1L1::filename
);
refalrts::RefalFunction& gen_CompileFiles_S1L1 = descr_gen_CompileFiles_S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFiles_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: s.$ s.$ t.$ ( s.$ s.$ e.$ )
  //GLOBAL GEN: s.$ s.$ t.$ ( s.$ s.$ e.$ )
  // </0 & CompileFiles$1\1/4 s.idx#0/9 s.idxV#0/10 t.idxVV#0/13 (/7 s.idxVVVB#0/11 s.idxVVVBV#0/12 e.idxVVVBVV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVBVV#0 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx t.idx ( s.idx # Output e.idx )
    // </0 & CompileFiles$1\1/4 s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 (/7 s.Pos#2/11 # Output/12 e.OutputName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[12] ) )
      continue;
    // closed e.OutputName#2 as range 5
    //DEBUG: t.DebugMode#1: 13
    //DEBUG: s.GenMode#1: 9
    //DEBUG: s.Opt#1: 10
    //DEBUG: s.Pos#2: 11
    //DEBUG: e.OutputName#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 {REMOVED TILE} s.Pos#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } '+'/15 Tile{ HalfReuse: 'L'/7 }"inking "/16 e.OutputName#2/5/18 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/12 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[15], '+' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], "inking ", 7 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine );
    refalrts::reinit_char( context[7], 'L' );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx ( s.idx # Source ( e.idx ) e.idx )
  // </0 & CompileFiles$1\1/4 s.GenMode#1/9 s.Opt#1/10 t.DebugMode#1/13 (/7 s.Pos#2/11 # Source/12 (/17 e.Source#2/15 )/18 e.OutputName#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Source#2 as range 15
  // closed e.OutputName#2 as range 5
  //DEBUG: t.DebugMode#1: 13
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Opt#1: 10
  //DEBUG: s.Pos#2: 11
  //DEBUG: e.Source#2: 15
  //DEBUG: e.OutputName#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Pos#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & WriteLine/20 '*'/21 Tile{ HalfReuse: 'C'/12 HalfReuse: 'o'/17 }"mpiling "/22 Tile{ AsIs: e.Source#2/15 } ':'/24 >/25 </26 & Fetch/27 Tile{ AsIs: </0 Reuse: & CompileFile/4 AsIs: s.GenMode#1/9 AsIs: s.Opt#1/10 AsIs: t.DebugMode#1/13 AsIs: (/7 } e.Source#2/15/28 Tile{ AsIs: )/18 AsIs: e.OutputName#2/5 HalfReuse: >/8 HalfReuse: & CompileFiles$1\1$2\1/1 } >/30 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & WriteLine ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], '*' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "mpiling ", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], & Fetch ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[15], context[16]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[12], 'C' );
  refalrts::reinit_char( context[17], 'o' );
  refalrts::update_name( context[4], & CompileFile );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_name( context[1], & gen_CompileFiles_S1L1S2L1 );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[18] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[18], context[1] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_CompileFiles_S1L1(func_gen_CompileFiles_S1L1, "CompileFiles$1\\1");
refalrts::RefalFunction& gen_CompileFiles_S1L1 = descr_gen_CompileFiles_S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFiles_S2L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & WriteLine,
      & GrammarCheck
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Source<int>::name,
      & ident_Output<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"mmar checkin", 12},
      {"Gr", 2},
      {"Skipping native file ", 21}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: ( s.$ s.$ e.$ )
      //GLOBAL GEN: ( s.$ s.$ e.$ )
      // </0 & CompileFiles$2\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.idxBVV#0 as range 5
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( s.idx # Output e.idx )
      // </0 & CompileFiles$2\1/4 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 10},
      // closed e.OutputName#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.OutputName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: '+'/7 }"Skipping native file "/11 e.OutputName#2/5/13 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/10 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icAllocString, 0, 2, 11},
      {refalrts::icCopyEVar, 13, 5, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '+', 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icLinkBrackets, 10, 8, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 8, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( s.idx # Source ( e.idx ) e.idx )
      // </0 & CompileFiles$2\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.OutputName#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      {refalrts::icBracketLeftSave, 0, 11, 5},
      // closed e.Source#2 as range 11
      // closed e.OutputName#2 as range 5
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.Source#2: 11
      //DEBUG: e.OutputName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} e.OutputName#2/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: '*'/7 }"Gr"/15 Tile{ HalfReuse: 'a'/8 }"mmar checkin"/17 Tile{ HalfReuse: 'g'/10 HalfReuse: ' '/13 AsIs: e.Source#2/11 HalfReuse: ':'/14 } >/19 </20 & GrammarCheck/21 e.Source#2/11/22 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 1, 15},
      {refalrts::icAllocString, 0, 0, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 1, 21},
      {refalrts::icCopyEVar, 22, 11, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '*', 7},
      {refalrts::icReinitChar, 0, 'a', 8},
      {refalrts::icReinitChar, 0, 'g', 10},
      {refalrts::icReinitChar, 0, ' ', 13},
      {refalrts::icReinitChar, 0, ':', 14},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceTile, 19, 21, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFiles_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFiles_S2L1(
  "CompileFiles$2\\1",
  scope_gen_CompileFiles_S2L1::raa,
  scope_gen_CompileFiles_S2L1::functions,
  scope_gen_CompileFiles_S2L1::idents,
  scope_gen_CompileFiles_S2L1::numbers,
  scope_gen_CompileFiles_S2L1::strings,
  scope_gen_CompileFiles_S2L1::filename
);
refalrts::RefalFunction& gen_CompileFiles_S2L1 = descr_gen_CompileFiles_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFiles_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( s.$ s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ e.$ )
  // </0 & CompileFiles$2\1/4 (/7 s.idxB#0/9 s.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    // ( s.idx # Output e.idx )
    // </0 & CompileFiles$2\1/4 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Output<int>::name, context[10] ) )
      continue;
    // closed e.OutputName#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.OutputName#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: '+'/7 }"Skipping native file "/11 e.OutputName#2/5/13 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/10 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "Skipping native file ", 21 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[13], context[14], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & WriteLine );
    refalrts::reinit_char( context[7], '+' );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx # Source ( e.idx ) e.idx )
  // </0 & CompileFiles$2\1/4 (/7 s.Pos#2/9 # Source/10 (/13 e.Source#2/11 )/14 e.OutputName#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Source<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Source#2 as range 11
  // closed e.OutputName#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Source#2: 11
  //DEBUG: e.OutputName#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} e.OutputName#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: '*'/7 }"Gr"/15 Tile{ HalfReuse: 'a'/8 }"mmar checkin"/17 Tile{ HalfReuse: 'g'/10 HalfReuse: ' '/13 AsIs: e.Source#2/11 HalfReuse: ':'/14 } >/19 </20 & GrammarCheck/21 e.Source#2/11/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], "Gr", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "mmar checkin", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & GrammarCheck ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[11], context[12]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & WriteLine );
  refalrts::reinit_char( context[7], '*' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::reinit_char( context[10], 'g' );
  refalrts::reinit_char( context[13], ' ' );
  refalrts::reinit_char( context[14], ':' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_CompileFiles_S2L1(func_gen_CompileFiles_S2L1, "CompileFiles$2\\1");
refalrts::RefalFunction& gen_CompileFiles_S2L1 = descr_gen_CompileFiles_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CompileFiles {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_CompileFiles_S2L1,
      & Map,
      & gen_CompileFiles_S1L1,
      & refalrts::create_closure
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_GrammarCheck<int>::name,
      & ident_NormalRun<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      //FAST GEN: s.$ s.$ t.$ s.$ e.$
      //GLOBAL GEN: s.$ s.$ t.$ s.$ e.$
      // </0 & CompileFiles/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 s.idxVVV#0/9 e.idxVVVV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::ictVarLeftSave, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxVVVV#0 as range 2
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // s.idx s.idx t.idx # NormalRun e.idx
      // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 # NormalRun/9 e.Files#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.Files#1 as range 2
      //DEBUG: t.DebugMode#1: 7
      //DEBUG: s.GenMode#1: 5
      //DEBUG: s.Opt#1: 6
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </10 & Map/11 </12 Tile{ HalfReuse: & @create_closure@/0 Reuse: & CompileFiles$1\1/4 AsIs: s.GenMode#1/5 AsIs: s.Opt#1/6 AsIs: t.DebugMode#1/7 HalfReuse: >/9 AsIs: e.Files#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 3, 0},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx s.idx t.idx # GrammarCheck e.idx
      // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 # GrammarCheck/9 e.Files#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.Files#1 as range 2
      //DEBUG: t.DebugMode#1: 7
      //DEBUG: s.GenMode#1: 5
      //DEBUG: s.Opt#1: 6
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } Tile{ HalfReuse: & CompileFiles$2\1/9 AsIs: e.Files#1/2 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CompileFiles

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_CompileFiles(
  "CompileFiles",
  scope_CompileFiles::raa,
  scope_CompileFiles::functions,
  scope_CompileFiles::idents,
  scope_CompileFiles::numbers,
  scope_CompileFiles::strings,
  scope_CompileFiles::filename
);
refalrts::RefalFunction& CompileFiles = descr_CompileFiles;

} // unnamed namespace

#else
static refalrts::FnResult func_CompileFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ s.$ t.$ s.$ e.$
  //GLOBAL GEN: s.$ s.$ t.$ s.$ e.$
  // </0 & CompileFiles/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 s.idxVVV#0/9 e.idxVVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVV#0 as range 2
  do {
    // s.idx s.idx t.idx # NormalRun e.idx
    // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 # NormalRun/9 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NormalRun<int>::name, context[9] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: t.DebugMode#1: 7
    //DEBUG: s.GenMode#1: 5
    //DEBUG: s.Opt#1: 6
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Map/11 </12 Tile{ HalfReuse: & @create_closure@/0 Reuse: & CompileFiles$1\1/4 AsIs: s.GenMode#1/5 AsIs: s.Opt#1/6 AsIs: t.DebugMode#1/7 HalfReuse: >/9 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & Map ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_CompileFiles_S1L1 );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx # GrammarCheck e.idx
  // </0 & CompileFiles/4 s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 # GrammarCheck/9 e.Files#1/2 >/1
  if( ! refalrts::ident_term(  & ident_GrammarCheck<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: t.DebugMode#1: 7
  //DEBUG: s.GenMode#1: 5
  //DEBUG: s.Opt#1: 6
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.GenMode#1/5 s.Opt#1/6 t.DebugMode#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } Tile{ HalfReuse: & CompileFiles$2\1/9 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], & Map );
  refalrts::reinit_name( context[9], & gen_CompileFiles_S2L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_CompileFiles(func_CompileFiles, "CompileFiles");
refalrts::RefalFunction& CompileFiles = descr_CompileFiles;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Link_S2L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & Link$2\1/4 (/7 e.FileName#2/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.FileName#2 as range 5
      //DEBUG: e.FileName#2: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '\"'/7 AsIs: e.FileName#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitChar, 0, '\"', 7},
      {refalrts::icReinitChar, 0, '\"', 8},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Link_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Link_S2L1(
  "Link$2\\1",
  scope_gen_Link_S2L1::raa,
  scope_gen_Link_S2L1::functions,
  scope_gen_Link_S2L1::idents,
  scope_gen_Link_S2L1::numbers,
  scope_gen_Link_S2L1::strings,
  scope_gen_Link_S2L1::filename
);
refalrts::RefalFunction& gen_Link_S2L1 = descr_gen_Link_S2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Link_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Link$2\1/4 (/7 e.FileName#2/5 )/8 >/1
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
  // closed e.FileName#2 as range 5
  //DEBUG: e.FileName#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '\"'/7 AsIs: e.FileName#2/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Link_S2L1(func_gen_Link_S2L1, "Link$2\\1");
refalrts::RefalFunction& gen_Link_S2L1 = descr_gen_Link_S2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Link {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_Link_S2L1,
      & Map,
      & System
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoCppCompiler<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: t.$ e.$
      //GLOBAL GEN: t.$ e.$
      // </0 & Link/4 t.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # NoCppCompiler e.idx
      // </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      // closed e.Files#1 as range 2
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & Link/4 (/5 e.CommandLine#1/7 )/6 e.Files#1/2 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      // closed e.CommandLine#1 as range 7
      // closed e.Files#1 as range 2
      //DEBUG: e.CommandLine#1: 7
      //DEBUG: e.Files#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.CommandLine#1/7 } </9 Tile{ HalfReuse: & Map/5 } Tile{ HalfReuse: & Link$2\1/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitFunc, 0, 1, 5},
      {refalrts::icReinitFunc, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 6, 1, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Link

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Link(
  "Link",
  scope_Link::raa,
  scope_Link::functions,
  scope_Link::idents,
  scope_Link::numbers,
  scope_Link::strings,
  scope_Link::filename
);
refalrts::RefalFunction& Link = descr_Link;

} // unnamed namespace

#else
static refalrts::FnResult func_Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Link/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # NoCppCompiler e.idx
    // </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term(  & ident_NoCppCompiler<int>::name, context[5] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Link/4 # NoCppCompiler/5 e.Files#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) e.idx
  // </0 & Link/4 (/5 e.CommandLine#1/7 )/6 e.Files#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CommandLine#1 as range 7
  // closed e.Files#1 as range 2
  //DEBUG: e.CommandLine#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & System/4 } Tile{ AsIs: e.CommandLine#1/7 } </9 Tile{ HalfReuse: & Map/5 } Tile{ HalfReuse: & Link$2\1/6 AsIs: e.Files#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & System );
  refalrts::reinit_name( context[5], & Map );
  refalrts::reinit_name( context[6], & gen_Link_S2L1 );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Link(func_Link, "Link");
refalrts::RefalFunction& Link = descr_Link;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GetBaseNameLowerCase {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & DoGetFileName
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('p'), 2},
      {refalrts::icCharRightSave, 6, static_cast<unsigned char>('p'), 2},
      {refalrts::icCharRightSave, 7, static_cast<unsigned char>('c'), 2},
      {refalrts::icCharRightSave, 8, static_cast<unsigned char>('.'), 2},
      // closed e.FileName#1 as range 2
      //DEBUG: e.FileName#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} 'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 HalfReuse: >/8 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 8},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GetBaseNameLowerCase

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_GetBaseNameLowerCase(
  "GetBaseNameLowerCase",
  scope_GetBaseNameLowerCase::raa,
  scope_GetBaseNameLowerCase::functions,
  scope_GetBaseNameLowerCase::idents,
  scope_GetBaseNameLowerCase::numbers,
  scope_GetBaseNameLowerCase::strings,
  scope_GetBaseNameLowerCase::filename
);
refalrts::RefalFunction& GetBaseNameLowerCase = descr_GetBaseNameLowerCase;

} // unnamed namespace

#else
static refalrts::FnResult func_GetBaseNameLowerCase(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 'c'/7 'p'/6 'p'/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name( context[4], & DoGetFileName );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_GetBaseNameLowerCase(func_GetBaseNameLowerCase, "GetBaseNameLowerCase");
refalrts::RefalFunction& GetBaseNameLowerCase = descr_GetBaseNameLowerCase;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoGetFileName {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Lower
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & DoGetFileName/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // e.idx '/'
      // </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('/'), 9},
      // closed e.FileName#1 as range 9(2)
      //DEBUG: e.FileName#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/9(2) '/'/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // e.idx '\\'
      // </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icCharRightSave, 5, static_cast<unsigned char>('\\'), 9},
      // closed e.FileName#1 as range 9(2)
      //DEBUG: e.FileName#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/9(2) '\\'/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // e.idx s.idx
      // </0 & DoGetFileName/4 e.FileName#1/2 s.Last#1/5 >/1
      {refalrts::icSave, 0, 9, 2},
      {refalrts::icsVarRight, 0, 5, 9},
      // closed e.FileName#1 as range 9(2)
      //DEBUG: s.Last#1: 5
      //DEBUG: e.FileName#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/9(2) } >/6 </7 & Lower/8 Tile{ AsIs: s.Last#1/5 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icSpliceTile, 6, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      //
      // </0 & DoGetFileName/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoGetFileName

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoGetFileName(
  "DoGetFileName",
  scope_DoGetFileName::raa,
  scope_DoGetFileName::functions,
  scope_DoGetFileName::idents,
  scope_DoGetFileName::numbers,
  scope_DoGetFileName::strings,
  scope_DoGetFileName::filename
);
refalrts::RefalFunction& DoGetFileName = descr_DoGetFileName;

} // unnamed namespace

#else
static refalrts::FnResult func_DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DoGetFileName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx '/'
    // </0 & DoGetFileName/4 e.FileName#1/2 '/'/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_right( '/', context[9], context[10] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 9(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/9(2) '/'/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '\\'
    // </0 & DoGetFileName/4 e.FileName#1/2 '\\'/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[5] = refalrts::char_right( '\\', context[9], context[10] );
    if( ! context[5] )
      continue;
    // closed e.FileName#1 as range 9(2)
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/9(2) '\\'/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx s.idx
    // </0 & DoGetFileName/4 e.FileName#1/2 s.Last#1/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_right( context[5], context[9], context[10] ) )
      continue;
    // closed e.FileName#1 as range 9(2)
    //DEBUG: s.Last#1: 5
    //DEBUG: e.FileName#1: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/9(2) } >/6 </7 & Lower/8 Tile{ AsIs: s.Last#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], & Lower ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[6], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & DoGetFileName/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_DoGetFileName(func_DoGetFileName, "DoGetFileName");
refalrts::RefalFunction& DoGetFileName = descr_DoGetFileName;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Lower_L1S1L1 {
    static const char *filename = "srefc.cpp";
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      // </0 & Lower\1$1\1/4 s.Char#1/5 e.UpLo-B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo-E#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEPrepare, 0, 6, 2},
      {refalrts::icEStart, 0, 6, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icsRepeatLeft, 8, 5, 10},
      {refalrts::icsVarLeft, 0, 9, 10},
      // closed e.UpLo-E#3 as range 10(2)
      //DEBUG: s.Char#1: 5
      //DEBUG: e.UpLo-B#3: 6
      //DEBUG: s.Lower#3: 9
      //DEBUG: e.UpLo-E#3: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lower\1$1\1/4 s.Char#1/5 e.UpLo-B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo-E#3/10(2) {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Lower3 #9/1 ]] }
      {refalrts::icReinitSVar, 0, 9, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icFail, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Lower_L1S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Lower_L1S1L1(
  "Lower\\1$1\\1",
  scope_gen_Lower_L1S1L1::raa,
  scope_gen_Lower_L1S1L1::functions,
  scope_gen_Lower_L1S1L1::idents,
  scope_gen_Lower_L1S1L1::numbers,
  scope_gen_Lower_L1S1L1::strings,
  scope_gen_Lower_L1S1L1::filename
);
refalrts::RefalFunction& gen_Lower_L1S1L1 = descr_gen_Lower_L1S1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Lower_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Lower\1$1\1/4 s.Char#1/5 e.UpLo-B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo-E#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::repeated_stvar_left( context[8], context[5], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[10], context[11] ) )
      continue;
    // closed e.UpLo-E#3 as range 10(2)
    //DEBUG: s.Char#1: 5
    //DEBUG: e.UpLo-B#3: 6
    //DEBUG: s.Lower#3: 9
    //DEBUG: e.UpLo-E#3: 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Lower\1$1\1/4 s.Char#1/5 e.UpLo-B#3/6 s.Char#1/8 s.Lower#3/9 e.UpLo-E#3/10(2) {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Lower3 #9/1 ]] }
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Lower_L1S1L1(func_gen_Lower_L1S1L1, "Lower\\1$1\\1");
refalrts::RefalFunction& gen_Lower_L1S1L1 = descr_gen_Lower_L1S1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Lower_L1 {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_Lower_L1S1L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & Lower\1/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // s.idx e.idx
      // </0 & Lower\1/4 s.Char#1/5 e.Uppers-B#2/6 s.Char#1/8 e.Uppers-E#2/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icEPrepare, 0, 6, 15},
      {refalrts::icEStart, 0, 6, 15},
      {refalrts::icSave, 0, 17, 15},
      {refalrts::icsRepeatLeft, 8, 5, 17},
      // closed e.Uppers-E#2 as range 17(2)
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Uppers-B#2: 6
      //DEBUG: e.Uppers-E#2: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Char#1/5 e.Uppers-B#2/6 {REMOVED TILE} e.Uppers-E#2/17(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 }"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"/9 </11 & @create_closure@/12 & Lower\1$1\1/13 Tile{ AsIs: s.Char#1/8 } >/14 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocString, 0, 0, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 2, 12},
      {refalrts::icAllocFunc, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 9, 13, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // s.idx e.idx
      // </0 & Lower\1/4 s.Char#1/5 e.Uppers#2/2 >/1
      // closed e.Uppers#2 as range 2
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Uppers#2: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Lower\1/4 s.Char#1/5 e.Uppers#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
      {refalrts::icReinitSVar, 0, 5, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Lower_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_Lower_L1(
  "Lower\\1",
  scope_gen_Lower_L1::raa,
  scope_gen_Lower_L1::functions,
  scope_gen_Lower_L1::idents,
  scope_gen_Lower_L1::numbers,
  scope_gen_Lower_L1::strings,
  scope_gen_Lower_L1::filename
);
refalrts::RefalFunction& gen_Lower_L1 = descr_gen_Lower_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Lower_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & Lower\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx e.idx
    // </0 & Lower\1/4 s.Char#1/5 e.Uppers-B#2/6 s.Char#1/8 e.Uppers-E#2/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      if( ! refalrts::repeated_stvar_left( context[8], context[5], context[17], context[18] ) )
        continue;
      // closed e.Uppers-E#2 as range 17(2)
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Uppers-B#2: 6
      //DEBUG: e.Uppers-E#2: 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Char#1/5 e.Uppers-B#2/6 {REMOVED TILE} e.Uppers-E#2/17(2) {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 }"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"/9 </11 & @create_closure@/12 & Lower\1$1\1/13 Tile{ AsIs: s.Char#1/8 } >/14 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[9], context[10], "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], & refalrts::create_closure ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], & gen_Lower_L1S1L1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], & Fetch );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[6], context[7], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & Lower\1/4 s.Char#1/5 e.Uppers#2/2 >/1
  // closed e.Uppers#2 as range 2
  //DEBUG: s.Char#1: 5
  //DEBUG: e.Uppers#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Lower\1/4 s.Char#1/5 e.Uppers#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_Lower_L1(func_gen_Lower_L1, "Lower\\1");
refalrts::RefalFunction& gen_Lower_L1 = descr_gen_Lower_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Lower {
    static const char *filename = "srefc.cpp";
    static refalrts::RefalFunction *functions[] = {
      & gen_Lower_L1,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 12, 0, 0},
      // </0 & Lower/4 s.Char#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      //DEBUG: s.Char#1: 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 & Fetch/7"ABCDEFGHIJKLMNOPQRSTUVWXYZ"/8 </10 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Lower\1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/11 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocString, 0, 0, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 6, 10, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Lower

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Lower(
  "Lower",
  scope_Lower::raa,
  scope_Lower::functions,
  scope_Lower::idents,
  scope_Lower::numbers,
  scope_Lower::strings,
  scope_Lower::filename
);
refalrts::RefalFunction& Lower = descr_Lower;

} // unnamed namespace

#else
static refalrts::FnResult func_Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Lower/4 s.Char#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Char#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7"ABCDEFGHIJKLMNOPQRSTUVWXYZ"/8 </10 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Lower\1/4 AsIs: s.Char#1/5 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_Lower_L1 );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_Lower(func_Lower, "Lower");
refalrts::RefalFunction& Lower = descr_Lower;

} // unnamed namespace

#endif

//End of file
