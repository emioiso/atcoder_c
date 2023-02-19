#include <stdio.h>
int	main(void)
{
	int	a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int bc = b / c * c;
	// printf("%d\n", bc);

	if(a <= bc){
		printf("%d\n",bc);
	} else {
		printf("-1\n");
	}
	return (0);
}
