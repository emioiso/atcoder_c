#include <stdio.h>
int	main(void)
{
	int n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int h[n];
	int cpyh[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&h[i]);
		// printf("%d ",h[i]);
		cpyh[i] = h[i];
	}
	// printf("\n");

	//ここから昇順ソート
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (cpyh[i] < cpyh[j])
			{
				tmp = cpyh[i];
				cpyh[i] = cpyh[j];
				cpyh[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for ( i= 0 ; i < n; i++)
	{
		// printf("%d ", cpyh[i]);
	}
	// printf("\n");

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&h[i]);
		// printf("%d ",h[i]);

		if(cpyh[0] == h[i]){
			printf("%d\n", i + 1);
		}
	}
	return (0);
}


// #include <stdio.h>
// int	main(void)
// {
// 	int n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	int h[n];
// 	int tallestTree = 0;
// 	int count = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d",&h[i]);
// 		printf("%d ",h[i]);

// 		if(h[i] < h[i]){
// 			tallestTree = h[i];
// 			// printf("t=%d\n", tallestTree);
// 		} else if(h[0] > h[i]){
// 			tallestTree = h[i];
// 		}
// 	}
// 	printf("t=%d\n", tallestTree);

// 	return (0);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	// printf("%d\n",n);

// 	int h[101];
// 	int i;
// 	for (i = 1; i < n -1; i++)
// 	{
// 		scanf("%d",&h[i]);
// 		// printf("%d ",h[i]);

// 		if(h[i] > h ){
// 			// printf("%d ",i);
// 		}
// 	}
// 	printf("%d\n",i);
// 	return (0);
// }
