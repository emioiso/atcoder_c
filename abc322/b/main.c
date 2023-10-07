#include <stdio.h>
#include <string.h>

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);

    char s[n];  
    scanf("%s",s);

    char t[m];  
    scanf("%s",t);

    // 接頭辞
    int isPrefix = strncmp(s, t, n) == 0;

    // 接尾辞
    int isSuffix = strncmp(s, t + (m - n), n) == 0;

    if (isPrefix && isSuffix) {
        printf("0\n");
    } else if (isPrefix) {
        printf("1\n");
    } else if (isSuffix) {
        printf("2\n");
    } else {
        printf("3\n");
    }

    return 0;
}
