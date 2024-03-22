#include <stdio.h>
#include <stdlib.h>

#define LEFT 1
#define RIGHT 100

int main()
{
    int i;
    int sum = 0;
    int start, end = 10;

    i = LEFT;

loop:
    sum += i;
    i++;

    if (i <= RIGHT)
        goto loop;

    printf("sum = %d\n", sum);

#if 0
    i = LEFT;
    for (;;)
    {
        sum += i;
        i++;
        if (i > RIGHT)
            break;
    }
    printf("sum = %d\n", sum);
#endif

#if 0
do
{
    menu();
    scanf();
    if()
        something();
} while ();

#endif

#if 0
    printf("Please enter:\n");
    scanf("%d", &start);

    while (start <= end)
    {
        sum += start;
        start++;
    }

    do
    {
        sum += start;
        start++;
    } while (start <= end);

    printf("start = %d\n", start);
    printf("end = %d\n", end);
#endif

#if 0
    i = LEFT;
    do
    {
        sum += i;
        i++;
    } while (i <= RIGHT);
    printf("sum=%d\n", sum);
#endif

#if 0
    while (i <= RIGHT)
    {
        sum += i;
        i++;
    }
    printf("sum=%d\n", sum);
#endif

    exit(0);
}