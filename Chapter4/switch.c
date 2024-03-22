#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;

    ch = getchar();

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("Ant\n");
        break;
    case 'b':
    case 'B':
        printf("Butterfly\n");
        break;
    case 'c':
    case 'C':
        printf("Cobra\n");
        break;
    default:
        printf("Input error");
        // break;
        // default可以不用
    }

#if 0
    int score;

    printf("Please enter:\n");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        fprintf(stderr, "EINVAL\n");
        exit(1);
    }

    switch (score / 10)
    {
    case 10:
    case 9:
        puts("A");
        break;
    case 8:
        puts("B");
        break;
    case 7:
        puts("C");
        break;
    case 6:
        puts("D");
        break;
    default:
        puts("E");
        break;
    }
#endif

    exit(0);
}