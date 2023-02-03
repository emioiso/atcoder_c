#include <stdio.h>
int	main(void)
{
	int	x;//X 円を払ってりんごを 1 個手に入れる。
	int y;//Y 円を払ってりんごを 3 個手に入れる。
	int n;//ちょうど N 個手に入れる

	scanf("%d%d%d",&x,&y,&n);
	// printf("%d %d %d\n",x,y,n);

	int x3 = x * 3;
	// printf("x3=%d\n", x3);		//nを3倍してyと比較する。

	if(n % 3 != 0 && x3 > y){
		printf("%d\n", n / 3 * y + n % 3 * x);
	} else if(n % 3 != 0 && x3 < y){
		printf("%d\n", n * x);
	} else if(n % 3 == 0 && x3 > y){
		printf("%d\n", n / 3 * y);
	} else if(n % 3 == 0 && x3 < y){
		printf("%d\n", n * x);
	}
	return (0);
}
