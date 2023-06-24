#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int nWeek = n * 7;
	int a[nWeek];
	int weeklyTotal = 0;

	for (int i = 1; i <= nWeek; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
		// printf("i = %d ",i); //7の倍数になるかチェック
			weeklyTotal += a[i];
			// printf("weeklyTotal = %d\n", weeklyTotal);
			if(i % 7 == 0){
				// printf("weeklyTotal = %d",weeklyTotal);
				printf("%d ",weeklyTotal);
				weeklyTotal = 0;
			}
	}
	printf("\n");
	return (0);
}
