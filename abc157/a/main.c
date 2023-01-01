#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if((n % 2) == 0){
		printf("%d\n",n / 2);
	} else {
		printf("%d\n",n / 2 + 1);
	}

	return (0);
}
