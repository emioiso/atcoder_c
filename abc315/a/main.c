#include <stdio.h>
int	main(void)
{
	char	s[101];
	char	ans[101];

	scanf("%s",s);
	// printf("%s\n",s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		// printf("s[i] = %c ",s[i]);
		if('a' != s[i] && 'i' != s[i] && 'u' != s[i] && 'e' != s[i] && 'o' != s[i]){
			//  || 'i' != s[i] || 'u' != s[i] || 'e' != s[i] || 'o' != s[i]
			ans[i] = s[i];
			printf("%c",ans[i]);
			// printf("ans[i] = %c\n",ans[i]);
		}
	}
	printf("\n");
	return (0);
}
