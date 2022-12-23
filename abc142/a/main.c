//写経　#32840278

#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	double x = (double)((n + 1) / 2) / n;

	printf("%.10f\n", x);


	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	int	n;

// 	scanf("%d",&n);
// 	// printf("%d\n",n);

// 	int evenN = 2 % n;
// 	// printf("%d\n",evenN);

// 	if((n % 2) == 0){
// 		printf("%.10f\n",(double)evenN / (double)n);
// 	} else if((n % 2) == 1){
// 		printf("%.10f\n",((double)evenN + 1) / (double)n);
// 	}
// 	return (0);
// }
