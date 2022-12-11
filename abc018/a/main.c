//解けないからryuno1234さんのコード写経する
#include <stdio.h>

int	main(void)
{
	int A;
	int B;
	int C;

	scanf("%d%d%d",&A,&B,&C);

	// printf("%d\n%d\n%d\n",A,B,C);

	if(A > B && B > C){			//aはbより大きい かつ bはcより大きい場合は
		printf("1\n2\n3\n");	//aが1 bが2 cが3
	}

	if(A > C && C > B){			//aはcより大きい かつ cはbより大きい場合は
		printf("1\n3\n2\n");	//aが1 bが3 cが2
	}

	if(B > A && A > C){			//bはaより大きい かつ aはｃより大きい場合は
		printf("2\n1\n3\n");	//aが2 bが1 cが3
	}

	if(B > C && C > A){			//bはcより大きい かつ cはaより大きい場合は
		printf("3\n1\n2\n");	//aが3 bが1 cが2
	}

	if(C > B && B > A){			//cはbより大きい かつ bはaより大きい場合は
		printf("3\n2\n1\n");	//aが3 bが2 cが1
	}

	if(C > A && A > B){			//cはaより大きい かつ aはbより大きいバイは
		printf("2\n3\n1\n");	//aが2 bが3 cは1
	}

	return (0);
}

// https://goukaku-suppli.com/archives/38298
// ===== 組み合わせ =====
// 並び順は気にしない
// 並びが逆でも同じものとして考える
// 組み合わせの種類

// ===== 順列 =====
// 並びが逆だったら別のものとして考える
// 並べ方の総数
