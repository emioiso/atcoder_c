// 写経　#35750308

#include <stdio.h>

int	main(void)
{
	char s[11];

	scanf("%s", s);
	// printf("%s\n",s);

	s[3] = '8';			//添字で部分指定して代入できるのすご！添字の可能性って無限大！
	printf("%s\n", s);

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	char s[11];

// 	scanf("%s",s);
// 	// printf("%s\n",s);
// 	// printf("%c\n", s[3]);

// 	if(s[3] == '8'){
// 		printf("%s\n", s);
// 	} else if(s[3] != '8'){
// 		printf("%s\n", s,);	//2017の場合7を8に変更したいけど、指定のしかたがわからない。
// 	}

// 	return (0);
// }
