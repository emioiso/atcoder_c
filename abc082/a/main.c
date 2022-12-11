#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	// printf("%d %d\n",a,b);

	int ave = (a + b +1) / 2;	//+1をすると切り上げられた数字になる。
	printf("%d\n",ave);

	return (0);
}
