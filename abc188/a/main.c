#include <stdio.h>
int	main(void)
{
	int	x;
	int	x3 = 0;
	int y;
	int y3 = 0;

	scanf("%d%d",&x,&y);
	// printf("%d %d\n",x,y);

	if(x < y){		//xがyよりも小さい場合はxに+3します。
		x3 = x + 3;
		// printf("x3=%d\n", x3);
	} else {
		y3 = y + 3;
		// printf("y3=%d\n", y3);
	}

	if((x < y && x3 > y) || (x > y && x < y3)){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
