//写経 #36366630

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[51];
	int i = 0;

	scanf("%s",s);
	// printf("%s\n",s);

	while(s[i] != '\0'){	//文字列sがヌル文字になるまで繰り返す。

		if(s[strlen(s) - 1] == 'T'){	//文字列sの長さ - 1　= ヌル文字の一つ前の文字がTと同じ場合。
			printf("YES\n");
			return (0);
		}
		i++;
	}
	printf("NO\n");
	return (0);
}
