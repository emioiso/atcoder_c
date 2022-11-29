// 写経 #34258725

#include <stdio.h>

int main(void){
	int w;
	int h;
	scanf("%d %d", &w, &h);

	if (w % 16 == 0 && h % 9 == 0)
		printf("16:9\n");
	else if (w % 4 == 0 && h % 3 == 0)
		printf("4:3\n");
}

// ===== ! =====
// 全探索が理解できなくてギブアップ
// #include <stdio.h>

// int	main(void)
// {
// 	int w;	//幅
// 	int h;	//高さ
// 	int i;

// 	scanf("%d%d",&w,&h);
// 	// printf("%d %d\n",w,h);

// 	for (i = 1; i <= w; ++i)	//wの約数を調べる。
// 	{
// 		if((w % i) == 0){
// 			printf("%d\n",i);
// 		}
// 	}

// for (i = 1; i <= h; ++i)	//hの約数を調べる。
// 	{
// 		if((h % i) == 0){
// 			printf("%d\n",i);
// 		}
// 	}

// 	if(){

// 	}

// 	return (0);
// }
