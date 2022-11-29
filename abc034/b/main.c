#include <stdio.h>

int	main(void)
{
	int n;
	int a;

	scanf("%d", &n);
	// printf("%d\n",n);

	 a = n;
	//  printf("%d\n",a);

	if(n % 2 == 0){		//nが偶数だったら
		printf("%d\n", a - 1);
	} else {
		printf("%d\n", a + 1);
	}

	return (0);
}
