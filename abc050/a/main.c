#include <stdio.h>

int	main(void)
{
	int a;
	char op;
	int b;

	scanf("%d %c %d",&a,&op,&b);	//%d %c %d　を　%d%c%d　こう書いていたからpritf出来なかった。
	// printf("%d %c %d\n",a,op,b);
	if(op == '+'){
		printf("%d\n", a + b);
	} else {
		printf("%d\n", a - b);
	}

	return (0);
}
