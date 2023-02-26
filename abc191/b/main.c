#include <stdio.h>
int	main(void)
{
	int	n,x;

	scanf("%d%d",&n,&x);
	// printf("%d %d\n",n,x);

	int a[n];
	int last_a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
		if(a[i] != x){
			last_a[i] = a[i];
			printf("%d", last_a[i]);
		}
		if(i != n - 1){
			printf("%c",' ');
		}
	}
	printf("\n");
	return (0);
}
