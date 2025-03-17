#include <stdio.h>

int main(){
    int number;
    int sum = 0;
    int count = 0;

    printf("请输入数字（输入-1结束）：\n");

    do {
        if (scanf("%d", &number) != 1) {
            printf("输入无效，请输入一个整数。\n");
            // 清除输入缓冲区
            while (getchar() != '\n');
            continue;
        }
        if (number != -1){
            sum += number;
            count++;
        }
    } while(number != -1);

    if (count == 0) {
        printf("没有输入有效的数字。\n");
    } else {
        printf("平均数是：%f\n", 1.0 * sum / count);
    }

    return 0;
}