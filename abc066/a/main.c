#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int ab = a + b;
	int ac = a + c;
	int bc = b + c;

	// printf("%d %d %d\n",ab,ac,bc);

	if(
	((a == b) && (b == c)) ||
	((ab < bc) && (ab < ac)) ||
	((a == b) && (ab == c)) || ((a == c) && (ac == b)) || ((b == c) && (bc == a))
	){
			//　全部のベルが同じ金額の場合。
			// a,bの組み合わせが一番安い場合。
			// abとcが同じ場合。acがbと同じ場合。bcがaと同じ場合。
		printf("%d\n",ab);
	} else if((bc < a)){	//b,cの組み合わせが一番安い場合。
		printf("%d\n",bc);
	} else if((ac < b)){	//a,cの組み合わせが一番安い場合。
		printf("%d\n",ac);
	}

	// 1 1 2
	// 1 2 1
	// 2 1 1

	// ボツ1
	// if((a == b) && (b == c)){		//全部のベルが同じ金額の場合
	// 	printf("%d\n",ab);
	// } else if((a > b) && (b < c)){	//aとbの組み合わせが一番安い場合。
	// 	printf("%d\n",ab);
	// } else if((a < b) && (b > c)){	//aとcの組み合わせが一番安い場合。 1 5 1
	// 	printf("%d\n",ab);
	// } else if((a > bc)){			//bとcの組み合わせが一番安い場合。 5 1 1
	// 	printf("%d\n",ab);
	// }
	return (0);
}
