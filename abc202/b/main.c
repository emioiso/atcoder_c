// 写経#22798479
#include <stdio.h>
int	main(void)
{
	char s[100005];
	scanf("%s", s);
	// printf("%s\n", s);

	int i = 0;
	while(s[i] != '\0'){
	i++;
	}

	int j = 0;
	for (j = i - 1; j >= 0; j--)
	{
		if(s[j] == '6'){
			printf("9");
		} else if(s[j] == '9'){
			printf("6");
		} else {
			printf("%c",s[j]);
		}
	}
	printf("\n");
	return (0);
}
