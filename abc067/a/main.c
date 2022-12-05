#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d%d\n",a,b);

	if((((a + b) % 3) == 0) || ((a % 3) == 0) || ((b % 3) == 0)){
		printf("Possible\n");
	} else {
		printf("Impossible\n");
	}

	return (0);
}
