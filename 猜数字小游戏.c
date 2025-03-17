#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand (time(0));
    int randomNumber = rand() % 100 + 1;
    int count = 0;
    int a = 0;
printf("我已经想好了一个1-100之间的数。\n");
do {
    printf("请猜这个1到100之间的数：");
    scanf("%d", &a);
    count++;
    if (a > randomNumber) {
        printf("太大了！\n");
    } else if (a < randomNumber) {
        printf("太小了！\n");
    } else {
        printf("恭喜你，猜对了！\n");
        printf("你一共猜了%d次。\n", count);
    }
    } while (a != randomNumber);
    return 0;
}