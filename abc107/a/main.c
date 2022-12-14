#include <stdio.h>

int	main(void)
{
	int n;
	int i;

	scanf("%d%d", &n, &i);
	// printf("%d %d\n",n,i);

	if(n >= i){
		printf("%d\n",n - i + 1);
	}

	return (0);
}
