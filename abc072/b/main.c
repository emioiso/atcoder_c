#include <stdio.h>

int	main(void)
{
	char s[100001];

	scanf("%s",s);
	// printf("%s\n",s);

	int i = 0;
	for (i = 1; s[i] != '\0'; i++)
	{
	}
	// printf("文字列の長さは%d\n", i);
	// printf("文字列の奇数の番号%d\n", (i % 2) == 1);　この書き方で奇数文字が出ると思った。

	int j;
	for (j = 0; j < i; j+=2) //j+=2がわからなかった
	{
		printf("%c",s[j]);
	}
	printf("\n");

	return (0);
}
