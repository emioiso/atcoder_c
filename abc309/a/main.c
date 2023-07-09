#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a == 1 && b == 2 || a == 4 && b == 5 || a == 7 && b == 8
		|| a == 2 && b == 3 || a == 5 && b == 6 || a == 6 && b == 9){
			printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
