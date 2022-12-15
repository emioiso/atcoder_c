// 写経

#include <stdio.h>

int	main(void)
{
	char s[11];

	scanf("%s",s);
	// printf("%s\n",s);

	if((s[5] == '0') && (s[6] <= '4')){
		printf("Heisei\n");
	} else {
		printf("TBD\n");
	}

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	char s[1000];
// 	// scanf("%s", s);
// 	// printf("%s\n",s);

// 	scanf("%s", s);
// 	printf("%c %c %c %c\n",s[5],s[6],s[8],s[9]);

// 	if((s[5] == 1) || (s[6] >= 5) || ((s[5] == 1) && (s[6] <= 2)) || ((s[8] <= 3) && (s[9] >= 1))){
// 		printf("TBD\n");
// 	} else {
// 		printf("Heisei\n");
// 	}

// 	return (0);
// }


// #include <stdio.h>

// int	main(void)
// {
// 	char s[100];

// 	scanf("%s",s);
// 	printf("%s\n",s);

// 	scanf("%s",s);
// 	printf("%c %c\n",s[6],s[9]);

// 	if((s[5] <= '1') || (s[6] <= '5') || (s[9] <= '1')){
// 		printf("Heisei\n");
// 	} else if((s[5] == '1')|| ((s[9] <= '1') &&(s[9] <= '5'))){
// 		printf("TBD\n");
// 	}

// 	return (0);
// }
