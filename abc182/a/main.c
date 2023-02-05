#include <stdio.h>
int	main(void)
{
	int a;//フォロワー数は A
	int b;//フォロー数は B です

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	int a2 = a * 2 + 100;//フォロワー数*2+100
	// printf("%d\n", a2);
	printf("%d\n", a2 - b);

	return (0);
}
