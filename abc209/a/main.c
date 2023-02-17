#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	int i = 0;
	int count = 0;
	for (i = a; i <= b; i++)
	{
		// printf("%d\n", i);
		count++;
	}
	printf("%d\n", count);
	return (0);
}
