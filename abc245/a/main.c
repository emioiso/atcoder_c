#include <stdio.h>
int	main(void)
{
	int	a,b,c,d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	int x = 60 * a + b;
	// printf("%d\n", x);
	int y = 60 * c + d + 1;
	// printf("%d\n", y);

	if(x < y){
		printf("Takahashi\n");
	} else {
		printf("Aoki\n");
	}
	return (0);
}


// #include <stdio.h>
// int	main(void)
// {
// 	int	a,b,c,d;

// 	scanf("%d%d%d%d",&a,&b,&c,&d);
// 	// printf("%d %d %d %d\n",a,b,c,d);

// 	if(a <= c && b == d || a <= c || a == 0 && b == 23){
// 		printf("Takahashi\n");
// 	} else {
// 		printf("Aoki\n");
// 	}
// 	return (0);
// }
