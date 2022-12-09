#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;	//おもちゃの値段

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	if((a + b) >= c){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
