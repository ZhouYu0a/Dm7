#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int results[13] = { 0 }; // 用來記錄各個點數和出現的次數，索引2到12有效
    int die1, die2, sum;
    int totalRolls = 36000; // 總共投擲次數

    // 初始化隨機數生成器
    srand(time(NULL));

    // 模擬投擲骰子
    for (int i = 0; i < totalRolls; i++) {
        die1 = rand() % 6 + 1; // 產生1到6的隨機數
        die2 = rand() % 6 + 1; // 產生1到6的隨機數
        sum = die1 + die2;    // 計算兩顆骰子的點數和
        results[sum]++;       // 記錄對應點數和的次數
    }

    // 打印結果
    printf("點數和\t出現次數\t機率\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, results[i], (results[i] / (double)totalRolls) * 100);
    }

    // 檢查7是否接近總次數的1/6
    double expectedProbability = 1.0 / 6.0; // 預期機率
    double actualProbability = results[7] / (double)totalRolls;

    if (abs(actualProbability - expectedProbability) < 0.01) {
        printf("和為7的出現機率接近1/6，結果合理。\n");
    }
    else {
        printf("和為7的出現機率與1/6差距較大，可能需要更多投擲次數。\n");
    }

    return 0;
}
