#include <stdio.h>
int	main(void)
{
	int	n;//5N 人の審査員

	scanf("%d",&n);
	// printf("n=%d\n",n);

	int n5 = n * 5;
	// printf("n5=%d\n", n5);

	int x[n5];
	for (int i = 0; i < n5; i++)
	{
		scanf("%d", &x[i]);
		// printf("%d ", x[i]);
	}
	//ここから昇順ソート
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < n5; i++)
	{
		for (j = i + 1; j < n5; j++)
		{
			if (x[i] > x[j])
			{
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for (i = 0 ; i < n5; i++)
	{
		// printf("x[i]=%d ", x[i]);
	}
	float avg=0.0;
	for(i = n; i < n * 5 - n; i++){
    avg += x[i];
	}
	// printf("\n");

  	printf("%f",avg /((n * 5) - (n * 2)));
	return (0);
}
// //ソートは2回やるとバグりやすい。→ コピーしたい範囲を条件分岐で指定する。
// #include <stdio.h>
// int	main(void)
// {
// 	int	n;//5N 人の審査員

// 	scanf("%d",&n);
// 	printf("n=%d\n",n);

// 	int n5 = n * 5;
// 	printf("n5=%d\n", n5);

// 	int x[n5];
// 	for (int i = 0; i < n5; i++)
// 	{
// 		scanf("%d", &x[i]);
// 		// printf("%d ", x[i]);
// 	}
// 	//ここから昇順ソート
// 	int i;
// 	int j;
// 	int tmp = 0;
// 	for (i = 0; i < n5; i++)
// 	{
// 		for (j = i + 1; j < n5; j++)
// 		{
// 			if (x[i] > x[j])
// 			{
// 				tmp = x[i];
// 				x[i] = x[j];
// 				x[j] = tmp;
// 			}
// 		}
// 	}
// 	//	並べ替え結果の表示
// 	for ( i= 0 ; i < n5; i++)
// 	{
// 		printf("x[i]=%d ", x[i]);
// 	}
// 	printf("\n");
// 	//低い点をつけたn人を見つけて低い点の人たちをnewxにコピーする。
// 	int newx[n + 1];
// 	//配列を昇順にしたので前から2番目までをnewxにコピーする。
// 	//
// 	for (int i = 0; i < n; i++)
// 	{
// 		// printf("%d ",x[i]);
// 		newx[i] = x[i];
// 		printf("newx[i]=%d ", newx[i]);
// 	}
// 	printf("\n");
// 	//前から2番目(低い点)以外の人たちをneox配列にコピーする。
// 	int neox[n5 - n];
// 	for (int i = 0; i < n5; i++)
// 	{
// 		if(newx[i] != x[i]){
// 			neox[i] = x[i];
// 			printf("neox[i]=%d ", neox[i]);
// 		}
// 	}
// 	printf("\n");
// 	//ここから降順ソート
// 	//一度ソートした配列をもう一度ソートすると定義してない値が入ってしまう。
// 	j = 0;
// 	tmp = 0;
// 	for (i = 0; i < n5 ; i++)
// 	{
// 		for (j = i + 1; j < n5; j++)
// 		{
// 			if (neox[i] < neox[j])
// 			{
// 				tmp = neox[i];
// 				neox[i] = neox[j];
// 				neox[j] = tmp;
// 			}
// 		}
// 	}
// 	//	並べ替え結果の表示
// 	for (i = 0 ; i < n5 - n; i++)
// 	{
// 		printf("neox[i]=%d ", neox[i]);
// 	}
// 	printf("\n");
// 	// 高い点をつけたn人を見つけて高い点の人たちをhighxにコピーする。
// 	// int highx[n];
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	// printf("%d ",x[i]);
// 	// 	highx[i] = neonewx[i];
// 	// 	printf("highx[i]=%d ", highx[i]);
// 	// }
// 	// printf("\n");
// 	// //高い点以外の人たちをneox配列にコピーする。
// 	// int last_x[n5];
// 	// for (int i = 0; i < n5 - n * n; i++)
// 	// {
// 	// 	if(highx[i] != neox[i]){
// 	// 		last_x[i] = highx[i];
// 	// 		printf("last_x[i]=%d ", last_x[i]);
// 	// 	}
// 	// }
// 	// printf("\n");

// 	return (0);
// }
