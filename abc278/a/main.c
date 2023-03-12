#include <stdio.h>
int	main(void)
{
	int	n;
	int k;

	scanf("%d%d",&n,&k);
	// printf("n=%d k=%d\n",n,k);

	int a[101];
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
	}

	for(int j = 1; j <= k; j++){
		for(i = 1; i <= n; i++){
			a[i] = a[i + 1];
		}
		a[n] = 0;
	}

	for(i = 1; i <= n; i++){
		printf("%d",a[i]);
		if(i != n){
			printf("%c",' ');
		}
	}
	printf("\n");
	return (0);
}
