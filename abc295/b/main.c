#include <stdio.h>
int	main(void)
{
	int	r,c;

	scanf("%d%d",&r,&c);
	printf("%d %d\n",r,c);

	char b[20][20];
	int i = 0;
	int j = 0;
	for (i = 0; i < r + 1; i++)
	{
		for (j = 0; j < c + 1; j++)
		{
			scanf("%c",&b[i][j]);
			printf("%c",b[i][j]);
		}
	}
	printf("\n");
	return (0);
}
