#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d",&n);						//テストの点数として 0 以上 100 以下の整数を受け取る。
	// printf("%d\n",n);

	if(n < 60){							//テストの点数が 59 点以下ならば Bad と出力。
		printf("Bad\n");
	} else if((n >= 60) && (n < 90)){	//60 点以上 89 点以下ならば Good と出力。
		printf("Good\n");
	} else if((n >= 90) && (n <= 99)){	//90 点以上 99 点以下ならば Great と出力。
		printf("Great\n");
	} else if(n == 100){				//100 点ならば Perfect と出力。
		printf("Perfect\n");
	}

	return (0);
}
