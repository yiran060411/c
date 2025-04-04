#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    printf("%d\n", RAND_MAX);
    srand((int)time(NULL));
    int magicnum = rand() * 1.0 / RAND_MAX * 100; // 生成随机数
    int num;
    printf("input your number:");
    scanf("%d", &num);
    while (magicnum != num)
    {
        if (magicnum < num)
            printf("your number is too big\n");
        else
            printf("your number is too small\n");
        printf("input your number:");
        scanf("%d", &num);
    }
    printf("you are right\n");
    return 0;
}
