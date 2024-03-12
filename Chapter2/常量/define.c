#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define ADD 2 + 3
#define ADD1 (2 + 3)

#define MAX(a, b) (a > b ? a : b)
#define MAX1(a, b) ((a) > (b) ? (a) : (b))

#define MAX2(a, b)               \
    ({                           \
        int A = a, B = b;        \
        ((A) > (B) ? (A) : (B)); \
    })

#define MAX3(a, b)               \
    ({                           \
        typeof(a) A = a, B = b;  \
        ((A) > (B) ? (A) : (B)); \
    })

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    // printf("%d\n", ADD * ADD);
    // 相当于 2+3*2+3
    // 故输出11而不是25
    // printf("%d\n", ADD1 * ADD1);
    // 相当于(2+3)*(2+3)
    // 正常输出25

    int i = 5, j = 3;
    // printf("%d\n", MAX(i, j));
    // 输出5

    // printf("%d\n", MAX(i, j * 2));
    // 输出6

    // printf("i=%d\tj=%d\n", i, j);
    // printf("%d\n", MAX1(i++, j++));
    // printf("i=%d\tj=%d\n", i, j);
    // 输出：
    // i = 5 j = 3
    // 6
    // i = 7 j = 4
    // 为什么i自增了两次？
    // 预处理结果
    // printf("%d\n", ((i++) + (j++) ? (i++) : (j++)));

    printf("i=%d\tj=%d\n", i, j);
    printf("%d\n", MAX2(i++, j++));
    printf("i=%d\tj=%d\n", i, j);

    exit(0);
}