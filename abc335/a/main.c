#include <stdio.h>
#include <string.h>

int main(void){
    char n[101];
    scanf("%s",n);
    
    int len = strlen(n);
    char newS[101];
    // char newDUST[101];
    
    for(int i = 0; i < len; i++){
        if(i == len){
            newS[i] = '\n';
            // printf("%c",newS[i]);
        } else
        if(i == len - 1){
            newS[i] = '4';
            // break;
        } else {
            newS[i] = n[i];
        }
    }
    for(int i = 0; i < len; i++){
        printf("%c",newS[i]);
    }
    
}
