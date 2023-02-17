#include <stdio.h>
int	main(void)
{
	int	n;//N 個買うために必要な金額を出力してください。
	int a;//キャベツを A 個よりも多く買う場合、A+1 個目以降に買うキャベツについては
	int x;//キャベツを 1 個 X 円で買うことができます。
	int y;//1 個 Y 円で買うことができます。
	int sum = 0;

	scanf("%d%d%d%d",&n,&a,&x,&y);
	// printf("%d %d %d %d\n",n,a,x,y);

	for (int i = 1; i <= n; i++)
	{
		if(i > a){
			sum += y;
		} else {
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
