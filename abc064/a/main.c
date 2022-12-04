#include <stdio.h>

int	main(void)
{
	int r;
	int g;
	int b;

	scanf("%d%d%d",&r,&g,&b);
	// printf("%d %d %d\n",r,g,b);

	int r100 = r * 100;
	int g10 = g * 10;
	// printf("%d %d\n", r100, g10);

	int r100g10b = r100 + g10 + b;
	// printf("%d\n", r100g10b);

	if((r100g10b % 4) == 0){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
