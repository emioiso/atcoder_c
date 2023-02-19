#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	int ab = a - b;
	// printf("%d\n", ab);

	int mag = 1;
	for (int i = 0; i < ab; i++)
	{
		mag *= 32;
	}
	printf("%d\n", mag);
	return (0);
}
