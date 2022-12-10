#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	// printf("%d\n",n);

	int i;
	for (i = n; i >= 0; i--)
	{
		printf("%d\n",i);
	}

	return (0);
}
