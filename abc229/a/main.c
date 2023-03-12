#include <stdio.h>
int	main(void)
{
	char	s1[3];
	char	s2[3];

	scanf("%s%s",s1,s2);
	// printf("%s\n%s\n",s1,s2);

	if(s1[0] == '#' && s1[1] == '.' && s2[0] == '.' && s2[1] == '#' ||
		s1[0] == '.' && s1[1] == '#' && s2[0] == '#' && s2[1] == '.'){
			printf("No\n");
	} else {
		printf("Yes\n");
	}
	return (0);
}
