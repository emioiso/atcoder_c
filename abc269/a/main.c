#include <stdio.h>
int	main(void)
{
	int	a,b,c,d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	int ab = a + b;
	// printf("ab=%d\n", ab);
	int cd = c - d;
	// printf("cd=%d\n", cd);
	printf("%d\n", ab * cd);
	printf("Takahashi\n");

	return (0);
}
