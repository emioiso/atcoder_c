#include <stdio.h>
int main(void){
    char s[101];
    scanf("%s",s);
    
    char tmp[101];
    char tmp2[101];
    int count = 0;
    int count2 = 0;
    int cpy = 0;
    int cpy2 = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[0] == s[i]){
            tmp[i] = s[i];
            count++;
            // printf("tmp = %c\n",tmp[i]);
            // printf("count = %d\n",count);
            cpy = i;
        } else {
            tmp2[i] = s[i];
            count2++;
            // printf("tmp2 = %c\n",tmp2[i]);
            // printf("count2 = %d\n",count2);
            cpy2 = i;
        }
    }
    if(count > count2){
        // printf("cpy2 = %d",cpy2 + 1);
        printf("%d",cpy2 + 1);
    } else {
        // printf("cpy = %d",cpy + 1);
        printf("%d",cpy + 1);
    }
}
