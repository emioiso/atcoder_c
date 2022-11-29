//写経　#27629405

#include <stdio.h>
int main(){
	long long int a,b,c;
	long long int mod=1000000000+7;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld\n",a*b%mod*c%mod);	//ここの計算式がわからなかった。
									//桁数が多い時は分割して割り算する
	return 0;
}

// // 10の9乗　1000000000
// #include <stdio.h>

// int	main(void)
// {
// 	unsigned long long int a;
// 	unsigned long long int b;
// 	unsigned long long int c;
// 	unsigned long long int w = 1000000000 + 7;

// 	scanf("%llu%llu%llu",&a,&b,&c);
// 	// printf("%llu %llu %llu\n",a,b,c);

// 	signed long long int x = a * b * c; // 直方体の体積の求め方　縦×横×高さ
// 	printf("%llu\n", x % w);


// 	return (0);
// }
