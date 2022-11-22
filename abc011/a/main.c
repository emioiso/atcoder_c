#include <stdio.h>

int	main(void)
{
	int N;

	scanf("%d",&N);
	// printf("%d\n",N);

	if(N < 12)	// Nが12以下の場合、N + 1
	{
		// printf("%d\n", N);
		printf("%d\n", N + 1);
	} else if(N == 12)	// Nが12と同じ場合、1
	{
		// printf("%d\n", N);
		printf("%d\n", 1);
	}

	return (0);
}
