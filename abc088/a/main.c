#include <stdio.h>

int	main(void)
{
	int n;
	int a;

	scanf("%d%d",&n,&a);
	// printf("%d %d\n",n,a);

	if(((n % 500) == 0) || ((n - (n / 500) * 500) < a)){	//nが500で割れる場合。
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
