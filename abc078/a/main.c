#include <stdio.h>

int	main(void)
{
	char x;
	char y;

	scanf("%c %c",&x,&y);
	// printf("%c %c\n",x,y);

	if(x < y){
		printf("<\n");
	} else if(x > y){
		printf(">\n");
	} else {
		printf("=\n");
	}

	return (0);
}
