#include <stdio.h>

int	main(void)
{

	int	a1;
	int	a2;
	int	a3;

	scanf("%d%d%d",&a1,&a2,&a3);
	// printf("%d %d %d\n",a1,a2,a3);

	int a123 = a1 + a2 + a3;
	// printf("%d\n", a123);

	if(a123 >= 22){
		printf("bust\n");
	} else {
		printf("win\n");
	}

	return (0);
}
