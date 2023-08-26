#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		// printf("%d ",arr[i]);
	}
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	// printf("\n");
	//	並べ替え結果の表示
	for (int i= 0 ; i < n; i++)
	{
		// printf("arr[i]=%d\n", arr[i]);
	}
	// printf("\n");
	for (int i= 0 ; i < n; i++)
	{
		if(arr[i] + 1 != arr[i + 1]){
			printf("%d\n",arr[i] + 1);
			break;
		}
	}
	return (0);
}
