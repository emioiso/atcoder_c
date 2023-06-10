#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if(n % 5 == 3){
		printf("%d\n", n + 2);
	} else if(n % 5 == 4 ){
		printf("%d\n", n + 1);
	} else if(n % 5 == 0 ){
		printf("%d\n", n);
	} else if(n % 5 == 1 || n % 5 == 2){
		printf("%d\n", n / 5 * 5);
	}
	return (0);
}
