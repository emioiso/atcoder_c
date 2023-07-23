#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n];
	bool a = false;
	bool b = false;
	bool c = false;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c ",s[i]);
		if(a == true && b == true && c == true ){
			break;
		} else if('A' == s[i]){
			a = true;
			count++;
		} else if('B' == s[i]){
			b = true;
			count++;
		} else if('C' == s[i]){
			c = true;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
