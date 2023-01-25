#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0){
		printf("%d\n", (a + b) / 2);
	} else {
		printf("IMPOSSIBLE\n");
	}

	return (0);
}
