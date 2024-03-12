#include <stdio.h>
#include <stdlib.h>

#if 0
void func(void)
{
    int x = 0;
    x = x + 1;
    printf("%p->%d\n", &x, x);
}

void func1(void)
{
    static int x = 0;
    x = x + 1;
    printf("%p->%d\n", &x, x);
}

int main()
{

    // auto int i;
    // printf("i=%d\n", i);
    // out:i=21915，每次都不一样

    // static int i;
    // printf("i=%d\n", i);
    // out:i=1

    // func();
    // func();
    // func();
    // out:：
    // 0x7ffc3c4ca4f4->1
    // 0x7ffc3c4ca4f4->1
    // 0x7ffc3c4ca4f4->1
    // 三次地址看着一样
    // 但是是每次函数开始取用，结束销毁的
    // 只是gcc刚好都取的栈上同一块地址

    func1();
    func1();
    func1();
    // out:：
    // 0x55fd83c96014->1
    // 0x55fd83c96014->2
    // 0x55fd83c96014->3

    exit(0);
}
#endif

#if 0
int i = 100;

void func(int i)
{
    printf("i=%d\n", i);
}

int main()
{

    int i = 3;

    // printf("i=%d\n", i);
    // out:
    // i=3

    // {
    //     printf("i=%d\n", i);
    // }
    // out:
    // i=3

    // {
    //     i = 5;
    //     printf("i=%d\n", i);
    // }
    // out:
    // i=5

    // func(i);

    exit(0);
}
#endif

int i = 0;

void print_star(void)
{
    for (i = 0; i < 5; i++)
        printf("*");
    printf("\n");
    printf("[%s]i=%d\n", __FUNCTION__, i);
}

int main()
{
    for (i = 0; i < 5; i++)
        print_star();
    printf("\n");

    // out:
    // *****
    // [print_star] i = 5

    exit(0);
}