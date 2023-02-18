#include <stdio.h>
int	main(void)
{
	int	x;

	scanf("%d",&x);
	// printf("%d\n",x);

	if(90 <= x){
		printf("expert\n");
	} else if(0 <= x && x <= 39){
		printf("%d\n",40 - x);
	} else if(40 <= x && x <= 69){
		printf("%d\n",70 - x);
	} else {
		printf("%d\n",90 - x);
	}

	return (0);
}
