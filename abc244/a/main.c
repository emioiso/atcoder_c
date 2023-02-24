#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n];
	scanf("%s",s);
	// printf("%s\n",s);
	printf("%c\n",s[n - 1]);

	return (0);
}
