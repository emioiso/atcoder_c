#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int powers[] = {1, 2, 4, 8}; // 2の累乗数の配列

    int used_powers[4] = {0}; // 使った2の累乗数を記録する配列
    int sum = 0; // 合計値を記録する変数
    for (int i = 3; i >= 0; i--) { // 大きい2の累乗数から順に見ていく
        while (sum + powers[i] <= N) { // 合計値がNを超えない限り、その2の累乗数を使い続ける
            used_powers[i]++;
            sum += powers[i];
        }
    }

    int count = 0;
    for (int i = 0; i < 4; i++) { // 使用した2の累乗数を出力する
        if (used_powers[i] > 0) {
            count++;
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < used_powers[i]; j++) {
            printf("%d\n", powers[i]);
        }
    }

    return 0;
}
