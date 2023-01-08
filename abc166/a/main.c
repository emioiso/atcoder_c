#include <stdio.h>
#include <string.h>

int main()
{
	char	s[4];

	scanf("%s",s);
	// printf("s=%s\n",s);

	char str[4] = "ABC";
	// printf("str=%s\n",str);
	char str1[4] = "ARC";
	// printf("str1=%s\n",str1);

	if (strcmp(s, str) == 0)
		// printf("sとstrが一緒だったら%s\n",str1);
		printf("%s\n",str1);
	else
		printf("%s\n",str);
	return (0);
}
