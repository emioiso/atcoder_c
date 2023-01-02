//写経 #37625380

#include <stdio.h>

int	main(void)
{

	long long int	n;//ボールの総数
	long long int	a;//青いボールの総数
	long long int	b;//赤いボールの総数

	scanf("%lld%lld%lld",&n,&a,&b);
	// printf("%lld %lld %lld\n",n,a,b);

	long long int	ab = a + b;//青と赤いボールの総数
	// printf("青と赤いボールの総数=%lld\n",ab);

	long long int	nab = n / ab * a;
	// printf("%lld\n",nab);

	long long int mod = n % ab;
	// printf("%lld\n",mod);

	if(mod <= a){
		nab += mod;
	} else {
		nab += a;
	}
	printf("%lld\n", nab);

	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	long long int	n;//ボールの総数
// 	long long int	a;//青いボールの総数
// 	long long int	b;//赤いボールの総数

// 	scanf("%lld%lld%lld",&n,&a,&b);
// 	printf("%lld %lld %lld\n",n,a,b);

// 	long long int	ab = a + b;//青と赤いボールの総数
// 	printf("青と赤いボールの総数=%lld\n",ab);

// 	long long int	nab = n / ab;//ボール / 青と赤いボール
// 	printf("セット数=%lld\n",nab);

// 	if(a == 0){
// 		printf("aが0の時%lld\n",a);
// 		return (0);
// 	}

// 	if((nab == 1) && (a < b)){
// 		printf("%lld\n", b - a);
// 	} else if((nab == 1) && (a > b)){
// 		printf("%lld\n", a - b);
// 		return (0);
// 	}

// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	long long int	n;//ボールの総数
// 	long long int	a;//青いボールの総数
// 	long long int	b;//赤いボールの総数

// 	scanf("%lld%lld%lld",&n,&a,&b);
// 	// printf("%lld %lld %lld\n", n, a, b);

// 	long long int	ab = a + b;//青と赤いボールの総数
// 	// printf("%lld\n",ab);

// 	if(a == 0){
// 		printf("%lld\n", a);
// 		return (0);
// 	}

// 	if((n >= ab) && (a < b)){
// 		printf("%lld\n", n % ab + a);
// 	}else if((n >= ab) && (a > b)){
// 		printf("%lld\n", n % ab + (a - (n % ab)));
// 		return (0);
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	long long int	n;//ボールの総数
// 	long long int	a;//青いボールの総数
// 	long long int	b;//赤いボールの総数

// 	scanf("%lld%lld%lld",&n,&a,&b);
// 	// printf("%d %d %d\n",n,a,b);
// 	if((a == 0) || (n == (a + b) || (a == b)) || ()){
// 		// 8 0 8
// 		// ○○○○○○○○
// 		// 8 4 4
// 		// ●●●● ○○○○
// 		// 8 0 4
// 		// ○○○○○○○○
// 		printf("%lld\n", a);
// 		return 0;
// 	}


// 	if(n > (a + b) && (a < b)){
// 		printf("%lld\n", n - b);
// 		// ●●●　◯◯◯◯　●
// 	} else if(n > (a + b) && (a > b)){
// 		printf("%lld\n", n - a);
// 		// 8 4 3
// 		// ●●●● ○○○　●
// 	}

// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	long long int	n;//ボールの総数
// 	long long int	a;//青いボールの総数
// 	long long int	b;//赤いボールの総数

// 	scanf("%lld%lld%lld",&n,&a,&b);
// 	// printf("%lld %lld %lld\n", n, a, b);

// 	long long int	ab = a + b;//青と赤いボールの総数
// 	// printf("%lld\n",ab);

// 	if(a == 0){
// 		printf("%lld\n", a);
// 		return (0);
// 	}

// 	if((n >= ab) && (a < b)){
// 		printf("%lld\n", n % ab + a);
// 	}else if((n >= ab) && (a > b)){
// 		printf("%lld\n", n % ab + (a - (n % ab)));
// 		return (0);
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	long long int	n;//ボールの総数
// 	long long int	a;//青いボールの総数
// 	long long int	b;//赤いボールの総数

// 	scanf("%lld%lld%lld",&n,&a,&b);
// 	// printf("%d %d %d\n",n,a,b);
// 	if((a == 0) || (n == (a + b) || (a == b)) || ()){
// 		// 8 0 8
// 		// ○○○○○○○○
// 		// 8 4 4
// 		// ●●●● ○○○○
// 		// 8 0 4
// 		// ○○○○○○○○
// 		printf("%lld\n", a);
// 		return 0;
// 	}


// 	if(n > (a + b) && (a < b)){
// 		printf("%lld\n", n - b);
// 		// ●●●　◯◯◯◯　●
// 	} else if(n > (a + b) && (a > b)){
// 		printf("%lld\n", n - a);
// 		// 8 4 3
// 		// ●●●● ○○○　●
// 	}

// 	return (0);
// }

