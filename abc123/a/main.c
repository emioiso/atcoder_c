#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int k;

	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
	// printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,k);

	if(e - a <= k){
		printf("Yay!\n");
	} else {
		printf(":(\n");
	}

	return (0);
}
