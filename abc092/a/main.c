#include <stdio.h>

int	main(void)
{
	int a;	//電車は旅程に沿って通常のきっぷを買うと A 円かかり
	int b;	//乗り放題きっぷを買うと B 円かかります。
	int c;	//バスは旅程に沿って通常のきっぷを買うと C 円かかり
	int d;	//乗り放題きっぷを買うと D 円かかります。

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d\n%d\n%d\n%d\n",a,b,c,d);

	if((a > b) && (c > d)){					//乗り放題の方が安い場合
		printf("%d\n", b + d);
	} else if((a <= b) && (c <= d)){		//通常の切符の方が安い場合。同じ値段の場合
		printf("%d\n", a + c);
	} else if((a > b) && (c <= d)){			//乗り放題、切符。同じ、乗り放題
		printf("%d\n", b + c);
	} else if((a <= b) && (c > d)){			//切符、乗り放題。同じ、乗り放題
		printf("%d\n", a + d);
	}

	return (0);
}
