#include <stdio.h>

int	main(void)
{
	int t;
	int x;

	scanf("%d%d", &t,&x);
	// printf("%d %d\n",t,x);

	printf("%.10f\n",(double)t / (double)x);

	return (0);
}
