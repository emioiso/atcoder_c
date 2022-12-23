#include <stdio.h>

int	main(void)
{

	int	n;//N 人で遊園地
	int	k;//身長が K cm以上必要です。

	scanf("%d%d",&n,&k);
	// printf("%d %d\n",n,k);

	int h;
	int box = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &h);
		// printf("%d\n",h);

		if(h >= k){
			box++;
		}
	}
	printf("%d\n",box);

	return (0);
}
