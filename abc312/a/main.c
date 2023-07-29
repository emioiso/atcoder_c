#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	main(void)
{
	char s[4];
	scanf("%s",s);
	// printf("%s\n",s);

	char alfa[8][4] = {
		"ACE",
		"BDF",
		"CEG",
		"DFA",
		"EGB",
		"FAC",
		"GBD"
	};

	bool flag = false;
	for (int i = 0; i < 7; i++)
	{
		// printf("alfa[%d] = %s\n",i, alfa[i]);
		// printf("s = %s\n", s);
		if (strcmp(s, alfa[i]) == 0){
			printf("Yes\n");
			return (0);
		} else {
			// printf("No\n");
			flag = true;
		}
	}
	if(flag == true){
		printf("No\n");
	}
	return (0);
}

