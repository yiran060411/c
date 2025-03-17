#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int count = 0;
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                count++;
                break;
            }
        }
    }

    printf("Number of common characters: %d\n", count);

    return 0;
}