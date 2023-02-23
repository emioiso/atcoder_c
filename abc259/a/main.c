#include <stdio.h>
int	main(void)
{
	int n;//N 歳の誕生日
	int m;//M 歳の誕生日の時の身長が何cmだったかを求めてください。
	int x;//0 歳の誕生日(生まれた当日)から X 歳の誕生日までの間
	int t;//N 歳の時の身長は T cmです。
	int d;//毎年身長が D cmずつ伸びた。

	scanf("%d%d%d%d%d",&n,&m,&x,&t,&d);
	// printf("%d %d %d %d %d\n",n,m,x,t,d);

	if(m >= x){
		printf("%d\n", t);
	} else {
		printf("%d\n", t - (x - m) * d);
	}
	return (0);
}
