// 写経#21946432


#include <stdio.h>
int main(void){
    int a, b, ans = 0;

    scanf("%d %d", &a, &b);

    if(b < 10){						//bが一桁だったら
        ans = (a * 10 + b) * 2;
    } else if(b < 100){				//bが二桁だったら
        ans = (a * 100 + b) * 2;
    } else if(b > 99){				//bが三桁だったら
        ans = (a * 1000 + b) * 2;
    }
    printf("%d\n", ans);

}


// ===== ! =====
// わからなくなったから写経する
// レベルアップしたらもう一度やる。

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int c = 0;	//aの数値の桁数を調べるための変数。
// 	int d = 0;	//bの数値の桁数を調べるための変数。
// 	int x; 		// whileでaの値が0になるのでxにaの値を代入（コピーしておく）
// 	int y;		// whileでbの値が0になるのでyにbの値を代入（コピーしておく）


// 	scanf("%d%d",&a,&b);
// 	// printf("\na = %d,b = %d\n",a,b);

// 	x = a;		//aの値をxに代入できているか確認
// 	// printf("\na = %d, x = %d\n", a, x);
// 	y = b;		//bの値をbに代入できているか確認
// 	// printf("a = %d, y = %d\n\n", a, x);

// 	while(a != 0)		// while(a != '\0') aが\0になるまで10で割ってaの桁数を調べる。
// 	{					// って書いてたから間違ってた。
// 		// ===== ! =====
// 		//a = a / 10;って書いてた。a がここで a / 10 の値に代入して値が更新されている。

// 		a = a / 10;
// 		c++; // printf("%d\n",c); //{}の中にprintfを書くと\0文字になるまでの桁数が表示されるから{}の外にprintfを書く。
// 	}
// 	while(b != 0)
// 	{
// 		b = b / 10;
// 		d++;
// 	}

// test2は999999＊2

		// if((c + d) == 2){
		// 	printf("%d\n",((x * 10 + y)) * 2);		// printでバックで
		// 											// printf("2桁%d\n",((x * 10 + y)) * 2);って書いた。
		// } else if((c + d) == 3){
		// 	printf("%d\n",((x * 100 + y)) * 2);

		// } else if((c + d) == 4){
		// 	printf("%d\n",((x * 100 + y)) * 2);

		// } else if((c + d) == 5){
		// 	printf("%d\n",((x * 100 + y)) * 2);

		// } else if((c + d) == 6){
		// 	printf("%d\n",((x * 1000 + y)) * 2);
		// }

		// ===== ! =====
		// 代入がコピー機能があるのを知らない時代の条件分岐

			// if((c + d) == 1){
			// 	printf("%d\n",(c + b) * 2);

			// } else if((c + d) == 2){
			// 	printf("%d\n",(a * 10 + b) * 2);

			// } else if((c + d) == 3){
			// 	printf("%d\n",((a * 100) + b) * 2);

			// } else if((c + d) == 4){
			// 	printf("%d\n",(a * 1000 + b) * 2);

			// } else if((c + d) == 5){
			// 	printf("%d\n",(a * 10000 + b) * 2);

			// } else {//if((c + d) == 6){
			// 	printf("%d\n",(a * 100000 + b) * 2);
			// }


	// printf("aの桁数 = %d\n",c);	//aの桁数を確認。
	// printf("bの桁数 = %d\n",d);	//bの桁数を確認。
	// printf("c + d = %d桁\n", c + d);
	// printf("aの値 = %d\n", a);	//aの値は0になっているか確認

// ===== ! =====
// while文の{}の外に条件分岐を書いてたから判定されない.と思っていたけど
// そもそもの条件分岐が間違っていた。

	// if(c == 1){
	// 	printf("%d\n",c);
	// }

// 	return (0);
// }
