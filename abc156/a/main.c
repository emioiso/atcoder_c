#include <stdio.h>

int	main(void)
{

	int	n;
	int	r;

	scanf("%d%d",&n,&r);
	// printf("%d %d\n",n,r);

	if(n <= 10){
		printf("%d\n", r + (100 * (10 - n)));
	} else {
		printf("%d\n", r);
	}

	return (0);
}
