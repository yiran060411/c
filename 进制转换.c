#include <stdio.h>
#include <string.h>
#include <math.h>

// 函数声明
int convertToDecimal(const char *num, int base); // 将任意进制转换为十进制
void convertFromDecimal(int num, int base);     // 将十进制转换为任意进制

int main() {
    int choice;
    printf("欢迎使用进制转换程序！\n");
    printf("请选择转换类型：\n");
    printf("1. 任意进制转换为十进制\n");
    printf("2. 十进制转换为任意进制\n");
    printf("请输入你的选择（1 或 2）：");
    scanf("%d", &choice);

    if (choice == 1) {
        // 任意进制转十进制
        char num[256]; // 存储输入的数字
        int base;      // 存储进制
        printf("请输入数字：");
        scanf("%s", num);
        printf("请输入进制（2-36）：");
        scanf("%d", &base);

        if (base < 2 || base > 36) {
            printf("错误：进制必须在2到36之间！\n");
        } else {
            int decimal = convertToDecimal(num, base);
            printf("%s（%d进制）= %d（十进制）\n", num, base, decimal);
        }
    } else if (choice == 2) {
        // 十进制转任意进制
        int num, base;
        printf("请输入十进制数字：");
        scanf("%d", &num);
        printf("请输入目标进制（2-36）：");
        scanf("%d", &base);

        if (base < 2 || base > 36) {
            printf("错误：进制必须在2到36之间！\n");
        } else {
            printf("%d（十进制）= ", num);
            convertFromDecimal(num, base);
            printf("（%d进制）\n", base);
        }
    } else {
        printf("无效的选择！\n");
    }

    return 0;
}

// 将任意进制转换为十进制
int convertToDecimal(const char *num, int base) {
    int result = 0;
    int length = strlen(num); // 获取输入数字的长度
    int power = 0;            // 幂次

    // 从右到左处理数字
    for (int i = length - 1; i >= 0; i--) {
        char digit = num[i];  // 当前字符
        int digitValue;

        // 判断字符是数字还是字母
        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0'; // 数字字符转换为整数值
        } else if (digit >= 'A' && digit <= 'Z') {
            digitValue = digit - 'A' + 10; // 字母字符转换为整数值（A=10, B=11, ...）
        } else if (digit >= 'a' && digit <= 'z') {
            digitValue = digit - 'a' + 10; // 小写字母处理
        } else {
            printf("错误：无效的字符 %c\n", digit);
            return -1; // 返回错误
        }

        // 检查是否超出进制范围
        if (digitValue >= base) {
            printf("错误：数字 %c 超出 %d 进制范围\n", digit, base);
            return -1; // 返回错误
        }

        // 计算当前位的值并累加
        result += digitValue * pow(base, power);
        power++;
    }

    return result;
}

// 将十进制转换为任意进制
void convertFromDecimal(int num, int base) {
    char result[256] = {0}; // 存储结果
    int index = 0;          // 结果数组的索引

    // 处理负数
    if (num < 0) {
        printf("-");
        num = -num;
    }

    // 使用循环将十进制转换为任意进制
    do {
        int remainder = num % base;
        if (remainder < 10) {
            result[index++] = remainder + '0'; // 数字字符
        } else {
            result[index++] = remainder - 10 + 'A'; // 字母字符
        }
        num /= base;
    } while (num > 0);

    // 反转结果字符串
    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - 1 - i];
        result[index - 1 - i] = temp;
    }

    // 输出结果
    printf("%s", result);
}
// 将任意进制转换为十进制
long ConvertToDecimal(const char *num, int base) {
    long result = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        result = result * base + (num[i] - '0');
    }
    return result;
}

// 将十进制转换为任意进制
void ConvertFromDecimal(int num, int base) {
    char result[256] = {0};
    int index = 0;

    while (num > 0) {
        result[index++] = (num % base) + '0';
        num /= base;
    }

    if (index == 0) {
        result[index++] = '0';
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

