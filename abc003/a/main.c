// 写経 #122169

#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int salaryAve = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		// printf("i=%d\n", i);
		salaryAve += i * 10000;
		// printf("%d\n", salary);
	}
		printf("%d\n", salaryAve / n);

	return (0);
}
