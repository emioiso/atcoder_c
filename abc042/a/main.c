#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if((a == 5) && (b == 5) && (c == 7)){
		printf("YES\n");
	} else if((a == 5) && (b == 7) && (c == 5)){
		printf("YES\n");
	} else if((a == 7) && (b == 5) && (c == 5)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
