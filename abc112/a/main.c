#include <stdio.h>

int	main(void)
{
	int n;
	int a;
	int b;

	scanf("%d%d%d", &n,&a,&b);
	// printf("%d\n%d %d\n",n,a,b);

	if(n == 1){
		printf("Hello World\n");
	} else {
		printf("%d\n", a + b);
	}

	return (0);
}
