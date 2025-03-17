#include <stdio.h>

// 打印ASCII表，分为16行6列
void printAsciiTable() {
    int row, col;
    // 表头
    printf("ASCII Table (16x6)\n");
    printf("Dec  Hex  Char   Dec  Hex  Char   Dec  Hex  Char   Dec  Hex  Char   Dec  Hex  Char   Dec  Hex  Char\n");
    printf("------------------------------------------------------------------------------------------------\n");

    // 打印表格内容
    for (row = 0; row < 16; row++) {
        for (col = 0; col < 6; col++) {
            int asciiValue = 32 + row + col * 16; // 计算ASCII值
            // 打印每个单元格的内容：十进制、十六进制和字符
            printf("%3d  %3X  %c     ", asciiValue, asciiValue, (asciiValue >= 32 && asciiValue <= 126) ? asciiValue : ' ');
        }
        printf("\n"); // 换行
    }
}

int main() {
    printAsciiTable(); // 调用打印ASCII表的函数
    return 0;
}