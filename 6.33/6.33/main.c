#include <stdio.h>

// ���j�G���j�M���
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // �䤣��ɪ�^ -1
    }
    int mid = low + (high - low) / 2; // �p�⤤������
    if (array[mid] == key) {
        return mid; // ���ɪ�^����
    }
    else if (array[mid] > key) {
        return binarySearch(array, low, mid - 1, key); // �j�M���b����
    }
    else {
        return binarySearch(array, mid + 1, high, key); // �j�M�k�b����
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // �w�Ƨǰ}�C
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
