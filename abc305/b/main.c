#include <stdio.h>
int	main(void)
{
	char p;
	char tmp;
	char q;
	scanf("%c%c%c",&p,&tmp,&q);
	// printf("%c %c\n",p,q);

	// A
	if(p == 'B' && q == 'C' || p == 'C' && q == 'B' || p == 'D' && q == 'E' || p == 'E' && q == 'D'){
		printf("%d\n", 1);
	}else if(p == 'A' && q == 'B' || p == 'B' && q == 'A'){
		printf("%d\n", 3);
	} else if(p == 'A' && q == 'C' || p == 'C' && q == 'A'|| p == 'C' && q == 'D'|| p == 'D' && q == 'C'){
		printf("%d\n", 4);
	} else if(p == 'B' && q == 'D' || p == 'D' && q == 'B'|| p == 'C' && q == 'E'|| p == 'E' && q == 'C'
				|| p == 'E' && q == 'F' || p == 'F' && q == 'E'){
		printf("%d\n", 5);
	} else if(p == 'B' && q == 'E' || p == 'E' && q == 'B' || p == 'D' && q == 'F' || p == 'F' && q == 'D'){
		printf("%d\n", 6);
	} else if(p == 'A' && q == 'D' || p == 'D' && q == 'A'){
		printf("%d\n", 8);
	} else if(p == 'A' && q == 'E' || p == 'E' && q == 'A' || p == 'F' && q == 'G' || p == 'G' && q == 'F'){
		printf("%d\n", 9);
	} else if(p == 'C' && q == 'F' || p == 'F' && q == 'C'){
		printf("%d\n", 10);
	} else if(p == 'B' && q == 'F' || p == 'F' && q == 'B'){
		printf("%d\n", 11);
	} else if(p == 'A' && q == 'F' || p == 'F' && q == 'A' || p == 'E' && q == 'G' || p == 'G' && q == 'E'){
		printf("%d\n", 14);
	} else if(p == 'G' && q == 'D' || p == 'D' && q == 'G'){
		printf("%d\n", 15);
	} else if(p == 'C' && q == 'G' || p == 'G' && q == 'C'){
		printf("%d\n", 19);
	} else if(p == 'B' && q == 'G' || p == 'G' && q == 'B'){
		printf("%d\n", 20);
	} else if(p == 'A' && q == 'G' || p == 'G' && q == 'A'){
		printf("%d\n", 23);
	}

	return (0);
}
