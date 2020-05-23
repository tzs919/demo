#ifndef COMMON_H
#define COMMON_H

#define DEBUG

#ifdef DEBUG
#include <assert.h>
#define ASSERT(f) assert(f)
#else
#define ASSERT(f) (void)0
#endif

#endif