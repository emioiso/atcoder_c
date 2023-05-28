#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n];
	char t[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s",&s[i],&t[i]);
		// printf("%c %c",s[i],t[i]);

		if(s[i] == t[i]){
			count++;
		} else if(s[i] == '1' && t[i] == 'l' || s[i] == 'l' && t[i] == '1'){
			count++;
		}  else if(s[i] == '0' && t[i] == 'o' || s[i] == 'o' && t[i] == '0'){
			count++;
		}
	}
	if(count == n){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
