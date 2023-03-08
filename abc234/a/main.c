//写経 #28381475

#include <stdio.h>

int f(int x)
{
	return (x * x + 2 * x + 3);
}

int	main(void)
{
	int	t;

	scanf("%d",&t);
	printf("%d\n", f(f(f(t) + t) + f(f(t))));

	return (0);
}
