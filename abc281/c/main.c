#include <stdio.h>

int	main(void)
{
	int n;
	int t;

	scanf("%d%d",&n,&t);
	// printf("%d %d\n",n,t);

	int i;
	int x;
	int box[1000];

	for (i = 0; i <= n; i++)
	{
		scanf("%d",&x);
		box[i] = x;
	}

	int box2 = 0;
	for (int i = 0; i < n; i++)
	{
		// printf("%d\n", box[i]);

		box2 += box[i];
	}
	// printf("%d\n",box2);
	// printf("%d\n",box[0]);

	if((t - box2) <=  box[0]){
		printf("1 %d\n",(t - box2));
	} else if((t - box2) >=  box[0] && (t - box2) >=  box[1]){
		printf("1 %d\n",(t - box2));
	}

	return (0);
}
