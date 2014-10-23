#include <errno.h>
#include "pthread_impl.h"

#if !defined(__arm__)
int __clone(int (*func)(void *), void *stack, int flags, void *arg, ...)
{
	return -ENOSYS;
}
#endif