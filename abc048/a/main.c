// 写経#36165632

#include <stdio.h>

int	main(void)
{
	char s1[101];
	char s2[101];
	char s3[101];

	// scanf("%s%s",s1,s2);
	// printf("%s %s\n",s1,s2);

	scanf("%s%s%s",s1,s2,s3);
	// printf("%s %s %s\n",s1,s2,s3);

	printf("%c%c%c\n", s1[0],s2[0],s3[0]);
	return (0);
}

// s#include <stdio.h>

// int	main(void)
// {
// 	char buf[101];
// 	char x[101];

// 	fgets(buf, sizeof(buf),stdin);
// 	sscanf(buf,"%s", x);
// 	printf("%s\n",x);


// 	return (0);
// }
