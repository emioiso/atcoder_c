#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);
	 if((a == 1) && (a < b)){
		printf("Alice\n");
	} else if((b == 1) && (a > b)){
		printf("Bob\n");
	} else if(a > b){
		printf("Alice\n");
	} else if(a == b){
		printf("Draw\n");
	} else if(a < b){
		printf("Bob\n");
	}

	return (0);
}
