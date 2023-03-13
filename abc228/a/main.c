#include <stdio.h>
int	main(void)
{
	int s;//毎日 S 時 0 分に部屋の電気をつけ、
	int t;//毎日 T 時 0 分に消します。
	int x;//X 時 30 分に部屋の電気がついているかどうか判定してください。

	scanf("%d%d%d",&s,&t,&x);
	// printf("s=%d t=%d x=%d\n",s,t,x);

	if (t < s){
		t += 24;
		// printf("t=%d\n", t);
	}
	if(x < s){
		x += 24;
		// printf("x=%d\n", x);
	}
	if(s <= x && x < t){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
	// if(s <= x + 1 && x + 1 <= t || x == 23 && t == 0){
	// 	printf("Yes\n");
	// } else {
	// 	printf("No\n");
	// }
