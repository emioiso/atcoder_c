#include <stdio.h>
int	main(void)
{
	int	n,s,d;

	scanf("%d%d%d",&n,&s,&d);
	// printf("%d %d %d\n",n,s,d);

	int x[n];
	int y[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		// printf("%d %d\n",x[i],y[i]);
	}
	int ok = 0;
	for (int i = 0; i < n; i++)
	{
		// printf("%d %d\n",x[i],y[i]);

		if(x[i] < s && y[i] > d){
			ok++;
		}
	}
	if(ok >= 1){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
