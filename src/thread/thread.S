#if __arm__
#include "arm/__set_thread_area.s"
#include "arm/__unmapself.s"
#include "arm/clone.s"
#include "arm/syscall_cp.s"
#include "arm/tls.s"
#elif __LP64__

#elif __i386__
#error
#endif