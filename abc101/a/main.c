#include <stdio.h>

int	main(void)
{
	char s[4];
	scanf("%s",s);
	// printf("%s\n",s);

	// scanf("%c",s);
	// printf("%c\n",s[0]);

	int i;
	int plus = 0;

	for (i = 0; i < 4; i++)
	{
		// printf("%c",s[i]); //+-++
		if(s[i] == '+'){
			// plus += 1; x
			plus++;
		} else if(s[i] == '-'){
			plus--;
		}
	}
	printf("%d\n",plus);

	return (0);
}

// ===== ! =====
// for文で詰んでしまった2

// #include <stdio.h>

// int	main(void)
// {
// 	char s[5];

// 	scanf("%s", s);
// 	// printf("%s\n",s);

// 	int i;
// 	int plus = 0;
// 	for (i = 1; s[i] <= '\0'; i++){
// 		if(s[i] == '+'){
// 			plus++;
// 		}
// 	}
// 	printf("%d\n",plus);

// 	return (0);
// }

// ===== ! =====
// for文で詰んでしまった

// #include <stdio.h>

// int	main(void)
// {
// 	char s[5];

// 	scanf("%s",s);
// 	// printf("%s\n",s);
// 	int i;
// 	int x = 0;
// 	char p[2];
// 	for (i = 0; s[i] != '\0'; i++)
// 	{
// 		if(s[i] == '+'){
// 			// printf("%d\n",x + 1);
// 			p +=
// 		}
// 	}

// 	return (0);
// }
