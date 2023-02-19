#include <stdio.h>
int	main(void)
{
	int n;//N 人の学生が試験を受けました。
	int p;//P 点未満の点数を取った学生は "不可" となり単位を取得できません。

	scanf("%d%d",&n,&p);
	// printf("%d %d\n",n,p);

	int a[n];
	int count = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		// printf("%d ",a[i]);

		if(p > a[i]){
			count++;
			// printf("count=%d\n", count);
		}
	}
	printf("%d\n", count);
	return (0);
}
