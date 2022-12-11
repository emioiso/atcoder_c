#include <stdio.h>

int	main(void)
{
	int n;
	char s[1001];
	int p;
	int i;

	scanf("%d%s%d",&n,s,&p);
	// printf("%d\n%s %d\n",n,s,p);

	for (i = 0; i < n; i++)
	{
		scanf("%s\n", s[i]);
		scanf("%d\n",&p[i]);
	}
	printf("%s%d\n", s[i],p[i]);

	return (0);
}
