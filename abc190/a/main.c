#include <stdio.h>
int	main(void)
{
	int	a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if(c == 0 && a > b || c == 1 && a >= b){
		printf("Takahashi\n");
	} else {
		printf("Aoki\n");
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a;//高橋くんは A 個
// 	int b;//青木くんは B 個
// 	int	c;//C=0 ならば高橋くんが先手、C=1 ならば青木くんが先手

// 	scanf("%d%d%d",&a,&b,&c);
// 	printf("%d %d %d\n",a,b,c);

// 	int acpy = a;
// 	int bcpy = b;
// 	if(c == 0){							//高橋くんが先手
// 		for (int i = 0; i < acpy; i++)
// 		{
// 			a--;
// 			b--;
// 			if(a == 0){
// 				printf("Aoki\n");
// 				break;
// 			}
// 			if(b == 0){
// 				printf("Takahashi\n");
// 				break;
// 			}
// 		}
// 	}
// 	if(c == 1){
// 		for (int i = 0; i < bcpy; i++)
// 		{
// 			b--;
// 			a--;
// 			if(b == 0){
// 				printf("Takahashi\n");
// 				break;
// 			}
// 			if(a == 0){
// 				printf("Aoki\n");
// 				break;
// 			}
// 		}
// 	}
// 	return (0);
// }
