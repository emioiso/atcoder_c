#include <stdio.h>

int	main(void)
{
	int d;

	scanf("%d",&d);
	// printf("%d\n",d);

	if(d == 25){
		printf("Christmas\n");
	} else if(d == 24){
		printf("Christmas Eve\n");
	} else if(d == 23){
		printf("Christmas Eve Eve\n");
	} else {
		printf("Christmas Eve Eve Eve\n");
	}
	return (0);
}
