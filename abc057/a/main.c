#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if((a + b) <= 23){
		printf("%d\n", a + b);
	} else if(a > 23){
		printf("%d\n", 24 - a);
	} else if((a + b) > 23){
		printf("%d\n", (a + b) - 24);
	}

	return (0);
}
