#include <stdio.h>
int	main(void)
{
	int	a,b,c,d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d\n%d %d\n",a,b,c,d);
	printf("%d\n", b - c);
	// b - c をする理由は、x　の最大値が b で y の最小値が c だから。

	return (0);
}
