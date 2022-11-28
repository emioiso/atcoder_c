#include <stdio.h>

int	main(void)
{
	int a;
	int d;

	scanf("%d%d",&a,&d);
	// printf("%d %d\n",a,d);

	int lv = 1;
	// printf("%d\n", lv + a);
	// printf("%d\n", lv + d);

	int Offensive_Power = (a + lv) * d;
	int Defense_Power = a * (d + lv);
	// printf("%d\n", Offensive_Power);
	// printf("%d\n", Defense_Power);

	if(Offensive_Power >= Defense_Power){
		printf("%d\n", Offensive_Power);
	} else if(Offensive_Power <= Defense_Power){
		printf("%d\n", Defense_Power);
	} else {
		printf("%d\n", Offensive_Power);
	}

	return (0);
}
