#include <stdio.h>

int main(void)
{
    int *p = NULL;
    int i;
    p = (int *)malloc(sizeof(int));
    if (p == NULL)
        return -1;
    printf("Hello world!\n");
    return 0;
}