#include <stdio.h>

int	main(void)
{
	int N;
	int i;
	int T[101];
	int min = 101;

	// printf("%d\n",N);
	scanf("%d",&N);

	for (i = 0; i < N; i++)
	{
		// printf("%d\n",i);
		scanf("%d",&T[i]);
		// printf("%d\n", T);

		if(T[i] < min){

			min = T[i];
		}
	}
	printf("%d\n", min);
	return (0);
}
