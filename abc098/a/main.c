//写経　#36140006
//最大値を求める問題

// ===== 検証用コード =====
// 仮説
// 足し算と掛け算の結果が同じ値　かつ　足し算と掛け算の結果より引き算の結果の値が一番大きい値はありえる説
// 方法
// for文を使って-1000から1000までの足し算・掛け算・引き算のパターンをみる。
// 結果
// 足し算と掛け算の結果が同じ値　かつ　足し算と掛け算の結果が引き算の結果が一番大きいはありえない。

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);

	int sum = a + b;
   // printf("sum : %d \n",sum);
    int mul= a * b;
   // printf("mul : %d\n",mul);
    int sub = a -b ;
   // printf("sub : %d\n",sub);

	int i;
	int j;
	for (i = -1000; i <= 1000; i++)	//aの値
	{
		for (j = -1000; j <= 1000; j++)	//bの値
		{
			if((sum > sub) && (sum > mul)){
				// printf("プラスが大きいとき%d\n",plus);
			} else if((sub > sum) && (sub > mul)){
				printf("マイナスが大きいとき%d\n",sub);
			} else {
				// printf("掛け算が大きいとき　か　同じ値の時%d\n",multipl);
			}
		}
	}

    return 0;
}

// ===== 完全写経したやつ =====

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a + b;
//    // printf("sum : %d \n",sum);
//     int mul= a * b;
//    // printf("mul : %d\n",mul);
//     int sub = a -b ;
//    // printf("sub : %d\n",sub);

//     if((sum>=mul) && (sum>=sub)){
//         printf("%d\n",sum);
// 		return (0);
// 	}
// 	if((mul>=sum) && (mul>=sub)){
//         printf("%d\n",mul);
// 		return (0);
//     }
//     if((sub>=sum) && (sub>=mul)){
// 		printf("%d\n",sub);
//     }


//     return 0;
// }

// ===== 写経して自分の変数名ver =====

// #include <stdio.h>

// int	main(void)
// {

// 	int a;//3 4
// 	int b;//1 -2

// 	scanf("%d%d", &a, &b);
// 	printf("%d %d\n",a,b);

// 	int plus = a + b;//4 2
// 	int minus = a - b;//2 6
// 	int multipl = a * b;//3 -6

// 	printf("%d %d %d\n",plus,minus,multipl);

// 	if((plus > minus) && (plus > multipl)){
// 		printf("プラスが大きいとき%d\n",plus);
// 	} else if((minus > plus) && (minus > multipl)){
// 		printf("マイナスが大きいとき%d\n",minus);
// 	} else {
// 		printf("掛け算が大きいとき　か　同じ値の時%d\n",multipl);
// 	}

// 	return (0);
// }

// ===== 間違えたやつ =====

// #include <stdio.h>

// int	main(void)
// {
// 	int a;//3 4
// 	int b;//1 -2

// 	scanf("%d%d", &a, &b);
// 	// printf("%d %d\n",a,b);

// 	int p = a + b;//4 2
// 	int m = a - b;//2 6
// 	int x = a * b;//3 -6

// 	// printf("%d %d %d\n",p,m,x);

// 	if(((p > m) && (m > x)) || ((p > x) && (x > m))){				//足し算の値が一番大きい場合
// 		printf("%d\n",p);
// 	} else if(((m > p) && (p > x)) || ((m > x) && (x > p))){		//引き算の値が一番大きい場合
// 		printf("%d\n",m);
// 	} else if(((x > p) && (p > m)) || ((x > m) && (x > p))){		//掛け算の値が一番大きい場合
// 		printf("%d\n",m);
// 	} else if((x == p) && (p == m)){	//同じ値の場合
// 		printf("%d\n",m);
// 	}

// 	return (0);
// }
