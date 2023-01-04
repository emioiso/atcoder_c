#include <stdio.h>

int	main(void)
{

	int	x;//a
	int	y;//b
	int	z;//c

	int box = 0;
	scanf("%d%d%d", &x, &y, &z);
	// printf("%d %d %d\n",x,y,z);

	box = x;
	// printf("box=%d\n", box);
	x = y;
	// printf("x=%d\n", x);
	y = box;
	// printf("y=%d\n", y);
	box = x;
	// printf("box=%d\n", box);
	x = z;
	// printf("x=%d\n", x);
	z = box;
	// printf("z=%d\n", z);
	printf("%d %d %d\n", x,y,z);

	return (0);
}
