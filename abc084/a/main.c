#include <stdio.h>

int	main(void)
{
	int m;	//12æ30æ¥ã®mæ

	scanf("%d", &m);
	// printf("%d\n",m);

	int newyear = 24 - m;
	// printf("%d\n", newyear);
	printf("%d\n", newyear + 24);

	return (0);
}
