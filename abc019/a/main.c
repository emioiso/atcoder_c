// 写経 #34473750

#include <stdio.h>

int	main(void)
{
	int a;//2
	int b;//3
	int c;//4

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if((a >= b && a <= c) || (a <= b && a >= c)){
		//aがbと同じかb以上、aがcと同じかc以下。　
		//または　
		//aがbと同じかb以下、aがcと同じかc以下　の場合。
		printf("%d\n",a);
	} else if((b >= a && b <= c) || (b <= a && b >= c)){
		printf("%d\n",b);
	} else {
		printf("%d\n",c);
	}

// ===== 条件分岐で書くの限界きたからqsort 使うぞ ======
// 	if((a > b) && (b > c)){
// 		printf("%d\n",b);
// 	} if((a > c) && (c > b)){
// 		printf("%d\n",c);
// 	} if((b > a) && (a > c)){
// 		printf("%d\n",a);
// 	} if((b > c) && (c > a)){
// 		printf("%d\n",c);
// 	} if((c > a) && (a > b)){
// 		printf("%d\n",a);
// 	} if((c > b) && (b > a)){
// 		printf("%d\n",b);
// 	} if((a == b) && (b == c)){
// 		printf("%d\n",b);
// 	}

	return (0);
}
