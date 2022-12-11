#include <stdio.h>

int	main(void)
{
	int N;
	int H[1000000];
	int i;

	scanf("%d",&N);
	// printf("%d\n",N);

	for (i = 0; i < N; i++)
	{
		scanf("%d",&H[0]);
		// printf("%d\n",H[i]);

		if(H[1] < H[2]){
			printf("%d\n", H[1]);
		}
	}

	return (0);
}
