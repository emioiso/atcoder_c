#include <stdio.h>
int	main(void)
{
	char	s[10];

	for (int i = 0; i < 9; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c",s[i]);

		if(s[0] == 'M'){
			printf("5\n");
			break;
		} else if (s[1] == 'u' ){
			printf("4\n");
			break;
		} else if (s[0] == 'W'){
			printf("3\n");
			break;
		} else if (s[1] == 'h'){
			printf("2\n");
			break;
		} else if (s[0] == 'F'){
			printf("1\n");
			break;
		}
	}
	return (0);
}
