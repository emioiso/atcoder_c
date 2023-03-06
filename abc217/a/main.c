//解説
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[10];//解説はchar s[32];
	char t[10];//解説はchar t[32];

	scanf("%s %s", s, t);
	if (strcmp(s, t) < 0){
		printf("Yes\n");
	} else {
    printf("No\n");
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[11];
// 	scanf("%s",s);

// 	for (int i = 0; s[i] != '\0'; i++)
// 	{
// 		printf("%c",s[i]);
// 	}
// 	printf("\n");

// 	char t[11];
// 	scanf("%s",t);

// 	for (int i = 0; t[i] != '\0'; i++)
// 	{
// 		printf("%c",t[i]);
// 	}
// 	//ここでどう書いたらいいかわからなくなったから
// 	for (int i = 0; i < 11; i++)
// 	{
// 	}

// 	return (0);
// }
