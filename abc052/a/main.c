#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	int ab = a * b;
	int cd = c * d;

	if(ab >= cd){
		printf("%d\n", ab);
	} else if(ab < cd){
		printf("%d\n", cd);
	}
	return (0);
}
