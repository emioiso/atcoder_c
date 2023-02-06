#include <stdio.h>
int	main(void)
{
	char	c[4];

	scanf("%s",c);
	// printf("%c\n",c[0]);

	if(c[0] == c[1] && c[1] == c[2]){
		printf("Won\n");
	} else {
		printf("Lost\n");
	}
	return (0);
}
