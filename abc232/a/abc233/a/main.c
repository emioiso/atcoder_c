#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	scanf("%d%d",&x,&y);
	// printf("%d %d\n",x,y);

	int husokukitte = y - x;
	// printf("%d\n", husokukitte);

	if(husokukitte <= 0){
		printf("0\n");
	} else if(husokukitte > 0 && husokukitte % 10 == 0){
		printf("%d\n",husokukitte / 10);
	} else {
		printf("%d\n",husokukitte / 10 + 1);
	}
	return (0);
}
