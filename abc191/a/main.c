#include <stdio.h>
int	main(void)
{
	int	v,t,s,d;

	scanf("%d%d%d%d",&v,&t,&s,&d);
	// printf("%d %d %d %d\n",v,t,s,d);

	t *= v;
	s *= v;
	// printf("%d %d\n", t,s);

	if(t <= d && d <= s){
		printf("No\n");
	} else {
		printf("Yes\n");
	}
	return (0);
}
