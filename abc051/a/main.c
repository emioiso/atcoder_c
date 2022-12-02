// 写経 #36378959

#include <stdio.h>

int	main(void)
{
	char s[20];

	scanf("%s",s);
	// printf("%s\n",s);
	s[5] = ' ';	//カンマの部分は0,1,2,3,4,5番目
	s[13] = ' ';	//カンマの部分は0,1,2,3,4,56,7,8,9,10,11,12,13番目

	printf("%s\n",s);
	return (0);
}
