#include <stdio.h>

int	main(void)
{
	int N;

	scanf("%d",&N);
	// printf("%d\n",N);

	if((N % 2) == 0){
		printf("%d\n", N / 2);
	} else if((N % 2) == 1){
		printf("%d\n", N / 2 + 1);
	}

	return (0);
}
