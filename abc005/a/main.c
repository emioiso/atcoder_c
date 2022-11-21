#include <stdio.h>

int	main(void)
{
	int x;
	int y;

	scanf("%d%d",&x,&y);
	// printf("%d\n%d\n",x,y);
	// printf("%d\n",x / y);

	if((x % y) == 0){

		printf("%d\n", x / y);
	}else if(x < y){

		printf("%d\n", y / x);
	} else if(x > y){

		printf("%d\n", y / x);
	}
	return (0);
}
