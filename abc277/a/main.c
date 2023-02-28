#include <stdio.h>
int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);

	int p[n];
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&p[i]);
		// printf("%d ",p[i]);

		if(p[i] == k){
			printf("%d\n", i);
		}
	}
	return (0);
}
