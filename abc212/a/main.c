#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(0 < a && b == 0){
		printf("Gold\n");
	} else if(a == 0 && 0 < b){
		printf("Silver\n");
	} else if(0 < a && 0 < b){
		printf("Alloy\n");
	}
	return (0);
}
