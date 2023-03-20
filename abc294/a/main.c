#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int lasta[n];  // lasta を初期化する必要はありません
    int count = 0; // 偶数の数をカウントする変数を追加する
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            lasta[count] = a[i];
            count++; // 偶数の数をカウントする
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d", lasta[i]);
        if (i != count - 1) {
            printf(" ");
        }
    }
    printf("\n"); // 改行を追加する

    return 0;
}
