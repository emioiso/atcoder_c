#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[101];

	scanf("%s",s);
	int count = -1;
	for (int i = 0; s[i] != '\0'; i++)
	{
		// printf("%c",s[i]);
		if(s[i] == 'a'){
			count = i + 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
