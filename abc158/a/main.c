#include <stdio.h>

int	main(void)
{

	char s[4];	//char型の[]（添字演算子）の数字は配列の個数。
				//[4]にしているのは標準入力から3文字受け取る + だから。

	scanf("%s",s);
	// printf("%s\n",s);

	int a = 0;
	int b = 0;
	for (int i = 0; i < 3; i++)
	{
		// printf("%c\n", s[i]);

		if(s[i] == 'A'){
			a++;
		} else if(s[i] == 'B'){
			b++;
		}
	}
	// printf("a=%d\n", a);
	// printf("b=%d\n", b);

	if((a == 0) || (b == 0)){
		printf("No\n");
	} else {
		printf("Yes\n");
	}

	return (0);
}
