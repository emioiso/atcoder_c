#include <stdio.h>
int	main(void)
{
	int	n;
	int	p;
	int	q;
	int	r;
	int	s;

	scanf("%d%d%d%d%d",&n,&p,&q,&r,&s);
	// printf("%d %d %d %d %d\n",n,p,q,r,s);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
	}
	int tmp[n]; //p〜qの配列を取得する
	for (int i = p - 1; i <= q - 1; i++)
	{
		// printf("\na[i]=%d", a[i]);
		tmp[i] = a[i];
		// printf("\ntmp[i]=%d", tmp[i]);
	}
	// printf("\n");

	int tmp2[n];//r〜sの配列を取得する
	for (int i = r - 1; i <= s - 1; i++)
	{
		// printf("\na[i]=%d", a[i]);
		tmp2[i] = a[i];
		// printf("\ntmp2[i]=%d", tmp2[i]);
	}
	// printf("\n");

	int b[n];//bの空の配列を作る。
	int j = 0;
	for (int i = 0; i < p - 1; i++) // aの配列の0からa[p - 1]番目未満の要素をbの配列に代入する。
	{
		b[j] = a[i];
		// printf("%d ", b[i]);
		j++;
	}

	for (int i = r - 1; i <= s - 1; i++)//aの配列のa[r - 1]からa[s - 1]番目未満の要素をbの配列に代入する。
	{
		b[j] = a[i];
		// printf("%d ", b[i]);
		j++;
	}

	for (int i = q ; i < r - 1; i++)//aの配列のa[q]からa[r - 1]番目未満の要素をbの配列に代入する。
	{
		b[j] = a[i];
		// printf("%d ", b[i]);
		j++;
	}

	for (int i = p - 1; i < q; i++)//aの配列のa[p - 1]からa[q]番目未満の要素をbの配列に代入する。
	{
		b[j++] = a[i];
		// printf("%d ", b[i]);
	}

	for (int i = s; i <= n - 1; i++)//aの配列のa最後の要素にbの配列に代入する。
	{
		b[j++] = a[i];
		// printf("%d", b[i]);
		// printf("i=%d ", i);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", b[i]);
		if(i < n - 1){
			printf(" ");
		}
	}
	printf("\n");


	return (0);
}

// //写経 #38209317
// #include <stdio.h>
// int main() {

//     int P, Q, R, S, N, i, j;
//     scanf("%d%d%d%d%d", &N, &P, &Q, &R, &S);
//     int a[N], temp[N];

//     for(i=0; i<N; i++){
//         scanf("%d", &a[i]);
//     }
//     for(i=P-1; i<=Q-1; i++){
//         temp[i] = a[i];
//         a[i] = a[R-1];
//         a[R-1] = temp[i];
//         R++;
//     }
//     for(i=0; i<N; i++){
//         printf("%d", a[i]);
//         if(i < N -1){
//             printf(" ");
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// /*
// やること整理する
// 【ｘ】n,p,q,r,sの値を取得
// 【ｘ】aの値を取得
// 【ｘ】aのpからqの値を取得
// 【ｘ】aのrからsの値を取得
// */
// int	main(void)
// {
// 	int n;
// 	int p;
// 	int q;
// 	int r;
// 	int	s;

// 	scanf("%d%d%d%d%d",&n,&p,&q,&r,&s);
// 	printf("%d %d %d %d %d\n",n,p,q,r,s);

// 	int tmp[101];//p〜qとr〜sを入れ替える為の変数。

// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d",&a[i]);
// 		printf("a[%d番目]=%d ",i,a[i]);
// 	}
// 	printf("\n");
// 	int j;
// 	for (j = p - 1; j <= q - 1; j++)
// 	{
// 		printf("p[%d番目]=%d ",j + 1,a[j]);
// 	}
// 	printf("\n");

// 	int k;
// 	for (k = r - 1; k <= s - 1; k++)
// 	{
// 		printf("r[%d番目]=%d ",k + 1,a[k]);
// 	}
// 	printf("\n");

// 	if(q - p == 0){
// 		for (int  w = 0; w < p + 1; w++)
// 		{
// 			tmp[j] = a[j];
// 		}
// 	} else if(q - p != 0){
// 		for (int  w = 0; w < q - p; w++)
// 		{
// 			tmp[j] = a[j];
// 		}
// 	}
// 	printf("a[j] => tmp[j]=%d\n", tmp[j]);

// 	if(r - s == 0){
// 		for (int  w = 0; w < r + 1; w++)
// 		{
// 			tmp[j] = a[j];
// 		}
// 	} else if(s - r != 0){
// 		for (int  w = 0; w < r - s; w++)
// 		{
// 			a[j] = a[k];
// 		}
// 	}
// 	printf("a[k] => a[j]=%d\n", a[j]);

// 	return (0);
// }
