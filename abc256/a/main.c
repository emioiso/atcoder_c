#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= 2;
		// printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
