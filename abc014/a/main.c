// 写経

#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a, &b);
	// printf("%d %d\n",a,b);

	if(a % b == 0){
		printf("0\n");
	} else {
		printf("%d\n",b - (a % b));
	}

	return (0);
}

//===== 間違えた =====
// #include <stdio.h>

// int	main(void)
// {
// 	int a;	//持ってるお菓子の数
// 	int b;	//子供の数

// 	scanf("%d%d",&a, &b);
// 	// printf("%d %d\n",a,b);

// 	if((a % b) == 0){	//入力例2	余りが0の時
// 		printf("%d\n",0);
// 	} else if((a % b) == 1){	//入力例1,4
// 		printf("%d\n",b - (a % b));
// 	} else if(a < b){	//入力例3
// 		printf("%d\n",a - b);
// 	}

// 	return (0);
// }
