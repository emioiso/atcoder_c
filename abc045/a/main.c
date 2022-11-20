#include <stdio.h>

int	main(void)
{
	char buf[1000];
	int a;
	int b;
	int h;

	// fgets(buf, sizeof(buf), stdin);
	// sscanf(buf,"%d%d%d", &a,&b,&h);
	// printf("\n%d\n%d\n%d\n",a,b,h);

	scanf("%d%d%d", &a,&b,&h);

	printf("%d\n",(a + b) * h / 2);

	return (0);
}
