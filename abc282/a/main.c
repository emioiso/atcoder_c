#include <stdio.h>

int	main(void)
{

	int	k;

	scanf("%d",&k);
	// printf("%d\n",k);

	char str[30] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i;
	char str2;
	for (i = 0; i < k; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {

// 	int	k;

// 	scanf("%d",&k);
// 	printf("%d\n",k);

// 	char str;
// 	int i;
// 	for (str = 'A'; str <= 'Z'; ++str)
// 	{
// 		printf("%c",str);
// 		for (i = 1; i <= k; i++)
// 		{
// 			printf("%d",str[k]);
// 		}
// 	}

// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {

// 	int	k;

// 	scanf("%d",&k);
// 	printf("%d\n",k);

// 	int i;
// 	for (i = 1; i <= k; i++)
// 	{
// 		printf("%d",i);

// 		char j[30];
// 		for (j = 'A'; j < 'Z'; j++)
// 		{
// 			printd("%d",j[i]);
// 		}
// 	}

// 	return (0);
// }
