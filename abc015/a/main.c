#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	A[51];
	char	B[51];

	scanf("%s%s",A,B);
	// printf("%s\n%s\n",A,B);

	// printf("%lu\n", strlen(A));
	// printf("%lu\n", strlen(B));

	if(strlen(A) > strlen(B))
	{
		printf("%s\n", A);
	} else {
		printf("%s\n", B);
	}

	return (0);

}
