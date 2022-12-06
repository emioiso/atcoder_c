#include <stdio.h>

int	main(void)
{
	int n;

	scanf("%d", &n);
	// printf("%d\n",n);

	int n1000 = n / 1000;			//千の位
	int n100 = (n / 100) % 10;		//百の位
	int n10 = (n / 10) % 10;		//十の位
	int n1 = n % 10;				//一の位

	// printf("千の位%d\n百の位%d\n十の位%d\n一の位%d\n",n1000,n100,n10,n1);

	if(((n100 == n10) && (n10 == n1)) || ((n1000 == n100) && (n100 == n10))){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
