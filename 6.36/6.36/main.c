#include <stdio.h>

// 遞迴函數：反向輸出字串
void stringReverse(char str[], int index) {
    if (str[index] == '\0') {
        return; // 遇到字串結尾，停止遞迴
    }
    stringReverse(str, index + 1); // 遞迴處理下一個字元
    putchar(str[index]); // 倒序輸出當前字元
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str, 0);
    printf("\n");
    return 0;
}
