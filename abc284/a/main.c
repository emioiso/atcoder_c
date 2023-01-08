#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
	printf("%d\n",n);

	char s[10][11];
	for (int i = 0; i < n; i++)
	{
		printf("i=%d\n", i);
		scanf("%s",s[i]);
		printf("s[i]=%s\n", s[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		printf("二回目s[i]=%s\n", s[i]);
	}
	return (0);
}
