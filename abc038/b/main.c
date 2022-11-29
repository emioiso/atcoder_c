// ===== 学び =====
// 問題の変数名と並び順が同じ配置にしていなかったので2時間かかってしまった。
// 改善として
// 問題文と同じ変数名、出力順で出力すること。

#include <stdio.h>

int	main(void)
{
	int h1,w1;
	int h2,w2;

	scanf("%d%d%d%d",&h1,&w1,&h2,&w2);
	// printf("h1=%d w1=%d\nh2=%d w2=%d\n",h1,w1,h2,w2);

	if(((h1 == h2) || (h1 == w2)) || ((w1 == h2) || (w1 == w2))){
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return (0);
}
