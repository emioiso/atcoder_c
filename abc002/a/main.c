#include <stdio.h>

int	main(void)
{
	int x;
	int y;

	scanf("%d%d",&x,&y);
	// printf("%d\n%d\n",x,y);

	if(x > y){
		printf("%d\n", x);
	} else if(x < y){
		printf("%d\n", y);
	}

	return (0);
}
