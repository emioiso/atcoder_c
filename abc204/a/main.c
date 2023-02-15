#include <stdio.h>
int	main(void)
{
	int	x;
	int y;

	scanf("%d%d",&x,&y);
	// printf("%d %d\n",x,y);

	if(x == y){
		printf("%d\n",x);
	} else if(x == 0 && y == 1 || x == 1 && y == 0){
		printf("2\n");
	} else if(x == 0 && y == 2 || x == 2 && y == 0){
		printf("1\n");
	} else if(x == 1 && y == 2 || x == 2 && y == 1){
		printf("0\n");
	}
	return (0);
}
