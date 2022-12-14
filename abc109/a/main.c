#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	// printf("%d %d\n",a,b);

	if(((a % 2) == 1) && ((b % 2) == 1)){ //偶数にどんな自然数をかけても偶数
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	scanf("%d%d",&a,&b);
// 	// printf("%d %d\n",a,b);

// 	int ab = a * b;
// 	// printf("%d\n",ab);
// 	int exists_odd = 0;

// 	int i;
// 	for (i = 1; i <= 3; i++)
// 	{
// 		// printf("%d\n", i);
// 		if(((ab * i) % 2) == 1){
// 			exists_odd = 1;
// 		}
// 	}
// 	if(exists_odd == 1){
// 		printf("Yes\n");
// 	} else {
// 		printf("No\n");
// 	}
// 	return (0);
// }
