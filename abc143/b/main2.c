#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int d[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&d[i]);
		// printf("%d ",d[i]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		// j = i + 1と定義することでjの値が常にi + 1になるので同じ整数同士を掛け算しなくなる。
		for (int j = i + 1; j < n; j++){
		// j = 1にすると同じ整数同士を掛け算するので2N×(N−1)​/2の公式の条件に合わなくなる。
		// for (int j = 1; j < n; j++){
			// printf("%d ",d[j]);
			ans += d[i] * d[j];
			// printf("i = %d,j = %d\n", d[i],d[j]);
			// printf("ans = %d\n", ans);
		}
	}
	printf("%d\n", ans);
	return (0);
}
