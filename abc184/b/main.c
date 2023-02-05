#include <stdio.h>
int	main(void)
{
	int n;//N 問のクイズ
	int x;//高橋くんの持っている点数ははじめ X 点

	scanf("%d%d",&n,&x);
	// printf("%d %d\n",n,x);

	char s[200005];
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c ", s[i]);

		if(s[i] == 'x' && x > 0){ //&& x > 0がわからなかった
			x--;
			// printf("x=%d\n", x);
		} else if(s[i] == 'o'){
			x++;
			// printf("x=%d\n", x);
		}
	}

	printf("%d\n",x);
	return (0);
}
