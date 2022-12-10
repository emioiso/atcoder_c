#include <stdio.h>

int	main(void)
{
	char s[4];

	scanf("%s",s);
	// printf("%s\n",s);
	// printf("%c %c %c\n",s[0],s[1],s[2]);

	if((s[0] != s[1]) && (s[1] != s[2]) && (s[0] != s[2])){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
