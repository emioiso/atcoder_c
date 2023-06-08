#include <stdio.h>
int	main(void)
{
	char c[4][4];

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			scanf("%s",&c[i][j]);
			printf("%c",c[i][j]);
			if(j == 0){
				printf("\n");
			} else if(j != 0){
				printf(" ");
			}
		}
	}
	return (0);
}
