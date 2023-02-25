#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int a = n / 16;
	int b = n % 16;
	// printf("%d %d\n", a,b);

	if(a <= 9){
		printf("%d", a);
	} else {
		printf("%c", a + 'A' - 10);
		// printf("%c\n", a); //この書き方だとターミナルに表示されない。
		// + 'A'しないとスキーコードとして認識されない。'A'はアスキーコードで65。
		// 80(P) → 70(F)にしたいから-10をする。
	}

	if(b <= 9){
		printf("%d\n", b);
	} else {
		printf("%c\n", b + 'A' - 10);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	// printf("%d\n",n);
// 	printf("%02X\n", n);

// 	return (0);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n",n);

// 	if(n > 16){
// 		printf("%d%d\n", n / 16 , n % 16);
// 	} else if(n < 16){
// 		printf("%d\n", n / 16);
// 	}

// 	return (0);
// }
