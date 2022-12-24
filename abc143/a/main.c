#include <stdio.h>

int	main(void)
{

	int	a;//家の窓の横方向の長さは A
	int	b;//横方向の長さが B のカーテンが 2 枚取り付けられています。

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a > b * 2){
		printf("%d\n",a - b * 2);
	} else if (a < b * 2){
		printf("0\n");
	} else {
		printf("0\n");
	}

	return (0);
}
