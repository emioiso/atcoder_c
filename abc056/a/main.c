#include <stdio.h>

int	main(void)
{
	char a;
	char b;

	scanf("%c %c",&a,&b);
	// printf("%c %c\n",a,b);
	if((a == 'H') && (b == 'H')){
		printf("H\n");
	} else if((a == 'D') && (b == 'H') || (a == 'H') && (b == 'D')){
		printf("D\n");
	} else if((a == 'D') && (b == 'D')){
		printf("H\n");
	}
	return (0);
}
