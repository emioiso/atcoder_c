#include <stdio.h>
int	main(void)
{
	int n;//AtCoder マンションは 1 階から N 階までの N 階建てのマンションです。
	int k;//1 号室から K 号室まで番号が振られています。
	int sum = 0;

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			sum += i * 100 + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
