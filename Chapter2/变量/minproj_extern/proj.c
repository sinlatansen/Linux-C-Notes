#include <stdio.h>
#include <stdlib.h>

#include "proj.h"

extern int i;
// extern i;也是可以的，会有警告

void func(void)
{
    printf("[%s]i=%d\n", __FUNCTION__, i);
    exit(0);
}
