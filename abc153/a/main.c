#include <stdio.h>

int	main(void)
{

	int	h;//モンスターの体力は H です。
	int	a;//A 減らすことができます。

	scanf("%d%d",&h,&a);
	// printf("%d %d\n",h,a);

	int box = h;
	int box2 = 0;
	for(int i = h; i >= 0; i--){
		// printf("%d\n", i);
		// printf("%d\n", box);
		box -= a;
		box2++;
		// printf("box=%d\n", box);
		if(box <= 0){
			break;
		}
	}
	printf("%d\n", box2);

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {

// 	int	h;
// 	int	k;

// 	scanf("%d%d",&h,&k);
// 	printf("%d %d\n",h,k);

// 	int box = h;
// 	for(int i = h; i >= 1; i--){
// 		printf("i=%d\n", i);
// 		box -= k;
// 		printf("box=%d\n", box);

// 		if(h < box){
// 			box++;
// 			break;
// 		}
// 	}
// 	printf("%d\n", box);


// 	return (0);
// }
