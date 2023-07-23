#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	int x[n],y[n];
	int tmpX = 0;
	int tmpY = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d",&x[i],&y[i]);
// 		printf("%d %d\n",x[i],y[i]);
        tmpX = abs(2 - x[i]);
        tmpY = abs(3 - y[i]);
        sum = tmpX + tmpY;
        printf("%d\n", sum);
	}
	return (0);
}
