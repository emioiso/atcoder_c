// 写経　#36835474
#include <stdio.h>

int	main(void)
{
	int x;
	int y;

	scanf("%d%d", &x, &y);
	// printf("%d %d\n",x,y);

	if((2 == x) && (2 == y)){
		printf("Yes\n");
	} else if(((4 == x) || (6 == x) || (9 == x) || (11 == x) ) && ((4 == y) || (6 == y) || (9 == y) || (11 == y))){
		printf("Yes\n");
	} else if(((1 == x) || (3 == x)  || (5 == x) || (7 == x) || (8 == x) ||  (10 == x) || (12 == x)) &&
			((1 == y) || (3 == y)  || (5 == y) || (7 == y) || (8 == y) ||  (10 == y) || (12 == y))){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
