#include <stdio.h>

int	main(void)
{
	int r;

	scanf("%d",&r);
	// printf("%d\n",r);

	if(1200 > r){
		printf("ABC\n");
	} else if(2800 > r){
		printf("ARC\n");
	} else {
		printf("AGC\n");
	}

	return (0);
}
