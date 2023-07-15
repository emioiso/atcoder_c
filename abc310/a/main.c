#include <stdio.h>
int	main(void)
{
	int	n,p,q;

	scanf("%d%d%d",&n,&p,&q);
	// printf("%d %d %d\n",n,p,q);

	int d[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&d[i]);
		// printf("%d ",d[i]);
	}
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (d[i] > d[j])
			{
				tmp = d[i];
				d[i] = d[j];
				d[j] = tmp;
			}
		}
	}
	// printf("\n");
	//	並べ替え結果の表示

		// printf("d[i] = %d ", d[i]);
		if(q + d[0] < p){
			printf("%d\n", q + d[0]);
		} else {
			printf("%d\n", p);
		}

	return (0);
}
