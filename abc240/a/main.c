#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a + 1 == b &&  b - 1 == a || a == 1 && b == 10){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
