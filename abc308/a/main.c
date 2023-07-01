#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int s[8];
	bool flag = true;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &s[i]);
		// printf("%d ", s[i]);
    }

	// 昇順になっているか判定
	for (int i = 1; i < 8; i++) {
		if (s[i] < s[i - 1]) {
			flag = false;
			break;
		}
	}
	// 100以下または675以上または25の倍数でなければを判定
	for (int i = 0; i < 8; i++) {
		if (s[i] < 100 || s[i] > 675 || s[i] % 25 != 0) {
			flag = false;
			break;
		}
	}
	// flag判定
	if (flag == true) {
		printf("Yes\n");
	} else {
	printf("No\n");
	}
	return 0;
}
