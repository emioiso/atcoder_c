#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);
	int a[1001];
	int nuts = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d\n", &a[i]);
		// printf("%d ", a[i]);
		if(a[i] > 10){
			nuts += a[i] - 10;
		}
	}
	printf("%d\n", nuts);
	return (0);
}
