#ifndef TIMING_H
#define TIMING_H

#include <time.h>
#include <sys/time.h>
#include <stdio.h>
 
#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif

namespace timing {
  void get_time(timespec& ts);
  double timeDiff(timespec& ts1, timespec& ts2);
}
  
#endif //TIMING_H
