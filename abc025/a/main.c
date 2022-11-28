// 写経#35165190
#include <stdio.h>

int	main(void)
{
	char s[6];	//1 行目には、長さ 5 の文字列 S が与えられる。終端文字を入れて6
	int n;

	scanf("%s%d",s,&n);
	// printf("%s\n%d\n",s,n);
	n--;
	printf("%c%c\n", s[n / 5],s[n % 5]);
	// 文字列の十の位、一の位という考え方
	// abcde[8 / 5] → 1.6
	// 十の位は1.6。6は切り捨てるから一番目のa
	// abcde[8 % 5] → 3
	// 一の位は3。3だからは三番目のc

	return (0);
}
