#include <stdio.h>
int	main(void)
{
	int	a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	// printf("%d %d %d\n",a,b,c);

	int aa = a * a;
	int bb = b * b;
	int cc = c * c;
	// printf("%d %d %d\n", aa,bb,cc);
	int aabb = aa + bb;
	// printf("%d\n", aabb);

	if(aabb < cc){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
