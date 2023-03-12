#include <stdio.h>
int	main(void)
{
	int	v,a,b,c;

	scanf("%d%d%d%d",&v,&a,&b,&c);
	// printf("%d %d %d %d\n",v,a,b,c);

	int v2 = v % (a + b + c);
	// printf("%d\n", v2);

	if(v2 < a){
		printf("F\n");
	} else if(v2 < a + b){
		printf("M\n");
	} else {
		printf("T\n");
	}
	return (0);
}
