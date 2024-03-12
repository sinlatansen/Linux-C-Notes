#if 0
i++相当于i=i+1
i--相当于i=i-1

int i=1;
i++;表达式值为1，i值为2
++i;表达式值为2，i值为2

#endif

#include <stdio.h>
#include <stdlib.h>

#if 0
int main()
{
    int i = 1, j = 10, value;

    // value = i++ + ++j;
    // 相当于
    // j = j + 1;
    // value = i + j;
    // i = i + 1;
    // out:
    // i = 0 j = 11 value = 10

    // value = --i + j++;
    // i = i - 1;
    // value = i + j;
    // j = j + 1;
    // out:
    // i = 1 j = 12 value = 12

    // value = i++ + ++i - i-- + --i;
    // 避免单个变量多次自增或者自减
    // 不同编译器可能结果不同，也难为自己和他人

    // printf("i=%d\n", i);
    // printf("j=%d\n", j);
    // printf("value=%d\n", value);

    // printf("%d\n", i > j);

    int a = 1, b = 2, c = 3, d = 4;
    int m = 1, n = 1;

    // (m = a > b) && (n = c > d);
    // printf("m = %d\nn = %d\n", m, n);
    // a>b为假，所以左边为0，右边直接不判断了，n依旧为1而不是0！
    // out:
    // m = 0
    // n = 1

    (m = a > b) || (n = c > d);
    printf("m = %d\nn = %d\n", m, n);
    // a>b为假，所以左边为0，右边继续判断
    // out:
    // m = 0
    // n = 0

    exit(0);
}
#endif

#if 0
int main()
{
    int i = 0, j = 10, value;

    // int a = 6;
    // a -= a *= a += 3;
    // a -=..   81-81=0
    //  a *=.. 9*9=81给上面
    //    a += 3; 6+3=9给上面
    // 故a=0

    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(double));
    // out:
    // 4
    // 8

    // int a = 3;
    // float f = 3.9;
    // a = f;
    // printf("a=%d\n", a);
    // printf("f=%f\n", f);
    // out:
    // a=3
    // f=3.900000

    // int a = 3;
    // float f = 3.9;
    // a = (int)f; // 这个过程不改变f本身的地址和值
    // printf("a=%d\n", a);
    // printf("f=%f\n", f);
    // out:
    // a=3
    // f=3.900000

    exit(0);
}
#endif
