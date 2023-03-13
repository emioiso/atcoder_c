#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	printf("%d\n", n * (n - 1) / 2 + m * (m - 1) / 2);
	return (0);
}
