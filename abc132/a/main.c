#include <stdio.h>

int	main(void)
{

	char s[5];

	scanf("%s",s);
	// printf("s = %s\n\n",s);

	int box = 0;
	for (int i = 0; i < 4; i++)
	{
		// printf("i = %c\n\n",s[i]);

		for (int j = 0; j < 4; j++)
		{
			// printf("j = %c\n",s[j]);

			if(s[i] == s[j]){
				box++;
				// printf("box = %d\n\n", box);
			}
		}
	}
	// printf("box = %d\n\n", box);

	if(box == 8){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
