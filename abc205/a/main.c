#include <stdio.h>
int	main(void)
{
	double a;
	double b;

	scanf("%lf%lf",&a,&b);
	// printf("%d %d\n",a,b);

	printf("%lf\n", b / 100 * a);

	return (0);
}
