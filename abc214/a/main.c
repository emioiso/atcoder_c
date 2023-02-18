#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if(n <= 125){
		printf("4\n");
	} else if(n <= 211){
		printf("6\n");
	} else {
		printf("8\n");
	}
	return (0);
}
