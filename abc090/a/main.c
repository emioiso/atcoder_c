#include <stdio.h>

int	main(void)
{
	char c[10][10];
	scanf("%s%s%s", c[0],c[1],c[2]);
	// printf("%s\n%s\n%s\n",c[0],c[1],c[2]);
	printf("%c%c%c\n",c[0][0],c[1][1],c[2][2]);	//二次元配列を使う。

	return (0);
}


// #include <stdio.h>

// int	main(void)
// {
// 	char c[10];

// 	scanf("%s",c);
// 	// printf("%s\n",c);
// 	printf("%c",c[0]);

// 	scanf("%s",c);
// 	// printf("%s\n",c);
// 	printf("%c",c[1]);

// 	scanf("%s",c);
// 	// printf("%s\n",c);
// 	printf("%c\n",c[2]);

// 	//acになったけどなんか別の方法がある気がする。

// 	return (0);
// }
