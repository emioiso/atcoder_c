#include <stdio.h>
int	main(void)
{
	int m;

	scanf("%d",&m);
	// printf("%d\n",m);

	if(m < 100){
		printf("00\n");
	} else if(100 <= m && m <= 5000){
		printf("%0.2d\n",m / 100);
	} else if(6000 <= m && m <= 30000){
		printf("%d\n",m / 1000 + 50);
	} else if(35000 <= m && m <= 70000){
		printf("%d\n",((m / 1000) - 30) / 5 + 80);
	} else if(70000 < m){
		printf("89\n");
	}

	return (0);
}
