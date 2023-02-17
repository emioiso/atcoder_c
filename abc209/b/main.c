#include <stdio.h>
int	main(void)
{
	int	n;//N 個の商品が売られています。
	int x;//所持金は X 円です。

	scanf("%d%d",&n,&x);
	// printf("%d %d\n",n,x);

	int a[101];
	int aa[101];
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ", a[i]);

		if(i % 2 == 0){
			aa[i] = a[i] - 1;
		} else {
			aa[i] = a[i];
		}
		// printf("%d ", aa[i]);
		sum += aa[i];
	}
	// printf("%d\n", sum);

	if(sum > x){
		printf("No\n");
	} else {
		printf("Yes\n");
	}
	return (0);
}
