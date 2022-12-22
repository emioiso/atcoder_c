#include <stdio.h>

int	main(void)
{

	int	a;//容器 1 には水を A ミリリットルまで入れることができ
	int	b;//水が B ミリリットル入っています。
	int	c;//容器 2 には水が C ミリリットル入っています。

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int ab = a - b;
	// printf("%d\n",ab);

	// printf("%d\n",c - ab);

	if(c > ab){
		printf("%d\n",c - ab);
	} else {
		printf("0\n");
	}

	return (0);
}
