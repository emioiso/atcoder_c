// 写経 解説
#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n\n",n);

	int box = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d",&a);
		// printf("a=%d\n",a);
		box = a;
		// printf("box=%d\n",box);

		if((box % 2 == 0 ) && (box % 3 != 0) && (box % 5 != 0)){
			printf("DENIED\n");
			return (0);
		}
	}
	printf("APPROVED\n");
	return (0);
}
