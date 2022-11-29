//写経#33170402

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int n;
	int i;

	scanf("%d%d%d",&a,&b,&n);
	// printf("%d\n%d\n%d\n",a,b,n);

	for (int i = n;; i++)
	{
		if(i % a == 0 && i % b == 0){
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
