#include <stdio.h>

int	main(void)
{
	long long a;
	long long b;
	long long x;

	scanf("%lld%lld%lld",&a,&b,&x);
	// printf("%lld %lld %lld\n",a,b,x);
	printf("%lld\n", b / x - (a + x - 1) / x + 1);
						2	-	(6 - 1) / 2 + 1
						2 - 5/2 + 1


	// long long q = b / x;
	// long long w = a + x;
	// printf("%lld\n", q - (w - 1) / x + 1);
	// 					6 -1
	// 				4 - 5
	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int x;

// 	scanf("%d%d%d",&a,&b,&x);
// 	// printf("%d %d %d\n",a,b,x);

// 	for (a; a < b; a ++)
// 	{
// 		printf("%d\n", a);
// 	}

// 	return (0);
// }
