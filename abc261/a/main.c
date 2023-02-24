//#33429477
#include <stdio.h>
int	main(void)
{
	int	l1,r1,l2,r2;

	scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
	// printf("%d %d %d %d\n",l1,r1,l2,r2);

	if(l1 < l2){
		l1 = l2;
	}
	if(r1 > r2){
		r1 = r2;
	}
	if(l1 < r1){
		printf("%d\n", r1 - l1);
	} else {
		printf("0\n");
	}
	return (0);
}
