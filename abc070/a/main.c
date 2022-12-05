#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	// printf("%d\n",n);

	int n100 = n / 100;
	// printf("%d\n",n100);
	int n1 = n % 10;
	// printf("%d\n",n1);

	if(n100 == n1){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
