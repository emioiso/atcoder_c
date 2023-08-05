#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	int a[n];
	int p1 = 0;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
		if(i == 0){
			p1 = a[i];
			// printf("p1 = %d\n", p1);
		}
	}
	// printf("\n");
	//ここから昇順ソート
	int tmp = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for (int i = 1 ; i < n; i++)
	{
		// printf("a[i]=%d ", a[i]);
	}
	for (int i = 1 ; i <= n; i++)
	{
		if(p1 < a[1]){
			printf("%d\n", (a[1] + 1) - p1);
			break;
		} else if(p1 > a[1]){
			printf("0\n");
			break;
		} else {
			printf("1\n");
			break;
		}
	}

	return (0);
}
