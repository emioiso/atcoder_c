//解説

#include <stdio.h>
int	main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);
	}
	int ans = a[a[a[0]]];
	printf("%d\n", ans);
	return (0);
}
