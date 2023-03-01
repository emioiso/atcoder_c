//写経

#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		ans *= i;
		// printf("ans=%d\n", ans);
	}
	printf("%d\n", ans);

	return (0);
}
