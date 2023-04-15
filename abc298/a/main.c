#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n];
	int no = 0;
	int yes = 0;
	int all_no = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c",s[i]);

		if(s[i] == 'x'){
			no++;
			break;
		}
		if(s[i] != 'o'){
			all_no++;
			// printf("all_no=%d\n", all_no);
		} else if(s[i] == 'o' || s[i] != 'x'){
			yes++;
		}
	}
	if(no >= 1){
		printf("No\n");
	} else if(all_no == n){
		printf("No\n");
	}else {
		printf("Yes\n");
	}

	return (0);
}
