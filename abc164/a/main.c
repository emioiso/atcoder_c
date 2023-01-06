#include <stdio.h>

int	main(void)
{

	int	s;//羊が S 匹
	int w;//s狼が W 匹います。

	scanf("%d%d",&s,&w);
	// printf("%d %d\n",s,w);

	if (s <= w){
		printf("unsafe\n");
	} else {
		printf("safe\n");
	}

	return (0);
}
