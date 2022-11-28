#include <stdio.h>

int	main(void)
{
	int x;
	int y;

	scanf("%d", &x);
	// printf("%d\n",x);

	y = x;
	// printf("%d\n",y);

	// printf("%d\n", x / 10);	//十の位
	// printf("%d\n", y % 10);	//一の位

	printf("%d\n", (x / 10) + (y % 10));

	return (0);
}

// ===== 考え方間違えてた =====

// #include <stdio.h>

// int	main(void)
// {
// 	int x;	//100のくらい
// 	int c = 0;
// 	int y;	//10のくらい
// 	int d = 0;

// 	int a;
// 	int b;

// 	scanf("%d",&x);
// 	printf("xの値は%d\n",x);

// 	a = x;
// 	printf("aの値は%d\n",a);

// 	while (x != 0)
// 	{
// 		x = x % 10;
// 		// c++;
// 	}
// 	printf("23の十の位は%d\n",c);

// 	// while (a != 0)
// 	// {
// 	// 	a = a % 10;
// 	// 	d++;
// 	// }
// 	// printf("23の一の位は%d\n",d);

// 	return (0);
// }
