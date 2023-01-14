#include <stdio.h>

int	main(void)
{

	char a;

	scanf("%c",&a);
	// printf("%c\n",a);

	if(a >= 'a' && a <= 'z'){
		printf("a\n");
	} else {
		printf("A\n");
	}

	return (0);
}
