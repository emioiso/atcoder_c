#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	char s[n];
	scanf("%s",&s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%c%c",s[i],s[i]);
	}
	printf("\n");
	return (0);
}
