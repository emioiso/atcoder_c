#include <stdio.h>
int	main(void)
{
	int	h,w;

	scanf("%d%d",&h,&w);
	// printf("%d %d\n",h,w);

	char c[105];
	for (int i = 0; i < h; i++)
	{
		scanf("%s",c);
		printf("%s\n%s\n",c,c);
	}
	return (0);
}
