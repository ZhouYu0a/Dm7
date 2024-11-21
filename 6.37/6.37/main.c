#include <stdio.h>

// ���j��ơG���}�C�����̤j��


int main() {
    int array[] = { 1, 11, 7, 2, 9, 5 };
    int size = sizeof(array) / sizeof(array[1]);

    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int max = recursiveMaximum(array, size);
    printf("Maximum value in the array: %d\n", max);
    return 0;
}
    int recursiveMaximum(int array[], int size)
    {
        if (size == 1) 
        {
            return array[0]; // ��}�C�u�Ѥ@�Ӥ����ɡA��^�Ӥ���
        }
        // �����e�̫�@�Ӥ����P��l�����̤j��
        int maxInRest = recursiveMaximum(array, size - 1);
        return (array[size - 1] > maxInRest) ? array[size - 1] : maxInRest;
    }
