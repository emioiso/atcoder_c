#include <stdio.h>
int	main(void)
{
	char s[3];

	scanf("%s",s);
	// printf("%s\n",s);
	// printf("%c\n",s[0]);

	int a = 0;
	int b = 0;
	if (s[0] == '1'){
		a = 1;
	} else if (s[0] == '2'){
		a = 2;
	} else if (s[0] == '3'){
		a = 3;
	} else if (s[0] == '4'){
		a = 4;
	} else if (s[0] == '5'){
		a = 5;
	} else if (s[0] == '6'){
		a = 6;
	} else if (s[0] == '7'){
		a = 7;
	} else if (s[0] == '8'){
		a = 8;
	} else if (s[0] == '9'){
		a = 9;
	}

	if (s[2] == '1'){
		b = 1;
	} else if (s[2] == '2'){
		b = 2;
	} else if (s[2] == '3'){
		b = 3;
	} else if (s[2] == '4'){
		b = 4;
	} else if (s[2] == '5'){
		b = 5;
	} else if (s[2] == '6'){
		b = 6;
	} else if (s[2] == '7'){
		b = 7;
	} else if (s[2] == '8'){
		b = 8;
	} else if (s[2] == '9'){
		b = 9;
	}

	printf("%d\n", a * b);
	return (0);
}
