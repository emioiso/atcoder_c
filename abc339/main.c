#include <stdio.h>
#include <string.h>

int main(void){
    char s[101];
    scanf("%s",s);
    // printf("%s\n",s);
    
    int sLen = strlen(s);
    // printf("%d\n",sLen);
    
    char newS[101];
    int count = 0;
    
    //初期化
    for(int i = 0; i < 101; i++){
        newS[i] = '\0';
    }
    
    for(int i = sLen - 1; i >= 0; i--){
        // printf("%c",s[i]); 
        if(s[i] != '.'){
            // printf("%c",s[i]); 
            newS[count] = s[i];
            // printf("%c",newS[i]); 
            count++;
        } else {
            break;
        }
    }
    for(int i = count - 1; i >= 0; i--){
        printf("%c",newS[i]); 
    }
    // printf("\n");
    return 0;
}
