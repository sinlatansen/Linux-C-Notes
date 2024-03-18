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

    exit(0);
}