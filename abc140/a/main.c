// 解説

#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	printf("%d\n",n * n * n);

	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	for (int i = 1; i <= n; i++)
// 	{
// 		printf("百の位%d ", i);

// 			for (int j = 1; j <= n; j++)
// 			{
// 				printf("十の位%d ", j);

// 				for (int k = 1; k <= n; k++)
// 				{
// 					printf("一の位%d\n", k);
// 				}
// 			}
// 	}

// 	return (0);
// }
