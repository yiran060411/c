#include <stdio.h> 
int main(void)
{
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 数组
    char buffer[65];                                        // buffer数组,里面的数字表示数组大小，指最多可存储多少个字符
    int num, radix, index = 0;                              // index表示数组下标，radix表示进制
    printf("Please enter a decimal number and a radix:\n");
    scanf("%d %d", &num, &radix);                            // 输入十进制数和进制
    do
    {
        buffer[index++] = digits[num % radix]; // 取余数
        num /= radix;                          // 除以进制
    } while (num > 0); // 当num大于0时继续循环
    while (index > 0){
        printf("%c", buffer[--index]); // 打印字符
    }
    printf("\n");
    return 0;
}