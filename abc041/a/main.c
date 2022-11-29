#include <stdio.h>

int	main(void)
{
		char s[101];
		int i;
		int j;

		scanf("%s%d", s, &i);
		// printf("%s\n%d\n",s,i);

		for (j = 0; j < i; j++)
		{
			scanf("%s", s);
		}
		printf("%c\n", s[j-1]);

		return (0);
}
