#include <stdio.h>
int	main(void)
{
	int	h,w,r,c;

	scanf("%d%d%d%d",&h,&w,&r,&c);
	// printf("%d %d %d %d\n",h,w,r,c);

	int maxHen = 4;
	if (r == 1){
		maxHen -= 1;
	}
	if(r == h){
		maxHen -= 1;
	}
	if(c == 1){
		maxHen -= 1;
	}
	if(c == w){
		maxHen -= 1;
	}
	printf("%d\n", maxHen);
	return (0);
}
