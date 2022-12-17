// 写経 #37225544

#include <stdio.h>

int	main(void)
{

	int	n;
	int	k;
	char s[51];

	scanf("%d%d%s",&n,&k,s);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%c\n",s[i]);
		if(i == k - 1){
			s[i] += 32;
		}
	}
	printf("%s");

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {

// 	int	n;
// 	int	k;
// 	char s[50];

// 	scanf("%d%d%s",&n,&k,s);
// 	// printf("%d %d %s\n",n,k,s);
// 	// printf("%s\n",s);
// 	// printf("%c\n",s[2]);
// 	// printf("%c\n",s[k - 1] + 32);

// 	int i;
// 	for (i = 0; i < n; i++)
// 	{
// 		printf("%c\n",s[i]);
// 		if(s[i] == s[k]){
// 			printf("%s");
// 		}
// 	}

// 	return (0);
// }
