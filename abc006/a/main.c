#include <stdio.h>

int	main(void)
{
	int N;

	scanf("%d",&N);
	// printf("%d\n",N);

	if(N == 3){

		printf("YES\n");
	} else if((N % 3) == 0){

		printf("YES\n");
	} else {

		printf("NO\n");
	}

	return (0);
}
