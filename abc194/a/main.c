#include <stdio.h>
int	main(void)
{
	int a;//無脂乳固形分は A パーセント
	int b;//乳脂肪分は B パーセント含まれています。

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a + b >= 15 && b >= 8){
		printf("1\n");
	} else if(a + b >= 10 && b >= 3){
		printf("2\n");
	} else if(a + b >= 3){
		printf("3\n");
	} else {
		printf("4\n");
	}
	return (
		0);
}
