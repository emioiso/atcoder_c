#include <stdio.h>
#include <string.h>

int	main(void)
{

	char	S[15];
	char	T[15];

	scanf("%s%s",S,T);
	// printf("%s\n%s\n",S,T);

	if(strncmp(S,T,strlen(S)) == 0){
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return (0);
}
