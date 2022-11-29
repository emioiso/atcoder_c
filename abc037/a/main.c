#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int x = c / a;
	// printf("%d\n", x);
	int y = c / b;
	// printf("%d\n", y);

	if (x > y)
	{
		printf("%d\n", x);
	} else {
		printf("%d\n", y);
	}
	return (0);
}
