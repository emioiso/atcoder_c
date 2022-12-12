// 写経 #37080914
#include <stdio.h>

int	main(void)
{
	int n;
	int k;

	scanf("%d%d", &n, &k);
	// printf("%d %d\n",n,k);

	// printf("%d\n",(n / k));
	// printf("%d\n",(n % k));

	if((n % k) == 0){
		printf("0\n");
	} else {
		printf("1\n");
	}

	return (0);
}
