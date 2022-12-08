#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	int left = a + b;
	int right = c + d;
	// printf("%d %d\n", left,right);

	if(left > right){
		printf("Left\n");
	} else if(left < right){
		printf("Right\n");
	} else {
		printf("Balanced\n");
	}

	return (0);
}
