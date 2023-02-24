//#31655379
#include <stdio.h>
int	main(void)
{
	char s[4];
	scanf("%s",s);

	if(s[1] == '\0'){
		printf("%s%s%s%s%s%s\n", s,s,s,s,s,s);
	} else if(s[2] == '\0'){
		printf("%s%s%s\n", s,s,s);
	} else {
		printf("%s%s\n", s,s);
	}
	return (0);
}
