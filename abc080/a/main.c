#include <stdio.h>

int	main(void)
{
	int n;
	int a;
	int b;

	scanf("%d%d%d", &n, &a, &b);
	// printf("%d %d %d\n",n,a,b);
	int na = n * a;
	// printf("%d\n", na);

	if(na <= b){
		printf("%d\n", na);
	} else {
		printf("%d\n", b);
	}

	return (0);
}
