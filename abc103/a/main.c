#include <stdio.h>
int	main(void)
{
	int a123[4];

	for (int i = 0; i < 3; i++)
	{
		scanf("%d",&a123[i]);
		// printf("%d ",a123[i]);
	}
	// printf("\n");

	//ここから昇順ソート
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (a123[i] > a123[j])
			{
				tmp = a123[i];
				a123[i] = a123[j];
				a123[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for ( i= 0 ; i < 3; i++)
	{
		// printf("a123[i]=%d ", a123[i]);
	}
	// printf("\n");
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		sum += a123[i + 1] - a123[i];
		// printf("sum=%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
