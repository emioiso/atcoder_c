#include <stdio.h>

int	main(void)
{

	char s[4];
	char t[4];

	scanf("%s%s",s,t);
	// printf("%s %s\n",s,t);

	int box = 0;
	if (s[0] == t[0])
	{
		box += 1;
		// printf("%d\n", box);
	}

	if (s[1] == t[1])
	{
		box += 1;
		// printf("%d\n", box);
	}

	if (s[2] == t[2])
	{
		box += 1;
		// printf("%d\n", box);
	}
	printf("%d\n", box);

	return (0);
}
