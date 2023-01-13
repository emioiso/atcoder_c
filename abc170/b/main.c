#include <stdio.h>

int	main(void)
{
	//2 本の足を持つ鶴か 4 本の足を持つ亀
	int	x;//庭の動物の総数は X 匹
	int	y;//それらの足の総数は Y 本
	//やること
	//鶴と亀の数の組合せが存在するか判定してください。

	scanf("%d%d",&x,&y);
	// printf("%d %d\n",x,y);

  if(y % 2 == 0 && x * 2 <= y && y <= x * 4){
	//yは偶数かつ
	//x * 2 は　y　と同じか y　以下かつ
	//x * 4 は　y　と同じか y 以上の場合Yes
    printf("Yes");
	}else{
    printf("No");
	}
	return 0;
}

// #include <stdio.h>

// int	main(void)
// {
// 	//2 本の足を持つ鶴か 4 本の足を持つ亀
// 	int	x;//庭の動物の総数は X 匹
// 	int	y;//それらの足の総数は Y 本
// 	//やること
// 	//鶴と亀の数の組合せが存在するか判定してください。

// 	scanf("%d%d",&x,&y);
// 	printf("%d %d\n",x,y);

// 	if((y / 2 == 0  || y / 4 == 0) && (y / 2 == 0) + (y / 4 == 0) == x){
// 		printf("Yes\n");
// 	} else {
// 		printf("No\n");
// 	}

// 	return (0);
// }
