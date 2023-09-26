#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    
    char s[6];
    scanf("%s",s);
    
    int sCount = strlen(s);    
    // printf("sCount = %d",sCount);
    
    bool leftDigitIsBigger = true;
    for(int i = 0; i < sCount - 1; i++){
        if(s[i] <= s[i + 1]){
            leftDigitIsBigger = false;
            break;
        }
    }
    if(leftDigitIsBigger == false){
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return(0);
}
