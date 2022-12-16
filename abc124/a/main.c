// 写経　解説

#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	// printf("%d %d\n",a,b);

	if(a > b){
		printf("%d\n",a + (a - 1));
	} else if(a < b){
		printf("%d\n",b + (b - 1));
	} else {
		printf("%d\n",a + b);
	}

	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;

// 	scanf("%d%d", &a, &b);
// 	// printf("%d %d\n",a,b);

// 	if((a > b) && ((a - 1) > b)){
// 		printf("%d\n",a + a - 1);
// 	} else if((a < b) && ((a < (b - 1)))){
// 		printf("%d\n",b + b - 1);
// 	} else if((a < b) && (a == (b - 1))) {
// 		printf("%d\n",b + a);
// 	} else if((a > b) && ((a - 1) == b)) {
// 		printf("%d\n",a + a);
// 	} else if(a == b) {
// 		printf("%d\n",a + b);
// 	} else if((a > b) && ((a - 1) < b)){
// 		printf("%d", a + b);
// 	} else if((a < b) && (a > (b - 1))){
// 		printf("%d", b + a);
// 	}

// 	return (0);
// }
