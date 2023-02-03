#include <stdio.h>
int	main(void)
{
	int	n;
	scanf("%d",&n);
	// printf("%d\n",n);
	char s[n];
	char ss[n];
	char dust[n];
	// scanf("%s",s);
	// printf("%s\n",s);

	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c",s[i]);

		if(s[i] == 'n' && s[i + 1] == 'a'){
			dust[i] = s[i];
			ss[i] = 'n';
			printf("%c", ss[i]);		//変換指定子を%dにしてた！
			ss[i] = 'y';
			printf("%c", ss[i]);
		} else {
			ss[i] = s[i];
			printf("%c", ss[i]);
		}
	}
	printf("\n");
	return (0);
}
