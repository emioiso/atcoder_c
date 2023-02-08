#include <stdio.h>
int	main(void)
{
	int	x;

	scanf("%d",&x);
	// printf("%d\n",x);

	if(x % 100 == 0){
		printf("100\n");
	} else {
		printf("%d\n",100 - x % 100 );
	}
	return (0);
}
