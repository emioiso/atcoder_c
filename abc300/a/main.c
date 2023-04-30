#include <stdio.h>
int	main(void)
{
	int	n,a,b;

	scanf("%d%d%d",&n, &a,&b);
	// printf("%d %d %d\n",n,a,b);

	int c[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&c[i]);
		// printf("%d ",c[i]);

		if(a + b == c[i]){
			printf("%d\n", i + 1);
		}
	}

	return (0);
}
