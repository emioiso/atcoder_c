#include <stdio.h>

int	main(void)
{

	char s[101];

	scanf("%s",s);
	// printf("%s\n",s);

	// char  x = 'x';
	char  x[2] = "x\0";
	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%s",x);
	}
	// printf("%s\n", x);
	printf("\n");

	return (0);
}
