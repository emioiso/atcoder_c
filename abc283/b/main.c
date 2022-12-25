// 写経　#37525767

// 問題文と可能な限り同じ変数名にする。
// 写経した後に途中の変数の出力結果を問題文の例題と同じ出力結果になるか確認する。
// for文の{}が無い場合は一行だけがfor文の中で繰り返される。
//

#include <stdio.h>

int	main(void)
{

	int N;

	scanf("%d",&N);
	// printf("N=%d\n",N);

	int A[N + 1];
	for(int i = 0; i < N; i++){
		scanf("%d",&A[i]);
		// printf("A[%d]=%d\n",i,A[i]);
	}

	int Q;
	scanf("%d",&Q);
	// printf("q=%d\n",q);

	int query, k, x;

	for (int i = 0; i < Q; i++)
	{
		scanf("%d",&query);
		// printf("t=%d\n",t);

		if(query == 1){
			scanf("%d",&k);
			scanf("%d",&x);
			A[k - 1] = x;
		} else {
			scanf("%d",&k);
			printf("%d\n",A[k - 1]);
		}
	}

	return (0);
}
