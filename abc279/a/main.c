#include <stdio.h>

int	main(void)
{
	char s[101];
	int i;
	int count_v = 0;
	int count_w = 0;

	scanf("%s",s);
	// printf("%s\n",s);
	for (i = 0; s[i] != '\0'; i++)
	{
		// printf("%c\n",s[i]);

		if((s[i] == 'v')) {
			count_v++;
		}

		if((s[i] == 'w')) {
			count_w++;
		}
	}
	printf("%d\n", count_v + count_w *2);

	return (0);
}
