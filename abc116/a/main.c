// 直角三角形の面積
// 三角形の面積は「底辺×高さ÷2」という公式から求められます。

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	printf("%d\n", a * b /2);

	return (0);
}
