#include <stdio.h>
#include<math.h>

int	main(void)
{
	double	h;

	scanf("%lf",&h);
	// printf("%lf\n",h);
	printf("%.9lf\n",sqrt(h * (12800000 + h)));

	return (0);
}
