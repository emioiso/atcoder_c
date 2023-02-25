//#32707428
#include <stdio.h>
int	main(void)
{
	int	n;
	int	x;

	scanf("%d%d",&n,&x);
	// printf("%d %d\n",n,x);
	printf("%c\n", (x - 1) / n + 'A');

	return (0);
}
