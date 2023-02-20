#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	if(n >= 10 && n < 42){
		printf("AGC0%d\n",n);
	} else if(n >= 10 && n >= 42){
		printf("AGC0%d\n",n + 1);
	} else if(n <= 9){
		printf("AGC00%d\n",n);
	}
	return (0);
}
