//写経 #23757259
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int ans = a + b;
	if(ans < b + c){
		ans = b + c;
	}
	if(ans < a + c){
		ans = a + c;
	}
	printf("%d\n", ans);
	return (0);
}
