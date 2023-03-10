#include <stdio.h>
int	main(void)
{
	int	n,k,a;

	scanf("%d%d%d",&n,&k,&a);
	// printf("%d %d %d\n",n,k,a);

	int result = (a + k - 1) % n;
	if(result == 0){
		result = n;
	}
	printf("%d\n", result);
	return (0);
}
