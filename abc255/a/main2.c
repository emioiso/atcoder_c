#include <stdio.h>
int	main(void)
{
	int	r,c;

	scanf("%d%d",&r,&c);
	// printf("%d %d\n",r,c);
	int a[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d",&a[i][j]);
			// printf("%d \n",a[i][j]);
		}
	}
		printf("%d\n", a[r - 1][c - 1]);
	return (0);
}
