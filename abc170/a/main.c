#include <stdio.h>

int	main(void)
{

	// int	x1;
	// int	x2;
	// int	x3;
	// int	x4;
	// int	x5;

	// scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
	// printf("%d %d %d %d %d\n",x1,x2,x3,x4,x5);

	int x;
	int i;
	for (i = 1; i <= 5; i++)
	{
		scanf("%d",&x);
		// printf("%d\n",x);

		if(x == 0){
			// printf("%d\n",x);
			break;
		}
	}
	printf("%d\n", i);
	return (0);
}
