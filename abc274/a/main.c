#include <stdio.h>
int	main(void)
{
	double	a,b;

	scanf("%lf%lf",&a,&b);
	// printf("%lf %lf\n",a,b);

	printf("%.3lf\n",b / a);
	return (0);
}
