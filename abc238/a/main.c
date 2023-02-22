#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	double sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= 2;
		// printf("%d\n", sum);
	}
	// printf("%f\n", sum);

	double n2 = n * n;
	// printf("%f\n", n2);

	if(sum > n2){
		printf("Yes\n");
	} else if(sum <= n2){
		printf("No\n");
	}
	return (0);
}
