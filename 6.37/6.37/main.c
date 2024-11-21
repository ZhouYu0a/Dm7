#include <stdio.h>

// 遞迴函數：找到陣列中的最大值


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
            return array[0]; // 當陣列只剩一個元素時，返回該元素
        }
        // 比較當前最後一個元素與其餘部分最大值
        int maxInRest = recursiveMaximum(array, size - 1);
        return (array[size - 1] > maxInRest) ? array[size - 1] : maxInRest;
    }
