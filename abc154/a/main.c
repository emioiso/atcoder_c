#include <stdio.h>

int	main(void)
{

	char s[11];	//文字列 S の書かれたボールが A 個
	char t[11];	//文字列 T の書かれたボールが B 個あります。
	int	a;		//文字列 S の書かれたボールが A 個、
	int	b;		//文字列 T の書かれたボールが B 個あります。
	char u[11]; //文字列 U の書かれたボールを 1 個選んで捨てました。

	scanf("%s%s%d%d%s",s,t,&a,&b,u);
	// printf("%s %s\n%d %d\n%s\n",s,t,a,b,u);

	if(s[0] == u[0]){
		printf("%d %d\n",a - 1,b);
	} else if(t[0] == u[0]){
		printf("%d %d\n",a,b - 1);
	}

	return (0);
}
