#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n", n);

	char s[n];
	int countY = 0;
	int countN = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c",s[i]);

		if(s[i] == 'M' && s[i + 1] == 'F'){
			// printf("Yes\n");
			countY++;
		} else if (s[i] == 'F' && s[i + 1] == 'M'){
			// printf("Yes\n");
			countY++;
		} else if (s[i] == 'M' && s[i + 1] == 'M'){
			// printf("No\n");
			countN++;
		} else if (s[i] == 'F' && s[i + 1] == 'F'){
			// printf("No\n");
			countN++;
		} else {
			// printf("Yes\n");
			countY++;
		}
	}

	if(countN > 0){
		printf("No\n");
	} else {
		printf("Yes\n");
	}

	return (0);
}
