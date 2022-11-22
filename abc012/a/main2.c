#include <stdio.h>

int	main(void)
{
	int A;
	int B;
	int tmp;

	scanf("%d%d",&A,&B);
	printf("%d %d\n",A,B);

	tmp = A;
	A = B;
	B = tmp;

	printf("%d %d\n",A,B);

	return (0);
}
