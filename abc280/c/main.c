// 写経　#36973358

#include <stdio.h>

int	main(void)
{
	char s[500001];
	char t[500001];

	scanf("%s%s", s, t);
	// printf("%s %s\n",s,t);

	int ans = 1;
	int i;
	for (i = 0; t[i] != '\0'; i++)
	{
		if(s[i] == t[i]){
			ans++;
		} else {
			break;
		}
	}
	printf("%d\n", ans);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[100000];
// 	char t[100000];

// 	scanf("%s%s",s,t);
// 	// printf("%s %s\n",s,t);

// 	int i;
// 	for (i = 0; t[i] <= s[i]; i++)
// 	{
// 	}
// 	printf("%d\n", i);
// 	return (0);
// }
