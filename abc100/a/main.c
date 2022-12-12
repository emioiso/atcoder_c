#include <stdio.h>

int	main(void)
{
	int a;	//5
	int b;	//4

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if((a <= 8) && (b <= 8)){
		printf("Yay!\n");
	} else if((a > 8) || (b > 8)){
		printf(":(\n");
	}

	return (0);
}
