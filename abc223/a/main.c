#include <stdio.h>
int	main(void)
{
	int	x;

	scanf("%d",&x);
	// printf("%d\n",x);

	if(x == 0 || x % 100 != 0){
		printf("No\n");
	} else {
		printf("Yes\n");
	}
	return (0);
}
