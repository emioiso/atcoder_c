#include <stdio.h>
int	main(void)
{
	int	r,c;

	scanf("%d%d",&r,&c);
	// printf("%d %d\n",r,c);

	int i;
	int j;
	int a[3][3];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d",&a[i][j]);
			// printf("%d ",a[i][j]);
		}
		// printf("\n");
	}
	printf("%d\n", a[r - 1][c - 1]);
	return (0);
}
