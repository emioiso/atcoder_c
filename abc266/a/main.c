// 写経　#34370086
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[100];

	scanf("%s",s);
	// printf("%s\n",s);
	printf("%c\n",s[(strlen(s) + 1) / 2 - 1]);
	return (0);
}
