#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int results[13] = { 0 }; // �ΨӰO���U���I�ƩM�X�{�����ơA����2��12����
    int die1, die2, sum;
    int totalRolls = 36000; // �`�@���Y����

    // ��l���H���ƥͦ���
    srand(time(NULL));

    // �������Y��l
    for (int i = 0; i < totalRolls; i++) {
        die1 = rand() % 6 + 1; // ����1��6���H����
        die2 = rand() % 6 + 1; // ����1��6���H����
        sum = die1 + die2;    // �p�������l���I�ƩM
        results[sum]++;       // �O�������I�ƩM������
    }

    // ���L���G
    printf("�I�ƩM\t�X�{����\t���v\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, results[i], (results[i] / (double)totalRolls) * 100);
    }

    // �ˬd7�O�_�����`���ƪ�1/6
    double expectedProbability = 1.0 / 6.0; // �w�����v
    double actualProbability = results[7] / (double)totalRolls;

    if (abs(actualProbability - expectedProbability) < 0.01) {
        printf("�M��7���X�{���v����1/6�A���G�X�z�C\n");
    }
    else {
        printf("�M��7���X�{���v�P1/6�t�Z���j�A�i��ݭn��h���Y���ơC\n");
    }

    return 0;
}
