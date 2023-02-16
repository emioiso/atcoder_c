#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int tax = n * 1.08;
	// printf("%d\n", tax);

	if(tax < 206){
		printf("Yay!\n");
	} else if(tax == 206){
		printf("so-so\n");
	} else {
		printf(":(\n");
	}
	return (0);
}
