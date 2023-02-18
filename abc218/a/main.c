#include <stdio.h>
int	main(void)
{
	int	n;
	char s[8];

	scanf("%d%s",&n,s);
	// printf("%d\n%s\n",n,s);

	if(s[n - 1] == 'o'){
		printf("Yes\n");
	} else if(s[n - 1] == 'x'){
		printf("No\n");
	}
	return (0);
}
