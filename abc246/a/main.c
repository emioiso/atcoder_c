#include <stdio.h>
int	main(void)
{
	int	x[4];
	int	y[4];

	int ansX = 0;
	int ansY = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		// printf("%d %d\n",x[i],y[i]);

		if(x[0] == x[1]){
			ansX = x[2];
		} else if(x[1] == x[2]){
			ansX = x[0];
		} else {
			ansX = x[1];
		}

		if(y[0] == y[1]){
			ansY = y[2];
		} else if(y[1] == y[2]){
			ansY = y[0];
		} else {
			ansY = y[1];
		}
	}
	printf("%d %d\n", ansX,ansY);
	return (0);
}
