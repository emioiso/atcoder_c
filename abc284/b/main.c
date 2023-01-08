#include <stdio.h>

int main(void)
{
	int T;

	scanf("%d", &T); // T 個のテストケースを受け取る
	printf("T=%d\n", T);

	int i, j;
	for (i = 0; i < T; i++) { // 各テストケースについて処理を行う
		int N;
		scanf("%d", &N); // N 個の正整数を受け取る
		printf("N=%d\n", N);
		int A[N];
    		for (j = 0; j < N; j++) { // A1, A2, …, AN を受け取る
				scanf("%d", &A[j]);
				printf("A[j]=%d\n", A[j]);
		}
    	int count = 0; // 奇数の個数を数える変数
		for (j = 0; j < N; j++) { // 奇数の個数を数える
			if (A[j] % 2 == 1) { // A[j] が奇数の場合
				count++; // 奇数の個数をカウントする
			}
		}
		printf("%d\n", count); // 奇数の個数を出力する
	}
	return 0;
}
