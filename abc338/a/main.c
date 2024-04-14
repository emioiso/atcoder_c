#include <stdio.h>
#include <stdbool.h>

int main(void){
    char s[101];
    scanf("%s",s);
    for(int i = 0; s[i] != '\0'; i++){
        // printf("%c",s[i]);
    }
    printf("\n");
    bool flag = true;
    for(int i = 0; s[i] != '\0'; i++){
        // printf("%c",s[0]);
        
        if(s[0] >= 'A' && s[0] <= 'Z'){
        } else {
            flag = false;
            break;
        }
    }
    
    for(int i = 1; s[i] != '\0'; i++){
        // printf("%c",s[i]);
        
        if(s[i] >= 'a' && s[i] <= 'z'){
            // printf("Yes\n");
        } else {
            flag = false;
            break;
        }
    }
    if(flag == true){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
}
