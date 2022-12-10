#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a == b){
		printf("%d\n",a);
	} else if(a > b){
		printf("%d\n",a - 1);
	} else{
		printf("%d\n",a);
	}

	return (0);
}
