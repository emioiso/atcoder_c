#include <stdio.h>
int	main(void)
{
	double	a,b;

	scanf("%lf%lf",&a,&b);
	// printf("%d %d\n",a,b);

	double c = (a - b) / 3 + b;
	printf("%lf\n", c);
	return (0);
}
