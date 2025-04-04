#include <stdio.h>

int main() {
    // for循环用于已知需要循环多少遍的循环体系中
    // 行表头和列表头对应可以作为十六进制数来解释
    printf("\t十六进制编码的ASCII字符集charset(char|octal|decimal)\n");
    
    // 第一行：打印表头
    for (int i = 2; i < 8; i++) {
        printf("  |%-9d", i);
    }
    printf("\n");
    
    // 第二行：打印分隔线
    for (int i = 0; i < 12 * 6 + 4; i++) {
        printf("-");
    }
    printf("\n");
    
    // 第三行：打印字符集内容
    int code;
    for (int j = 0; j < 16; j++) { // 外层循环：列
        printf("%-2X", j); // 打印十六进制列头
        for (int i = 2; i < 8; i++) { // 内层循环：行
            code = i * 16 + j; // 计算ASCII码
            printf("|%c|%3o|%-5d", code, code, code);
            // 将code分别翻译为字符(char)、八进制(octal)、十进制(decimal)
        }
        printf(" |\n"); // 换行
    }
    return 0;
}