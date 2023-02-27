#include <stdio.h>
int	main(void)
{
	int abc;

	scanf("%d",&abc);
	// printf("%d\n", abc);

	int a100 = abc / 100;
	// printf("%d ", a100);
	int a10 = abc / 10 % 10;
	// printf("%d ", a10);
	int a1 = abc % 10;
	// printf("%d\n", a1);

	int bca = a10 * 100 + a1 * 10 + a100;
	// printf("%d\n", bca);
	int cab = a1 * 100 + a100 * 10 + a10;
	// printf("%d\n", cab);

	printf("%d\n", abc + bca + cab);

	return (0);
}
