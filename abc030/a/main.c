#include <stdio.h>

int	main(void)
{
	int a;	//aの試合回数
	int b;	//aの勝利回数
	int c;	//bの試合回数
	int d;	//bの勝利回数

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	double x;
	x = (double)b / (double)a;
	// printf("%.1f\n", x );

	double y;
	y = (double)d / (double)c;
	// printf("%.1f\n", y );

	if(x > y){	//aがbよりも勝率が高い場合
		printf("TAKAHASHI\n");
	} else if(x < y){	//aがbよりも勝率が高い場合
		printf("AOKI\n");
	} else if(x == y){	//bがaよりも勝率が高い場合
		printf("DRAW\n");
	}

	return (0);
}
