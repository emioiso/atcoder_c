#include <stdio.h>
int	main(void)
{
	int n;
	char pai[201] = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

	scanf("%d",&n);
	printf("%d\n",n);

	for (int i = 0; pai[i] != '\0'; i++)
	{
		if(i + 2 == n){
			printf("%c\n", pai[i]);
		}
	}


	return (0);
}
