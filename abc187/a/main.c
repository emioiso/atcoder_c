#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	// printf("%d\n",a / 100);			//100の位
	// printf("%d\n",(a / 10) % 10);	//10の位
	// printf("%d\n",a % 10);			//1の位

	int suma = 0;
	int sumb = 0;
	suma = a / 100 + (a / 10) % 10 + a % 10;
	sumb = b / 100 + (b / 10) % 10 + b % 10;

	if(suma >= sumb){
		printf("%d\n", suma);
	} else {
		printf("%d\n", sumb);
	}

	return (0);
}
