#include <stdio.h>

int	main(void)
{
	char c;

	scanf("%c",&c);		//ポインタ
	// printf("%c\n",c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
		printf("vowel\n");
	} else {
		printf("consonant\n");
	}
	return (0);
}
