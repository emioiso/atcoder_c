#include <stdio.h>

int main() {
    int h, w;
    scanf("%d %d", &h, &w);
    int a[h][w];
    char s[h][w+1]; // 文字列を格納する配列
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0) { // A[i][j]が0ならピリオド
                s[i][j] = '.';
            } else {
                s[i][j] = 'A' + a[i][j] - 1; // A[i][j]番目の大文字アルファベット
            }
        }
        s[i][w] = '\0'; // 文字列の終端文字を追加
        printf("%s\n", s[i]);
    }
    return 0;
}
