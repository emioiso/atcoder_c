#include <stdio.h>
int	main(void)
{
	char	s[101];
	scanf("%s",&s);

	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		// printf("%c",s[i]);
		if('A' <= s[i] && s[i] <= 'Z'){
			// printf("i=%d\n", i + 1);
			break;
		}
	}
	printf("%d\n", i + 1);
	return (0);
}
