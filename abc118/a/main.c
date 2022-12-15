#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	// printf("%d %d\n",a,b);

	if((b % a) == 0){
		printf("%d\n",a + b);
	} else {
		printf("%d\n",b - a);
	}

	return (0);
}
