#include <stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);

    int d[m];
    int totalDays = 0;

    for (int i = 0; i < m; i++) {
        scanf("%d", &d[i]);
        totalDays += d[i];
    }

    int centerDay = (totalDays + 1) / 2;

    int month = 0;
    int day = 0;

    for (int i = 0; i < m; i++) {
        if (centerDay <= d[i]) {
            month = i + 1;
            day = centerDay;
            break;
        }
        centerDay -= d[i];
		// printf("centerDay = %d\n",centerDay);
	}

	printf("%d %d\n", month, day);

    return 0;
}
