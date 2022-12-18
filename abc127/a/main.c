#include <stdio.h>

int	main(void)
{

	int	a;//A 歳の高橋君
	int	b;//13 歳以上が乗るには B 円 (B は偶数) かかります

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a >= 13){
		printf("%d\n",b);
	} else if((a >= 6) && (a <= 12)){
		printf("%d\n",b / 2);
	} else {
		printf("0\n");
	}

	return (0);
}
