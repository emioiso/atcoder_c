#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char s[101];
    scanf("%s", s);
    int countS = strlen(s);
    
    int maxLen = 0;
    
    for (int i = 0; i < countS; i++) {
        for (int j = i; j < countS; j++) {
            bool kaibun = true;
            for (int k = 0; k < (j - i + 1) / 2; k++) {
                if (s[i + k] != s[j - k]) {
                    kaibun = false;
                    break;
                }
            }
            if (kaibun) {
                int nowLen = j - i + 1;
                if (nowLen > maxLen) {
                    maxLen = nowLen;
                }
            }
        }
    }
    
    printf("%d\n", maxLen);
    
    return 0;
}
