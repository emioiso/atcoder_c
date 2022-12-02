#include <stdio.h>

int	main(void)
{
	int x;
	int a = 1200;
	scanf("%d%d", &x,&a);
	// printf("%d %d\n",x,a);

	if(x >= a){	//1200 以上ならば AtCoder Regular Contest (ARC)
		printf("ARC\n");
	} else {//1200 未満ならば AtCoder Beginner Contest (ABC)
		printf("ABC\n");
	}
	return (0);
}
