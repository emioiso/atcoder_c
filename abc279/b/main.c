#include <stdio.h>
#include <stdint.h>
#include <string.h>

int	main(void)
{
	char s[101];	//voltage
	char t[101];	//tag

	scanf("%s%s",s,t);
	// printf("%s\n%s\n",s,t);

		if(strstr(s,t) != '\0'){
			printf("Yes\n");
		} else {
			printf("No\n");
		}

		return (0);
}
