#include <stdio.h>

int	main(void)
{

	char s[10];

	scanf("%s",s);
	// printf("%s\n",s);
	// printf("%c\n",s[0]);

	if(s[0] == 'S'){
		printf("Cloudy\n");
	} else if(s[0] == 'C'){
		printf("Rainy\n");
	} else {
		printf("Sunny\n");
	}

	// if(s == "Sunny"){
	// 	printf("Cloudy\n");
	// } else if(s == "Cloudy"){
	// 	printf("Rainy\n");
	// } else if(s == "Rainy"){
	// 	printf("Sunny\n");
	// }

	return (0);
}
