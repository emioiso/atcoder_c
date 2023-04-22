#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n + 1];
	int count = 0;
	int yes = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c",s[i]);

		if(s[i] == '|'){
			count++;
		} else if (count == 1 && s[i] == '*'){
			count++;
			yes++;
		} else if (count == 1 && yes == 1 && s[i] == '|'){
			count++;
		}
	}

if(count == 3 && yes == 1){
	printf("in\n");
} else {
	printf("out\n");
}

	return (0);
}
