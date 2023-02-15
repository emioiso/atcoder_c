// 解説
#include <stdio.h>
int	main(void)
{
	int	a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if(a == b == c){
		printf("%d\n", a);
	} else if(a == b){
		printf("%d\n", c);
	} else if(a == c){
		printf("%d\n", b);
	} else if(c == b){
		printf("%d\n", a);
	} else {
		printf("0\n");
	}
	return (0);
}
