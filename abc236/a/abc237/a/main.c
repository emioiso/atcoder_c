#include <stdio.h>
int	main(void)
{
	double	n;

	scanf("%lf",&n);
	// printf("%.0lf\n",n);

	if(-2147483648 <= n && n <= 2147483647){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
