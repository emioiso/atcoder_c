#include <stdio.h>

int	main(void)
{
	char s[101];

	scanf("%s",s);
	// printf("sの文字列は%s\n",s);

	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	// printf("sの文字数は%d\n", i);
	// printf("sの最初の文字数は%c\n",s[0]);
	// printf("sの文字列の最初と最後を抜いた間の文字数は%d\n", i - 2);
	printf("%c%d%c\n", s[0], i - 2,s[i - 1]);
	//s[i - 1]の添字が間違っていた。sample-3でfor文で0から2までループさせているのにs[i]って書いてた

	return (0);
}
