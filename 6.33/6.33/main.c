#include <stdio.h>

// 遞迴二分搜尋函數
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // 找不到時返回 -1
    }
    int mid = low + (high - low) / 2; // 計算中間索引
    if (array[mid] == key) {
        return mid; // 找到時返回索引
    }
    else if (array[mid] > key) {
        return binarySearch(array, low, mid - 1, key); // 搜尋左半部分
    }
    else {
        return binarySearch(array, mid + 1, high, key); // 搜尋右半部分
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // 已排序陣列
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("Enter the number to search: ");
    scanf_s("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("Key found at index %d.\n", result);
    }
    else {
        printf("Key not found.\n");
    }

    return 0;
}
