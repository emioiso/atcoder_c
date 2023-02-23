#include <stdio.h>
int	main(void)
{
	int	k;

	scanf("%d",&k);
	// printf("%d\n",k);

	int khour = k / 60;
	// printf("khour=%d\n", khour);

	int kminits = k % 60;
	// printf("%d\n", kminits);

	if(kminits < 10){
		printf("%d:0%d\n", 21 + khour, kminits);
	} else {
		printf("%d:%d\n", 21 + khour, kminits);
	}
	return (0);
}
