// 写経 #30744155

#include <stdio.h>
int	main(void)
{
	int n;//お酒を N 杯
	int x;//高橋君はアルコールの摂取量が X ml を超えると酔っ払います。
	int minus = -1;

	scanf("%d%d",&n,&x);
	// printf("%d %d\n",n,x);

	int v[1000000];
	int p[101];
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d%d",&v[i],&p[i]);
		// printf("%d %d\n",v[i],p[i]);

		// sum += v[i] * p[i] / 100;//ここで / 100すると小数点になる可能性があるから正確な数値が出せない。
		sum += v[i] * p[i];
		// printf("sum=%d\n", sum);

		if(x * 100 < sum){				//↑の / 100 できてないからここでxに * 100する。
			printf("%d\n",i + 1);
			return(0);
		}
	}
		printf("%d\n",minus);
	return (0);
}
