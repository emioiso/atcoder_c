// 写経 #22519039

#include<stdio.h>
int main(void)
{
	//すぬけ君の人数
	int N;
	//お菓子の種類
	int K;
	//それぞれのお菓子を何人持っているかを要素に持つ配列
	int d[101];
	//それぞれのお菓子を持っているすぬけ君リスト
	int snacks[101] = {0};
	//お菓子を持ってない人何人だ～？
	int cnt=0;

	scanf("%d",&N);
	// printf("N=%d",N);

	scanf("%d", &K);
	// printf("K=%d\n",K);

	for(int i=1;i<=K;i++){
	scanf("%d",&d[i]);
	// printf("お菓子id %d を持っている%d人のid", i,d[i]);

		for(int j=0;j<d[i];j++){
			int a;//人のid
			scanf("%d", &a);
			// printf(" %d",a);
			snacks[a] += 1;
			// printf("snacks[A[i][j]-1]=%d\n", snacks[A[i][j]-1]);
		}
		// printf("\n");
	}
	for (int i = 1; i <= N; i++)
	{
		if(snacks[i] == 0){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
