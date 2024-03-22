#include <stdio.h>
#include <stdlib.h>

/**
 *  score [90-100] A
 *  score [80-90)  B
 *  score [70-80)  C
 *  score [60-70)  D
 *  score [0-60)   E
 */

// 闰年的判断：能被4整除但不能被100整除，或者能被400整除

int main()
{

    int year;

    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is leap year.\n", year);
    else
        printf("%d is not leap year.\n", year);

#if 0
    int score;

    printf("Enter a score:[0,100]:\n");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        fprintf(stderr, "Input error!\n");
        exit(1);
    }

    if (score > 90)
        puts("A");
    else if (score > 80)
        puts("B");
    else if (score > 70)
        puts("C");
    else if (score > 60)
        puts("D");
    else
        puts("E");
#endif

#if 0
    if (score <= 100 && score >= 90)
        puts("A");
    if (score <= 90 && score >= 80)
        puts("B");
    if (score <= 80 && score >= 70)
        puts("C");
    if (score <= 70 && score >= 60)
        puts("D");
    if (score <= 60 && score >= 0)
        puts("E");
#endif

#if 0
    int a = 1, b = 1,c=2;
    if (a == b)
        if(b==c)
            printf("a==b\n");
    else
        printf("a!=b\n")
    注意：else看的是最近的if！！！
#endif

#if 0
    int a = 9, b = 10;

    if (b++ < a)
        printf("1\n");
    else
        printf("0\n");

    printf("a=%d,b=%d\n", a, b);

    printf("%d\n", (++b < a, ++a, b++));
#endif

    exit(0);
}