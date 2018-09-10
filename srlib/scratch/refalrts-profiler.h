#ifndef RefalRTS_PROFILER_H_
#define RefalRTS_PROFILER_H_

#include <string.h>     // memset
#include <time.h>

#include "refalrts.h"
#include "refalrts-diagnostic-config.h"


//==============================================================================
// Упрощённый профилировщик
//==============================================================================

namespace refalrts {

class Profiler {
public:
  enum State {
    cInRuntime,
    cInRuntimeCopy,
    cInPatternLinear,
    cInPatternRepeatedEVar,
    cInPatternRepeatedTVar,
    cInPatternELoop,
    cInPatternELoopRepeatedEVar,
    cInPatternELoopRepeatedTVar,
    cInResultLinear,
    cInResultCopy
  };

private:
  enum BaseCounter {
    cCounter_RuntimeTime,
    cCounter_NativeTime,
    cCounter_LinearPatternTime,
    cCounter_RepeatedEvarOutsideECycle,
    cCounter_RepeatedTvarOutsideECycle,
    cCounter_RepeatedEvarInsideECycle,
    cCounter_RepeatedTvarInsideECycle,
    cCounter_ContextCopyTime,
    cCounter_ECycleClearTime,
    cCounter_LinearResultTime,
    cCounter_TEvarCopyTime,
    cCounter_TOTAL
  };

  clock_t m_counters[cCounter_TOTAL];
  clock_t m_prev_cutoff;
  State m_current_state;
  DiagnosticConfig *m_diagnostic_config;

  struct TimeItem {
    const char *name;
    unsigned long counter;
  };

  static int reverse_compare(const void *left_void, const void *right_void);
  void print_statistics();

public:
  Profiler(DiagnosticConfig *diagnostic_config);

  void start_profiler();
  void end_profiler();
  void read_counters(unsigned long counters[]);

  void start_generated_function();
  void stop_sentence();
  void start_e_loop();
  void start_repeated_evar();
  void start_repeated_tvar();
  void stop_repeated();
  void start_result();
  void start_copy();
  void stop_copy();
  void stop_function();
};

inline Profiler::Profiler(DiagnosticConfig *diagnostic_config)
  : m_prev_cutoff(0)
  , m_current_state(cInRuntime)
  , m_diagnostic_config(diagnostic_config)
{
  memset(m_counters, '\0', sizeof(m_counters));
}

}  // namespace refalrts


#endif  // RefalRTS_PROFILER_H_
