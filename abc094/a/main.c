#include <stdio.h>

int	main(void)
{
	int a;//A 匹は猫であることがわかっていますが
	int b;//B 匹は猫と犬のどちらであるかわかっていません
	int x;//猫がちょうど X 匹いる

	scanf("%d%d%d",&a,&b,&x);
	// printf("%d %d %d\n",a,b,x);

	if(a > x){				//条件分岐はこの順番
		printf("NO\n");
	} else if((a + b) >= x){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
