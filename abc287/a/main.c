// // #include <stdio.h>
// // int	main(void)
// // {
// // 	int	n;

// // 	scanf("%d",&n);
// // 	printf("%d\n",n);

// // 	char s[2];
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		scanf("%s",&s[i]);
// // 		printf("%c\n",s[0]);
// // 	}


// // 	return (0);
// // }

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	// printf("%d\n",n);

// 	char s[1000];
// 	int suma = 0;
// 	int sumf = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%s",&s[i]);
// 		// printf("%c\n", s[0]);

// 		if(s[0] == 'A'){
// 			suma++;
// 		} else {
// 			sumf++;
// 		}
// 	}
// 	printf("suma=%d\n", suma);
// 	printf("sumf=%d\n", sumf);

// 	if(suma >= sumf){
// 		printf("No\n");
// 	} else if(suma <= sumf){
// 		printf("Yes\n");
// 	}
// 	return (0);
// }

#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	// char s[10];
	// char a = 'A';
	int suma = 0;
	// printf("sumA=%d\n", sumA);
	int sumf = 0;
	for (int i = 0; i < n; i++)
	{
		char s[10];
		scanf("%s",s);
		// printf("s[i]=%c\n",s[i]);

		if(s[0] == 'A'){
			// printf("ああああああ\n");
			suma++;
			// printf("suma=%d\n", suma);
		} else if(s[0] == 'F'){
			// printf("いいいいい\n");
			sumf++;
			// printf("sumf=%d\n", sumf);
		}
	}
	// printf("suma=%d\n", suma);
	// printf("sumf=%d\n", sumf);

	if(suma < sumf){
		printf("Yes\n");
	} else if(suma > sumf){
		printf("No\n");
	}

	return (0);
}
