#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
	// printf("%d",n);

    if (n <= 999) {
        printf("%d\n", n);
    } else if (n <= 9999) {
        printf("%d\n", n / 10 * 10);
    } else if (n <= 99999) {
        printf("%d\n", n / 100 * 100);
    } else if (n <= 999999) {
        printf("%d\n", n / 1000 * 1000);
    } else if (n <= 9999999) {
        printf("%d\n", n / 10000 * 10000);
    } else if (n <= 99999999) {
        printf("%d\n", n / 100000 * 100000);
    } else if (n <= 999999999) {
        printf("%d\n", n / 1000000 * 1000000);
    } else if (n <= 9999999999) {
        printf("%d\n", n / 10000000 * 10000000);
    }

    return 0;
}
