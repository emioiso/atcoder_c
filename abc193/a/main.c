#include <stdio.h>
int	main(void)
{
	double	a;//定価 A 円の商品
	double b;//B 円で売られているとき

	scanf("%lf%lf",&a,&b);
	// printf("%lf %lf\n",a,b);

	printf("%.20lf\n", 100 * (a - b) / a);

	return (0);
}
