#include <stdio.h>

int	main(void)
{

	int	a;//林檎が A 個、砕くことで林檎の欠片 3 個になります.
	int	p;//林檎の欠片が P 個あります。

	scanf("%d%d",&a,&p);
	// printf("%d %d\n",a,p);

	int a3 = a * 3;
	// printf("%d\n",a3);

	int a3p = a3 + p;
	// printf("%d\n",a3p);

	int a3p2 = a3p / 2;
	printf("%d\n",a3p2);



	return (0);
}
