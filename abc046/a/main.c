#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if((a != b) && (a != c) && (b != c)){	//abcが異なる整数の場合
		printf("%d\n", 3);
	} else if(((a == b) && (a != c) && (b != c)) || ((a != b) && (a != c) && (b == c))
	|| ((a != b) && (a == c) && (b != c))){
		printf("%d\n", 2);
	} else {
		printf("%d\n", 1);
	}

	return (0);
}
