#include <stdio.h>
int	main(void)
{
	int	n,s,t,w;

	scanf("%d%d%d%d",&n,&s,&t,&w);
	// printf("n=%d s=%d t=%d\nw=%d\n",n,s,t,w);

	int a[n];
	int count = 0; //高橋くんがベストボディーの日をカウントする変数。
	if(s <= w && w <= t){
		// printf("w=%d\n", w);
		count++;
	}
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d",&a[i]);
		// printf("a[i]=%d\n",a[i]);
		w = w + a[i];
		// printf("w=%d\n", w);
		if(s <= w && w <= t){
			// printf("w=%d\n", w);
			count++;
		}
	}
	printf("%d\n",count);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int n;	//体重を記録した日数
// 	int s;	//ベストボディーの基準
// 	int t;	//ベストボディーの基準
// 	int w;	//1 日目の高橋君の体重を表す整数
// 	int a[100001];	//N−1 行のうち i 行目には i+1 日目の体重の変化量を表す整数 A i+1

// 	int i;

// 	scanf("%d%d%d%d",&n,&s,&t,&w);
// 	// printf("%d %d %d\n%d\n",n,s,t,w);

// 	for (i = 0; i < n - 1; i++)
// 	{
// 		scanf("%d",&a[i]);
// 		printf("%d\n", a);
// 	}

		// if(n > s && n < t){
		// 	printf("%d", a);
		// }

// 	return (0);
// }
