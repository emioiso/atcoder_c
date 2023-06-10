#include <stdio.h>
#include <stdlib.h>

int main() {
    char p, q;
    scanf("%c %c", &p, &q);
	// printf("%c %c\n", p, q);

    int distances[] = {3, 1, 4, 1, 5, 9};  // 隣り合う点の距離の配列
    int totalDistance = 0;

    // アスキーコード確認してる
    // int a = 'A';
    // printf("aIndex = %d\n", a);
    // int b = 'B';
    // printf("bIndex = %d\n", b);
    // int c = 'C';
    // printf("cIndex = %d\n", c);
    // int d = 'D';
    // printf("dIndex = %d\n", d);
    // int e = 'E';
    // printf("eIndex = %d\n", e);
    // int f = 'F';
    // printf("fIndex = %d\n", f);
    // int g = 'G';
    // printf("gIndex = %d\n", g);

    // p と q のインデックスを取得
    int pIndex = p - 'A';
    // printf("pIndex = %d\n", pIndex);
    int qIndex = q - 'A';
    // printf("qIndex = %d\n", qIndex);

    // p から q の間の距離を計算
	if(pIndex > qIndex){
		for (int i = qIndex; i < pIndex; i++) {
        totalDistance += distances[i];
		}
	}

	for (int i = pIndex; i < qIndex; i++) {
        totalDistance += distances[i];
    }
    printf("%d\n", totalDistance);
    return 0;
}
