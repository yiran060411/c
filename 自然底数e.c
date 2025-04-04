#include <stdio.h>
int main(void)
{
    float p = 1.0;   // principal本金
    double ir = 1.0; // interest rate利率
    int count = 1;   // count计数器
    double gain;     // 收益
    printf("Please input a new count:\n");
    while (scanf("%d",&count)){
        for(int n = 1;n <= count;n++){
            gain = p;
            for(int i = 1;i <= n;i++){
                gain *= (1.0 + ir / n); // 计算收益
            }
            printf("%d gain = %20.18f\n", n, gain);
        }
        printf("Please input a new count:\n");
    }
    return 0;

}