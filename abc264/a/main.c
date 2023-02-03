#include <stdio.h>
int	main(void)
{
	int	l;
	int	r;
	char s[] = "atcoder";

	scanf("%d%d",&l,&r);
	// printf("%d %d\n%s\n",l,r,s);

	for (int i = l - 1 ; i < r; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return (0);
}
