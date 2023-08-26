#include <stdio.h>
int	main(void)
{
	int	n,h,x;

	scanf("%d%d%d",&n,&h,&x);
	// printf("%d %d %d\n",n,h,x);

	int p[n];
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&p[i]);
		// printf("%d ",p[i]);
	}
	// printf("\n");
	int hp[n];
	int id[n];
	for (int i = 1; i <= n; i++)
	{
		if(p[i] + h >= x){
			// hp[i] = p[i];
			id[i] = i;
			printf("%d\n", id[i]);
			break;
			// printf("hp[%d] = %d ",i,hp[i]);
			// printf("id[%d] = %d\n",i,id[i]);
		}
	}
	return (0);
}
