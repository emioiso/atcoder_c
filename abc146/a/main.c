// 写経　#36454154

#include <stdio.h>

int	main(void)
{

	char s[4];

	scanf("%s",s);
	// printf("%s\n",s);

	if(s[0] == 'M'){
		printf("6\n");
	} else if((s[0] == 'T') && (s[1] == 'U')){
		printf("5\n");
	} else if(s[0] == 'W'){
		printf("4\n");
	} else if((s[0] == 'T') && (s[1] == 'H')){
		printf("3\n");
	} else if(s[0] == 'F'){
		printf("2\n");
	} else if((s[0] == 'S') && (s[1] == 'A')){
		printf("1\n");
	} else if((s[0] == 'S') && (s[1] == 'U')){
		printf("7\n");
	}

	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	char s[4];

// 	scanf("%s",s);
// 	printf("%s\n",s);

// 	char box[4];
// 	for (int i = 0; s[i] != '\0'; i++)
// 	{
// 		printf("%c\n",s[i]);

// 		box = s[i];
// 	}

// 	printf("%s\n",box);

// 	// if (box == "SUN")
// 	// 	{
// 	// 		printf("7\n");
// 	// 	}

// 	return (0);
// }
