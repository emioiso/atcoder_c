#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	a[64];
	unsigned long long change = 0;
	unsigned long long sum = 0;

	for (int i = 0; i < 64; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);

		if(a[i] == 1){
			change = pow(2, i);
			sum += change;
		}
	}
	printf("%llu\n", sum);
	return (0);
}
