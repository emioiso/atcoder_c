#include <stdio.h>

int	main(void)
{

	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(b / 2 == a || a * 2 + 1 == b){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
