#include <stdio.h>

int	main(void)
{
	int a;	//お茶のペットボトルが A 本入った箱
	int b;	//B 本のお茶のペットボトルがほしい

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if((b % a) == 0){
		printf("%d\n", b / a);
	} else {
		printf("%d\n", b / a + 1);
	}

	return (0);
}
