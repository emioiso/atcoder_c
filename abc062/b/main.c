#include <stdio.h>

int	main(void)
{
	int h;
	int w;
	char a[101]; //文字
	char s = '#';

	scanf("%d%d%s%c",&h,&w,a,&s);
	// printf("%d %d\n%s\n%c\n",h,w,a,s);

if(((h % 2) == 0) && (w % 2) == 1){
	printf("%s\n", (w + 2) + s);
}

	return (0);
}
