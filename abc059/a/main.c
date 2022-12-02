// 写経　#36356831
// 参考URL
// https://daeudaeu.com/lower_upper/#:~:text=%E3%81%A6%E3%81%84%E3%81%8D%E3%81%BE%E3%81%97%E3%82%87%E3%81%86%E3%80%82-,%E5%A4%A7%E6%96%87%E5%AD%97%E5%A4%89%E6%8F%9B%E3%81%AE%E4%BB%95%E6%96%B9,%E3%81%99%E3%82%8B%E3%81%93%E3%81%A8%E3%81%8C%E5%8F%AF%E8%83%BD%E3%81%A7%E3%81%99%E3%80%82
#include <stdio.h>

int	main(void)
{
	char s1[11];
	char s2[11];
	char s3[11];

	scanf("%s %s %s",s1,s2,s3);
	// printf("%s %s %s\n",s1,s2,s3);
	printf("%c%c%c\n",s1[0]-32,s2[0]-32,s3[0]-32);

	return (0);
}
