#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char t[n];
	scanf("%s",t);
	int suma = 0;
	int sumt = 0;
	for (int i = 0; i < n; i++)
	{
		// printf("%c",t[i]);

		if(t[i] == 'A'){
			suma++;
			// printf("%d\n", suma);
		} else if(t[i] == 'T'){
			sumt++;
			// printf("%d\n", sumt);
		}

		if(suma == n / 2){
			break;
		}
		if (sumt == n /2){
			break;
		}
	}
	if(suma > sumt){
		printf("A\n");
	} else if(suma < sumt){
		printf("T\n");
	}

	return (0);
}
