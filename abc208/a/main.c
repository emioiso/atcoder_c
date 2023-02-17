#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a <= b && b <= 6 * a){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
