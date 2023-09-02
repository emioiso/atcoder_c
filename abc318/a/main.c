#include <stdio.h>
int	main(void)
{
	int	n,m,p;

	scanf("%d%d%d",&n,&m,&p);
	// printf("%d\n",n);
	int count = 0;
	for (int i = m; i <= n; i += p)
	{
		// printf("i = %d\n",i);

		count++;
	}
	printf("%d\n", count);
	return (0);
}
