#include <stdio.h>

int	main(void)
{
	int	r;

	scanf("%d",&r);	//正十二角形の面積は 3×r 2 = 48 です。
	// printf("%d\n",r);

	printf("%d\n", 3 * (r * r));

	return (0);
}
