#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	printf("%d\n", 2 * (a * b + b * c + c * a));	// 直方体の表面積を求める公式 2 × (ab ＋ bc ＋ ca)

	return (0);
}
