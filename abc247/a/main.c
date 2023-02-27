//#30848628
#include <stdio.h>
int	main(void)
{
	char a,b,c,d;

	scanf("%c%c%c%c",&a,&b,&c,&d);
	// printf("%c%c%c%c",a,b,c,d);

	printf("0%c%c%c\n",a,b,c);
	//4桁目は必ず0になるから。
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[5];
// 	char lasts[5];
// 	for (int i = 0; i < 4; i++)
// 	{
// 		scanf("%s",&s[i]);
// 		// printf("%c",s[i]);
// 		if(s[i] == '1' || s[i] == '0' && s[i - 1] == '0' || s[i] == '0' && s[i + 1] == '0'){
// 			printf("%c", '0');
// 		} else if(s[i] == '0' || s[i] == '1' && s[i - 1] == '1' || s[i] == '1' && s[i + 1] == '1'){
// 			printf("%c", '1');
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }
