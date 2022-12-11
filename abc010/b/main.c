#include <stdio.h>

int	main(void)
{
	int n;
	int a;
	int i;

		scanf("%d",&n);
		// printf("%d\n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%d",&a);
		// printf("%d\n",a);

		if(a == (1 && 3 && 7 && 9)){
			printf("えみ");
		}
	}


	return (0);
}

// 		好き	嫌い
// 1	x
// 2			x
// 3	x
// 4			x
// 5	x
// 6			x
// 7	x
// 8			x
// 9	x
// 10			x

// 好き	1 3 5 7 9	→	奇数
// 嫌い	2 4 6 8 10	→	偶数

// 		好き	嫌い	大好き
// 1	x
// 2			x
// 3					x
// 4	x
// 5			x
// 6					x
// 7	x
// 8			x
// 9					x
// 10	x

// 好き	1 4 7 10
// 嫌い	2 5 8
// 大好き	3 6 9
// #include <stdio.h>

// int main()
// {
// 	int i, n, a, sum = 0;
// 	scanf("%d", &n);
// 	for (i = 1; i <= n; i++) {
// 		scanf("%d", &a);
// 		if (a == 1);
// 		else if (a == 2 || a == 8) sum++;
// 		else if (a <= 6) sum += a - 3;
// 	}
// 	printf("%d\n", sum);
// 	//fflush(stdout);
// 	return 0;
// }
