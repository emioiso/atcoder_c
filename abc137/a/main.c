// 写経#33922449
#include <stdio.h>

int	main(void)
{
	int a;	//整数 A, B
	int b;
// ===== ! =====
// scanfの前に変数x,y,zを定義していたら適当な数字が返ってきた。
// 【原因】
// scanfでa,bの値が入れられる前にx,y,zを初期化したのでpcがa + bの値を返してくれなかった。
	// int x = a + b;
	// int y = a - b;
	// int z = a * b;

	scanf("%d%d",&a,&b);
	// printf("\n%d %d \n%d %d %d\n",a,b,x,y,z);

	int x = a + b;
	int y = a - b;
	int z = a * b;
	// printf("%d %d %d\n",x,y,z);

	// あってるやつ
	// if(x >= y && x >= z){			// xはy以上。かつ、xはz以上の場合はxを出力
	// 	printf("%d\n",x);
	// } else if(y >= x && y >= z){		// ifがfalseで
	// 	printf("%d\n",y);				// yはx以上。かつ、yはz以上の場合はyを出力
	// } else {							// ifとelse ifがfalseであれば
	// 	printf("%d\n",z);				// zを出力
	// }

	// ===== ↑ を ↓ で分解してみた =====

	// 間違ってたやつ
	// if(x >= y){
	// 	if(x >= z){
	// 		printf("%d\n",x);
	// 	}
	// } else if(y >= x){
	// 	if(y >= z){
	// 		printf("%d\n",y);
	// 	}
	// } else {
	// 	printf("%d\n",z);
	// }

// x=1 y=2 z=3

	if(x >= y){
		if (x >= z) {
			printf("%d\n",x);
		} else {
			printf("%d\n",z);
		}
	} else { // x < y , z ?
		if (y >= z) {
			printf("%d\n",y);
		} else {
			printf("%d\n",z);
		}
	}



	// if(x >= y && y >= z){			// xはy以上。かつ、yはz以上の場合はxを出力
	// 	printf("%d\n",x);
	// } else if(y >= x && x >= z){		// ifがfalseであれば
	// 	printf("%d\n",y);				// yはx以上。かつ、xはz以上の場合はyを出力
	// } else {							// ifとelse ifがfalseであれば
	// 	printf("%d\n",z);				// zを出力
	// }

// ===== ↑ を ↓ で分解してみた =====

	// if(x >= y){							// xはy以上。かつ、yはz以上の場合はxを出力って書いてあるけど
	// 	if (y >= z)							// zがyよりも大きい場合がある
	// 	{
	// 		printf("%d\n",x);
	// 	}
	// 	else
	// 	{
	// 		// ここにくるパターンあるからバグになる
	// 	}
	// } else if(y >= x){					// ifがfalseであれば
	// 	if (x >= z)							// yはx以上。かつ、xはz以上の場合はyを出力って書いてあるけど
	// 	// {								// xがzよりも大きい場合がある
	// 		printf("%d\n",y);
	// 	}
	// 	else
	// 	{
	// 		// ここにくるパターンあるからバグになる
	// 	}
	// } else {							// ifとelse ifがfalseであれば
	// 	printf("%d\n",z);				// zを出力
	// }

	// if(x > y && y > z){				// xはyよりも大きい。かつ、yはzよりも大きい場合はxを出力
	// 	printf("%d\n",x);
	// } else if(y > x && x > z){		// ifがfalseであれば
	// 	printf("%d\n",y);				// yはxよりも大きい。かつ、xはzよりも大きい場合はyを出力
	// } else if(z > x && x > y){		// ifとelse ifがfalseであれば
	// 	printf("%d\n",z);				// zはxよりも大きい。かつ、xはyよりも大きい場合はzを出力
	// }

	return (0);
}
