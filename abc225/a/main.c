#include <stdio.h>

int	main(void)
{
	char s[4];

	scanf("%s",s);
	// printf("%s\n",s);

	int sum0 = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		if(s[i] == s[0]){
			sum0++;
		}
		if(s[i] == s[1]){
			sum1++;
		}
		if(s[i] == s[2]){
			sum2++;
		}
	}
	// printf("%d\n%d\n%d\n", sum0,sum1,sum2);

	int sum012 = sum0 + sum1 + sum2;
	// printf("%d\n", sum012);

	if(sum012 == 9){
		printf("1\n");
	} else if(sum012 == 5){
		printf("3\n");
	} else if(sum012 == 3){
		printf("6\n");
	}
	return (0);
}
