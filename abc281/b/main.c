#include <stdio.h>

int	main(void)
{
	char s[11];

	scanf("%s",s);
	// printf("%s\n",s);
	// printf("%c\n",s[0]);//0文字目

	if(((s[0] >= 'A') && (s[0] <= 'Z')) &&
		((s[1] >= '1') && (s[1] <= '9')) &&
		((s[2] >= '0') && (s[2] <= '9')) &&
		((s[3] >= '0') && (s[3] <= '9')) &&
		((s[4] >= '0') && (s[4] <= '9')) &&
		((s[5] >= '0') && (s[5] <= '9')) &&
		((s[6] >= '0') && (s[6] <= '9')) &&
		((s[7] >= 'A') && (s[7] <= 'Z'))
		){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}