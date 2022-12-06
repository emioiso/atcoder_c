#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	// printf("%d\n",n);
	if(((n / 10) == 9) || (n % 10) == 9){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
