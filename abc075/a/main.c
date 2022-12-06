#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d", &a, &b, &c);
	// printf("%d %d %d\n",a,b,c);

	if(a == b){
		printf("%d\n",c);
	} else if(b == c){
		printf("%d\n",a);
	} else {				//else if(a == c)って書かなくてもelseで判定できるのはなぜ？
		printf("%d\n",b);
	}

	return (0);
}
