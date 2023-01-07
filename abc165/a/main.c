#include <stdio.h>

int	main(void)
{

	int	k;
	int	a;
	int	b;

	scanf("%d%d%d",&k,&a,&b);
	// printf("%d %d %d\n",k,a,b);

	int count = 0;
	for (int i = a; i <= b; i++)
	{
		// printf("i=%d\n", i);
		if((i % k) == 0){
			count++;
		}
	}
	if(count > 0){
		printf("OK\n");
	} else {
		printf("NG\n");
	}
	return (0);
}
