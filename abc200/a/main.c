#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if(n % 100 == 0){
		printf("%d\n", n / 100);
	} else {
		printf("%d\n", n / 100 + 1);
	}
	return (0);
}
