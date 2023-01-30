
// 写経 #36328499
#include <stdio.h>

int	k[110];
int	main(void)
{
	int a;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		// printf("%d ",a);
		k[a]++;
	}
	int res = 0;
	for (int i = 0; i <= 100; i++)
	{
		if(k[i]){
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
