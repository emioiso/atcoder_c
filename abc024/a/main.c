#include <stdio.h>

int	main(void)
{
	int a;	//子供入園料
	int b;	//大人入園料
	int c;	//団体割引の値段
	int k;	//団体割引適応人数
	int s;	//子供の人数
	int t;	//大人の人数

	scanf("%d%d%d%d%d%d",&a,&b,&c,&k,&s,&t);
	// printf("%d %d %d %d\n%d %d\n",a,b,c,k,s,t);

	if((s + t) < k){			//子供と大人の合計数が団体適応人数以下の場合
		printf("%d\n", (a * s) + (b * t));
	} else if((s + t) >= k){	//子供と大人の合計数が団体適応人数と同じまたは、団体適応人数よりも多いかどうか。
		printf("%d\n", ((a - c) * s) + ((b - c) * t));
	}

	return (0);
}
