#include <stdio.h>
#include <string.h>

int	main(void)
{
	char n[5];

	scanf("%s",n);
	// printf("%s\n",n);

	int len = strlen(n);
	// printf("len=%d\n", len);

	if(len == 4){
		printf("%s\n", n);
	} else if(len == 3){
		printf("0%s\n", n);
	} else if(len == 2){
		printf("00%s\n", n);
	} else if(len == 1){
		printf("000%s\n", n);
	} else if(len == 0){
		printf("0000%s\n", n);
	}
	return (0);
}
