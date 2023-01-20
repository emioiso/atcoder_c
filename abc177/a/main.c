#include <stdio.h>
int	main(void)
{
	int d; //高橋君の家から D メートル離れた地点
	int t; //待ち合わせの時刻は T 分後
	int s; //分速 S メートルで待ち合わせ場所

	scanf("%d%d%d",&d,&t,&s);
	// printf("%d %d %d\n",d,t,s);

	int ts = t * s;
	// printf("%d\n",ts);

	if(d <= ts){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
