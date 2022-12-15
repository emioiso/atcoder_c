#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int ba = b / a;
	// printf("%d\n",ba);

	if(ba < c){
		printf("%d\n",ba);
	} else {
		printf("%d\n",c);
	}

	return (0);
}
