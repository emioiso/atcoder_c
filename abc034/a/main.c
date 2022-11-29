#include <stdio.h>

int	main(void)
{
	int x;	//1回目のテスト結果
	int y;	//2回目のテスト結果

	scanf("%d%d",&x,&y);
	// printf("%d %d\n",x,y);

	if(x < y){			//二回目の得点が一回目の得点より高くなっている場合は "Better"
		printf("Better\n");
	} else {
		printf("Worse\n"); 	//低くなっている場合は "Worse" と出力せよ
	}

	return (0);
}
