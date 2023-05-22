#include <stdio.h>
int	main(void)
{
	long long a,b;

	scanf("%lld%lld",&a,&b);
	// printf("%lld %lld\n",a,b);

	long long div = a / b;
	// printf("%lld\n", div);
	long long quo = a % b;
	// printf("%lld\n", quo);

	if(quo == 0){
		printf("%lld\n", div);
	} else {
		printf("%lld\n", div + 1);
	}



	return (0);
}

