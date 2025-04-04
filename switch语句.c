#include <stdio.h>
int main()
{
    /*
    printf("请输入需要验证的一周中的天数:");
    int day;
    scanf("%d", &day);
    switch (day % 7) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday");
            break; // break表示退出switch语句
        case 6:
        case 7:
            printf("weekend");
    }
    */
    char grade;
    printf("请输入您的成绩等级：");
    scanf("%c", &grade);
    printf("你的成绩范围是:");
    switch (grade)
    {
    case 'A':
        printf("85~100\n");
        break;
    case 'B':
        printf("70~84\n");
        break;
    case 'C':
        printf("60~69\n");
        break;
    case 'D':
        printf("<60\n");
        break;
    default:
        printf("enter date error!\n");
    }
    return 0;
}