#include <stdio.h>
int	main(void)
{
	char w[31];
	scanf("%s",w);

	for (int i = 0; w[i] != '\0'; i++)
	{
		// printf("%c\n",w[i]);
		if(w[i] != 'a' && w[i] != 'i' && w[i] != 'u' && w[i] != 'e' && w[i] != 'o'){
			printf("%c",w[i]);
		}
	}
	printf("\n");
	return (0);
}
