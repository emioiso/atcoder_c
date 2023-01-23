#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[1001];

	scanf("%s",s);
	// printf("%lu\n", strlen(s));
	for (int i = 0; i < strlen(s); i++)
	{
		// printf("%c",s[i]);
		if(strcmp(&s[i], "s") == 0){
			printf("%ses\n",s);
			return (0);
		}
	}
	printf("%ss\n",s);

	return (0);
}
