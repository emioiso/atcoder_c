#include <stdio.h>

int	main(void)
{

	int	n;//N 人で旅行
	int	a;//電車を使うと 1 人あたり A 円
	int	b;//タクシーを使うと N 人で B 円

	scanf("%d%d%d",&n,&a,&b);
	// printf("%d %d %d\n",n,a,b);

	int na = n * a;

	// printf("%d\n",na);

	if(na > b){
		printf("%d\n",b);
	} else {
		printf("%d\n",na);
	}

	return (0);
}
