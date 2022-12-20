#include <stdio.h>

int	main(void)
{

	char	s[4];

	scanf("%s",s);
	// printf("%s\n",s);
	// scanf("%s",s);
	// printf("%c\n",s[0]);

	if((s[0] == s[1]) || (s[1] == s[2]) || (s[2] == s[3])){
		printf("Bad\n");
	} else {
		printf("Good\n");
	}

	return (0);
}
