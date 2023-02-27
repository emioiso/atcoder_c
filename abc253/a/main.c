#include <stdio.h>
int	main(void)
{
	int	abc[3];
	int	cpy[3];
	for (int  i = 0; i < 3; i++)
	{
		scanf("%d",&abc[i]);
		// printf("%d ",abc[i]);
		//abcをcpyにコピーしてcpy[1]がabc[1]と同じ値であればYesを出力。
		cpy[i] = abc[i];
		// printf("cpy=%d ", cpy[i]);
	}
	// printf("\n");
	//昇順にソートする。
	int tmp = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if(abc[i] > abc[j]){
				tmp = abc[i];
				abc[i] = abc[j];
				abc[j] = tmp;
			}
		}
	}
	// printf("\n");
	//昇順にした結果
	for (int i = 0; i < 3; i++)
	{
		// printf("%d ", abc[i]);
	}
	if(cpy[1] == abc[1]){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
