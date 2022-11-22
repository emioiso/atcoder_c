#include <stdio.h>

int	main(void)
{
	int M;
	int D;

	scanf("%d%d",&M,&D);
	// printf("%d %d\n",M,D);

	if((M % D) == 0)
	{
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
