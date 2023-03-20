#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int d[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&d[i]);
		// printf("%d ",d[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			ans += d[i] * d[j];
		}
	}
	printf("%d\n", ans);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	int d[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d",&d[i]);
// 		printf("%d ",d[i]);
// 	}
// 	int ans = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			ans += d[i] * d[j];
// 		}
// 	}
// 	printf("%d\n", ans);
// 	return (0);
// }


// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	int d[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d",&d[i]);
// 		// printf("%d ",d[i]);
// 	}
// 	int ans = 0;
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			ans += d[i] * d[j];
// 			// printf("%d\n", ans);
// 		}
// 	}
// 	printf("%d\n",ans);
// 	return (0);
// }
