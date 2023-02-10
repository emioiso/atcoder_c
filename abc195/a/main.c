#include <stdio.h>
int	main(void)
{
	int	m;
	int h;

	scanf("%d%d",&m,&h);
	// printf("%d %d\n",m,h);

	if(h % m == 0){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
