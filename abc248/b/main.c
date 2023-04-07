#include <stdio.h>
int	main(void)
{
	unsigned int a;//A 匹のスライムがいます。
	unsigned int b;//スライムが B 匹以上になるには、すぬけくんは最小で何回叫ぶ必要があるでしょうか？
	unsigned int k;//すぬけくんが 1 回叫ぶたびに、スライムは K 倍に増殖します。

	scanf("%d%d%d",&a,&b,&k);
	// printf("%d %d %d\n",a,b,k);
	int count = 0;
	while(a < b){
		a *= k;
		count++;
	}
	printf("%d\n",count);
	return (0);
}
