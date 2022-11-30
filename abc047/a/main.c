#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);
	if(((a + c) == b) || ((b + c) == a) || ((a + b) == c) ){
		printf("Yes\n");
	} else if((a == b) && (b == c)){
		printf("No\n");
	} else {
		printf("No\n");
	}

	return (0);
}
