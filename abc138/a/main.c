#include <stdio.h>

int	main(void)
{

	int	a;
	char s[11];

	scanf("%d%s",&a,s);
	// printf("%d %s\n",a,s);

	if(a >= 3200){
		printf("%s\n",s);
	} else if(a < 3200){
		printf("red\n");
	} else {
		printf("%d\n",a);
	}

	return (0);
}
