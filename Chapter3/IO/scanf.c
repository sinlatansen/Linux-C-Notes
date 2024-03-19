#include <stdio.h>
#include <stdlib.h>

/**
 *  int scanf(const char *format, 地址表);
 */

// #define STRSIZE 32
#define STRSIZE 3
// 除掉尾0占一个
// 相当于只能两个字符
// 但是这时候运行输入hello，不会报错
// 实际上是越界了

int main()
{
    int i;
    float f;
    char str[STRSIZE];
    int ret;
    char ch;

    printf("Please enter:\n");

    // scanf("%d", &i);
    // ch = getchar();

    // printf("i = %d, ch = %c\n", i, ch);
    /*
    out:
    Please enter:
    4 h
    i = 4, ch =
    ch被吞掉了
    */

    // scanf("%d", &i);
    // scanf("%*c%c", &ch);
    // 用 '%*c' 吃掉回车
    /*
    out:
    Please enter:
    5
    h
    i = 5, ch = h
    */

    printf("i = %d, ch = %c\n", i, ch);

#if 0
    // 输入a直接卡死，scanf直接放在循环中很危险
    // 需要加入校验，用ret接收scanf返回值
    while (1)
    {
        // scanf("%d", &i);

        ret = scanf("%d", &i);
        if (ret != 1)
        {
            printf("Enter Error!\n");
            break;
        }

        printf("i = %d\n", i);
    }
#endif

    // printf("Please enter fot str:\n");
    // 这种情况下，不能有任何间隔符
    // 输入hello world，只会得到hello
    // 对于scanf，不建议'%s'
    // scanf("%s", str);
    // printf("%s\n", str);

    // printf("Please enter for i[int]:\n");
    // 这里两个数字之间有','，输入就一定要有','
    // 最好不加，空格符可以是空格 回车 tab
    // scanf("%d,%f", &i, &f);
    // printf("i = %d\n", i);
    // printf("f = %f\n", f);

    exit(0);
}