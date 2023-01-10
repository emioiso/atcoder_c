#include <stdio.h>

int	main(void)
{

	char 	N[4];

	scanf("%s",N);
	// printf("%s\n",N);

	int i;
	for (i = 0; N[i] != '\0'; i++)
	{
	}
	// printf("%c\n", N[i - 1]);//ここで最後の文字出せた！！！！！！

	if(N[i - 1] == '2' || N[i - 1] == '4' ||
		N[i - 1] == '5' || N[i - 1] == '7' ||
		N[i - 1] == '9'){	//数字にシングルクォーテーション付けるの忘れてた！
		printf("hon\n");
	} else if(N[i - 1] == '0' || N[i - 1] == '1' || N[i - 1] == '6' || N[i - 1] == '8'){
		printf("pon\n");
	} else {
		printf("bon\n");
	}
	return (0);
}
