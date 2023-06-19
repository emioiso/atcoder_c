#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[64];
    unsigned long long sum = 0;
	unsigned long long total = 0;

    for (int i = 0; i < 64; i++)
    {
        scanf("%d", &a[i]);
		// printf("%d ", a[i]);

		if(a[i] == 1){
			sum = pow(2, i);
			// printf("sum = %llu\n", sum);
			total += sum;
			// printf("total = %llu\n", total);
		}
	}
	printf("%llu\n", total);
    return 0;
}
