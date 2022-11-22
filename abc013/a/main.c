#include <stdio.h>

int	main(void)
{
	char x[6];	//高橋君は 5 より大きい数を知らないから

	scanf("%s",x);
	// printf("%s\n",x);


	if(x[0] == 'A'){
		printf("%d\n",1);
	} else if(x[0] == 'B'){
		printf("%d\n",2);
	} else if(x[0] == 'C'){
		printf("%d\n",3);
	} else if(x[0] == 'D'){
		printf("%d\n",4);
	} else if(x[0] == 'E'){
		printf("%d\n",5);
	}

	return (0);
}
