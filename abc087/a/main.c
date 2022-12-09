#include <stdio.h>

int	main(void)
{
	int x;	//X 円を持っている
	int a;	//ケーキ屋で 1 個 A 円のケーキを 1 個買いました。
	int b;	//ドーナツ屋で 1 個 B 円のドーナツをできるだけたくさん買いました。

	scanf("%d%d%d", &x, &a, &b);
	// printf("%d\n%d\n%d\n",x,a,b);

	int xa = x - a;		//ケーキ屋さんに行った後の所持金
	// printf("%d\n", xa);

	int xab = xa / b;	//ドーナツを買える個数。
	// printf("%d\n", xab);
	int dt = xab * b;	//ドーナッツの合計金額
	// printf("%d\n", dt);

	printf("%d\n", xa - dt);

	return (0);
}
