#include <stdio.h>

int	main(void)
{
	char n[1000];

	// scanf("%d", &n);
	// printf("%d\n",n);
	scanf("%s", n);
	// printf("%c\n",n[0]);

	if(n[0] == '1'){
		printf("9");
	} else {
		printf("1");
	}

	if(n[1] == '1'){
		printf("9");
	} else {
		printf("1");
	}

	if(n[2] == '1'){
		printf("9\n");
	} else {
		printf("1\n");
	}

	return (0);
}
