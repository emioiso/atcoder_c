#include <stdio.h>

int	main(void)
{
	int	n;
	int	k;

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);

	int p[n];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&p[i]);
		// printf("%d ",p[i]);
	}
	// printf("\n");

	int tmp;
	for (int j = 0; j < n; j++)
	{
		for (int l = j + 1; l < n; l++)
		{
			if(p[j] > p[l]){
				tmp = p[j];
				p[j] = p[l];
				p[l] = tmp;
			}
		}
	}
	for (i = 0 ; i < n ; i++)
	{
		// printf("%d ", p[i]);
	}

	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += p[i];
		// printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	int	n;
// 	int k;

// 	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

// 	int p[n];
// 	int tmp;
// 	int i;
// 	int j;
// 	int g;
// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d",&p[i]);
// 		printf("%d ",p[i]);
// 		for (j = 0; j < n; j++)
// 		{
// 			for (g = j + 1; g < n; g++)
// 			{
// 				if(p[j] < p[g]){
// 				tmp = p[j];
// 				p[j] = p[g];
// 				p[g] = tmp;
// 				}
// 			}
// 		}
// 	}
// 	printf("\n");

// 	for (i = 0; i < n ; i++)
// 	{
// 		printf("%d ", p[g]);
// 	}
// 	return (0);
// }
