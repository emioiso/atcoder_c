#include <stdio.h>
int	main(void)
{
	char	s[4];

	scanf("%s",s);
	// printf("%s",s);

	if(s[0] == s[1] && s[0] != s[2]){
		printf("%c\n", s[2]);
	} else if(s[0] != s[1] && s[0] == s[2]){
		printf("%c\n", s[1]);
	} else if(s[0] != s[1] && s[1] == s[2]){
		printf("%c\n", s[0]);
	} else if(s[0] == s[1] && s[1] == s[2]){
		printf("-1\n");
	} else if(s[0] != s[1] && s[1] != s[2]){
		printf("%c\n",s[0]);
	}
	return (0);
}
