#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n];
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%d回目 %c\n",i,s[i]);

		if(s[i] == '1'){
			// printf("%d\n", i);
			break;
		}
	}
	if(i % 2 == 0){
		printf("Aoki\n");
	} else {
		printf("Takahashi\n");
	}

	return (0);
}
