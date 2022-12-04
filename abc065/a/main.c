// 写経#35437620

#include <stdio.h>

int	main(void)
{
	int x;	//賞味期限を X 日まで過ぎた食品を食べてもお腹を壊しません。 賞味期限を X+1 日以上過ぎた食品を食べると、お腹を壊します。
	int a;	//賞味期限の A 日前に食品を買ってきて
	int b;	//B 日後に食べました。

	// 頭の中を整理
	// sample1
	// 賞味期限の 3 日前に食品を買ってきて、買ってから 6 日後に食べました。	→ 期限は3日過ぎている。
	// 賞味期限を 4 日まで過ぎた食品を食べてもお腹を壊しません。
	// 賞味期限を 4 + 1 日以上過ぎた食品を食べると、お腹を壊します。
	// sample2
	// 賞味期限の 5 日前に食品を買ってきて、買ってから 1 日後に食べました。　
	// 賞味期限を 6 日まで過ぎた食品を食べてもお腹を壊しません。
	// 賞味期限を 6 + 1 日以上過ぎた食品を食べると、お腹を壊します。
	// sample3
	// 賞味期限の 7 日前に食品を買ってきて、買ってから 12 日後に食べました。
	// 賞味期限を 3 日まで過ぎた食品を食べてもお腹を壊しません。
	// 賞味期限を 3 + 1 日以上過ぎた食品を食べると、お腹を壊します。


	scanf("%d%d%d",&x,&a,&b);
	// printf("%d %d %d\n",x,a,b);

	if((b - a) <= 0){
		printf("delicious\n");
	} else if((b - a) <= x){
		printf("safe\n");
	} else if((b - a) > x){
		printf("dangerous\n");
	}

	// ボツ2
	// if(((b + a) == x) || ((a == b) && (b ==x))){
	// 	printf("delicious\n");
	// } else if((b - a) < x){
	// 	printf("safe\n");
 	// } else if((b - a) > x){
	// 	printf("dangerous\n");
	// }
	// ボツ
	// if((x > a) && (a < b)){
	// 	printf("safe\n");
	// } else if((x >= a) && (a >= b)){
	// 	printf("delicious\n");
	// } else if((x < a) && (a < b)){
	// 	printf("dangerous\n");
	// }

	return (0);
}
