#include <stdio.h>

int	main(void)
{
	int n;	//合計 N 食

	scanf("%d",&n);
	// printf("%d\n",n);

	int x = n * 800;	//今までに払った金額を x 円
	// printf("%d\n", x);
	int y = 200; 		// 15 食食べる毎にその場で 200 円
	// printf("%d\n", y);

	if((n % 15) != 0){
		printf("%d\n", x - n / 15 * y);
	} else if((n % 15) == 0){
		printf("%d\n", x - n / 15 * y);

	}
	return (0);
}
