#include <stdio.h>
#include <stdlib.h>

/***
 * printf("%[修饰符]格式字符", 输出表项);
 *
 */

#define STRSIZE 10

int main()
{
    // printf("hello world\n");

    // char ch = 65;
    // printf("%c\n", ch);
    // out: A

    int i = 255;
    float f = 123.45678;
    char str[STRSIZE] = "helloworld";
    double dou = 123.456;
    long long l = 123456;
    // 不加\n，before while()存入了缓冲区，故不输出
    // printf("[%s:%d]before while().", __FUNCTION__, __LINE__);
    printf("[%s:%d]before while().\n", __FUNCTION__, __LINE__);
    while (1)
    {
    }
    // printf("[%s:%d]after while().", __FUNCTION__, __LINE__);
    printf("[%s:%d]after while().\n", __FUNCTION__, __LINE__);
    // printf("f = %8.1f\n", f);
    // out:f =    123.5
    // printf("i = %2d\n", i);
    // out: i = 123

    // printf("%-10.5s[over]\n", str);
    // printf("%+10.5s[over]\n", str);
    // out:
    // hello     [over]
    //      hello[over]

    // 同样对于i进行八进制核对十六进制的输出
    //  printf("i = %#o\n", i);
    //  out: i = 0377
    //  printf("i = %#x\n", i);
    //  out: i = 0xff

    // printf("dou = %lf\n", dou);
    // printf("l = %ld\n", l);
    // out:
    // dou = 123.456000
    // l = 123456

    // printf("hello world!\n");
    // 实参过多或者过少都会警告
    // printf("#d #e\n", i);
    // printf("#d #e\n", i, f, l);

    exit(0);
}

#if 0
func(FILE *fp, long i)
{
}

int main()
{
    FILE *fp;
    long a = 11;

    fp = fopen();

    // 可行，a定义了long型，与函数要求一致
    func(fp, a);

    // 早期的编译器不认可，这个12没有单位，不同编译器默认类型不同
    // 需要加上L修饰符
    func(fp, 12);
    func(fp, 12L);
    // 对于func(FILE *fp, long long i)
    func(fp, 12LL);
}
#endif

// 定义一年有多少秒
#define SEC_YEAR (60LL * 60LL * 24LL * 365LL)