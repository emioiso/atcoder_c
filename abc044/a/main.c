#include <stdio.h>

int	main(void)
{
	int n;	//n泊連続で宿泊することにしました。
	int k;	//最初の K 泊まで
	int x;	//1 泊あたり X 円
	int y;	//K+1 泊目以降は、1 泊あたり Y 円

	scanf("%d%d%d%d",&n,&k,&x,&y);
	// printf("%d\n%d\n%d\n%d\n",n,k,x,y);

if(n > k){
	printf("%d\n", k * x + (n - k) * y);
} else {
	printf("%d\n", x * n);
}

	// printf("最初の%d泊は%d円\n", k,k * x);
	// printf("残りの%d泊は%d円\n", n - k,(n - k) * y);
	// printf("合計は%d円\n",k * x + (n - k) * y);
	return (0);
}
