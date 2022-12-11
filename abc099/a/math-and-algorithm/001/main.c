#include <stdio.h>

int	main(void)
{
	int n;					//みかんが N 個あります。
	int apple = 5;			//りんごの数

	scanf("%d%d", &n,&apple);
	// printf("%d %d\n",n,apple);

	int total = n + apple;	//みかん + りんご
	printf("%d\n", total);

	return (0);
}
