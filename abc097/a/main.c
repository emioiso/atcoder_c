//写経　#34674585
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int a;	//Aさんは a [m] 地点
	int b;	//Bさんは b [m] 地点
	int c;	//Cさんは c [m] 地点
	int d;	//距離が d [m] 以内のとき直接会話が出来ます

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	if(abs(a - c) <= d){
		printf("Yes\n");
	} else if((abs(a -b) <= d) && (abs(b - c) <= d)){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
		return (0);
}

// sample-2がマイナスの数値になるからわからない〜〜〜
// #include <stdio.h>

// int	main(void)
// {
// 	int a;	//Aさんは a [m] 地点
// 	int b;	//Bさんは b [m] 地点
// 	int c;	//Cさんは c [m] 地点
// 	int d;	//距離が d [m] 以内のとき直接会話が出来ます

// 	scanf("%d%d%d%d",&a,&b,&c,&d);
// 	// printf("%d %d %d %d\n",a,b,c,d);

// 	int ab = b - a;	//aとbの距離
// 	int bc = c - b;	//bとcの距離
// 	// printf("%d %d\n",ab,bc);

// 	if(((ab <= d) && (bc <= d)) || (c - a) <= d){
// 		printf("Yes\n");
// 	} else {
// 		printf("No\n");
// 	}

// 	return (0);
// }
