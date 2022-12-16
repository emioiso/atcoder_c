#include <stdio.h>

int	main(void)
{
	int a;// 起動してから A 秒後
	int b;// B枚ずつビスケットを生産します。
	int t;// T+0.5 秒後

	scanf("%d%d%d", &a, &b, &t);
	// printf("%d %d %d\n",a,b,t);
	// printf("%d %d %2.f\n",a,b,t + 0.5);

	int ta =  t / a;
	// printf("%d\n", ta);

	int bta = b * ta;
	printf("%d\n", bta);

	return (0);
}
