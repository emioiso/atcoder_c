#include <stdio.h>

int	main(void)
{
	int s1;
	int s2;
	int s3;

	int e1;
	int e2;
	int e3;

	scanf("%d%d",&s1,&e1);
	scanf("%d%d",&s2,&e2);
	scanf("%d%d",&s3,&e3);

	// printf("%d %d\n",s1,e1);
	// printf("%d %d\n",s2,e2);
	// printf("%d %d\n",s3,e3);

	printf("%.f\n",
	((s1 * (e1 * 0.1)) + (s2 * (e2 * 0.1)) + (s3 * (e3 * 0.1)) ));

	return (0);
}
