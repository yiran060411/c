#include <stdio.h>
int main(void){
    int n;
    printf("please input an n:");
    float gain;
    scanf("%d",&n);
    while(n != 0){
        gain =1.0;
        for(int i = 1; i <= n; i++){
            gain *= (1 + 1.0/n);
        }
        printf("\ngain = %f\n",gain);
        printf("\nplease input an n:");
        scanf("%d",&n);
    }
    return 0;
}