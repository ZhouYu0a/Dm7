#include <stdio.h>

// ���j��ơG�ϦV��X�r��
void stringReverse(char str[], int index) {
    if (str[index] == '\0') {
        return; // �J��r�굲���A����j
    }
    stringReverse(str, index + 1); // ���j�B�z�U�@�Ӧr��
    putchar(str[index]); // �˧ǿ�X��e�r��
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str, 0);
    printf("\n");
    return 0;
}
