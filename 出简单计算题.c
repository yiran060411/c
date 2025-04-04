#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int value1, value2;
    const int NUMBER_OF_QUESTIONS = 10; // 总共的问题数量
    int count = 0, correctCount = 0;    // count记录当前问题数，correctCount记录正确答案数
    int answer;

    srand((int)time(NULL)); // 使用当前时间初始化随机数种子

    printf("Welcome to subtraction test bed--\n");

    while (count < NUMBER_OF_QUESTIONS) // 循环直到达到问题数量
    {
        value1 = rand() % 100; // 生成第一个随机数（0-99）
        value2 = rand() % 100; // 生成第二个随机数（0-99）

        // 确保 value1 >= value2
        if (value1 < value2)
        {
            value1 = value1 ^ value2;
            value2 = value1 ^ value2;
            value1 = value1 ^ value2;
        }

        printf("%d - %d = ", value1, value2); // 打印减法问题
        scanf("%d", &answer); // 用户输入答案

        if (value1 - value2 == answer) // 检查答案是否正确
        {
            printf("You are smart!\n");
            correctCount++; // 正确答案计数加1
        }
        else
        {
            printf("You are wrong!\n");
        }

        count++; // 问题计数加1
    }

    printf("You answered %d out of %d questions correctly.\n", correctCount, NUMBER_OF_QUESTIONS); // 打印最终结果

    return 0;
}