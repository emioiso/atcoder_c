#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long a[64];
    unsigned long long sum = 1;
	unsigned long long total = 0;

    for (int i = 0; i < 64; i++)
    {
        scanf("%llu", &a[i]);
		// printf("%llu ", a[i]);

		if(a[i] == 1){
			sum = pow(2, i);
			// printf("sum = %lld\n", sum);
			total += sum;
			// printf("total = %lld\n", total);
		}
	}
	printf("%llu\n", total);
    return 0;
}
