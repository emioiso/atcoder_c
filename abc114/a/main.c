#include <stdio.h>

int	main(void)
{
	int x;

	scanf("%d", &x);
	// printf("%d\n",x);

	if((x == 7) || (x == 5) || (x == 3)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
