#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if((b - a) == (c - b)){
		printf("YES\n");
	} else if((b - a) != (c - b)){
		printf("NO\n");
	}

	return (0);
}
