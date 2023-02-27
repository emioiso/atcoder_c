#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int n10 = n / 10 % 10;
	printf("%d", n10);
	int n1 = n % 10;
	printf("%d\n", n1);
	return (0);
}
