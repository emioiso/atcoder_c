// 【参考URL】
// 【配列への値の格納と取得】
// https://www.javadrive.jp/cstart/array/index3.html
// 【バブルソートの「降順」プログラムの紹介】
// https://monozukuri-c.com/langc-funclist-bubblesort/
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int all[4];
	all[0] = a;
	all[1] = b;
	all[2] = c;

	// printf("%d %d %d\n",all[0],all[1],all[2]);

	int i;
	int j;
	int tmp;
	for (i = 0; i < 3; i++){
		for (j = i + 1; j < 3; j++)
		{
			if(all[i] < all[j]){
				tmp = all[i];
				all[i] = all[j];
				all[j] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		// printf("%d\n",all[i]);
	}
	printf("%d\n",all[0] * 10 + all[1] + all[2]);

	return (0);
}
