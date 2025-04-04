#include <stdio.h>
int main(void){
    char buffer[100];
    int num,radix,index = 0;
    printf("Please enter a decimal number and a radix:\n");
    scanf("%d %d",&num,&radix);
    do{
        int rem = num % radix; // 取余数，remainder是余数的意思
        buffer[index++] = (rem >= 0 && rem <= 9) ? (rem + '0') : (rem - 10 + 'A'); // 将余数转换为对应的字符
        num = num / radix; // 除以进制

    }while(num > 0); // 当num大于0时继续循环
    while(index > 0){
        printf("%c", buffer[--index]); // 打印字符
    }
    printf("\n");
    return 0;   
}