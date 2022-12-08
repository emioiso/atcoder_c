#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	int ab = a * b;
	// printf("%d\n", ab);

	if((ab % 2) == 0){
		printf("Even\n");
	} else {
		printf("Odd\n");
	}

	return (0);
}
