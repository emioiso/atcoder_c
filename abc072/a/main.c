#include <stdio.h>

int	main(void)
{
	int x;// 砂時計の上側のg数
	int t;// t秒後の世界の値

	scanf("%d%d",&x,&t);
	// printf("%d %d\n",x,t);

	if((x > t) && ((x - t) >= 0)){
		printf("%d\n", x - t);
	} else if((x < t) && ((x - t) <= 0)){
		printf("0\n");
	} else {
		printf("%d\n", x - t);
	}

	return (0);
}
