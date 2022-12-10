// 写経　#33170430

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, a, b,m,n;
	scanf("%d %d %d",&x,&a,&b);

	m=abs(x-a);
	n=abs(x-b);

	if(m>n){
	printf("B\n");
	}else{
	printf("A\n");
	}
	return 0;
}


// #include <stdio.h>

// int	main(void)
// {
// 	int x;//5 1
// 	int a;//2 999
// 	int b;//7 1000

// 	scanf("%d%d%d",&x,&a,&b);
// 	// printf("%d %d %d\n",x,a,b);

// 	if(((x - a) > (b - x)) || ((a - x) > (b - x))){
// 		printf("B\n");
// 	} else if(((x - b) > (a - x)) || ((a - x) < (b - x))){
// 		printf("A\n");
// 	} else {
// 		printf("A\n");
// 	}
// 	return (0);
// }
