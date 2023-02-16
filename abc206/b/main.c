#include <stdio.h>
int	main(void)
{
	int	n;
	int sum = 0;
	int i = 0;

	scanf("%d",&n);
	// printf("%d\n",n);

	while(sum <= n){
		sum += i;
		i++;
		// printf("sum=%d\n",sum);
		// printf("i=%d\n",i);
		if(sum >= n){
			printf("%d\n", i - 1);
			break;
		}
	}
	return (0);
}
