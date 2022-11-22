// https://www.youtube.com/watch?v=1lCVSxC9lUs&t=436s

#include <stdio.h>

void swap(int *p, int *q);

void swap(int *p, int *q)
{
	int tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;

	return;
}

int	main(void)
{
	int A;
	int B;

	scanf("%d%d",&A,&B);
	// printf("%d %d\n",A,B);

	swap(&A, &B);

	printf("%d %d\n",A,B);

	return (0);
}
