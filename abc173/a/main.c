#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if(n % 1000 == 0){
		printf("0\n");
	} else {
		printf("%d\n",1000 - n % 1000);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {

// 	int	n;//お店で N 円の商品を買います。

// 	scanf("%d",&n);
// 	printf("n=%d\n",n);
// 	int sen = 1000;
// 	printf("sen=%d\n", sen);

// 	int count = 1;
// 	while(sen > n){
// 		count++;
// 	}
// 	printf("count=%d\n", count);

// 	return (0);
// }

// #include <stdio.h>
// int	main(void)
// {

// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	int count = 0;
// 	if (n % 1000 == 0){
// 		printf("0\n");
// 	} else if (n > 1000){
// 		while(n > 1000){
// 			count += 1000;
// 			printf("%d\n", count);
// 		}
// 	} else if(n < 1000){
// 		printf("%d\n", count - n);
// 	}

// 	return (0);
// }
