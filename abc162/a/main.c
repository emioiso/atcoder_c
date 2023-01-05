#include <stdio.h>

int	main(void)
{

	char n[3];

	// scanf("%s",n);s
	// printf("%d\n",n);
	// printf("%c\n",n[0]);
	// printf("%c\n",n[1]);
	// printf("%c\n",n[2]);

	int i = 0;
	int seven = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s",n);
		// printf("%c\n",n[i]);
		if(n[i] == '7'){
			seven++;
			// printf("seven=%d\n",seven);
		}
	}
	if(seven >= 1){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
