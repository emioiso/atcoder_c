#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[13];
	char	hello[13] = "Hello,World!";

	scanf("%s",s);
	// printf("%s\n",s);

	if(strcmp(s, hello) == 0){
		printf("AC\n");
	} else {
		printf("WA\n");
	}

	return (0);
}
