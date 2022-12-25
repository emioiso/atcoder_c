#include <stdio.h>

int	main(void)
{

	int k; //500 円玉を K 枚持っています。
	int x;//総額が X 円以上である場合は Yes

	scanf("%d%d",&k,&x);
	// printf("%d %d\n",k,x);

	int k500 = k * 500;
	// printf("%d\n", k500);

	if(k500 >= x){
		printf("Yes\n");
	} else {
		printf("No\n");
	}


	return (0);
}
