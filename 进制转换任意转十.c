#include <stdio.h>

int main()
{
    int base;
    long long ans = 0;
    scanf("%d", &base);
    char ch;
    getchar();
    while ((ch = getchar()) != '\n')
    {
        int digit = ('0' <= ch && ch <= '9') ? ch - '0' : ch - 'A' + 10;
        //  ?  :  条件表达式
        ans = ans * base + digit;
        // 若该数为123f：{[(1 * 10 + 2) * 10 + 3] * 10 + 15}
    }
    printf("%lld\n", ans);
    return 0;
}