#include <stdio.h>

int	main(void)
{

	int	a;
	int	b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if((a > 9) || (b > 9)){
		printf("-1\n");
	} else {
		printf("%d\n",a * b);
	}

	return (0);
}
