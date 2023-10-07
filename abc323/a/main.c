#include <stdio.h>
#include <stdbool.h>

int main(void){
    char s[17];
    scanf("%s",s);
    
    bool even = true;
    for(int i = 1; i <= 16; i++){
        // printf("s[%d] = %c\n",i,s[i]);
        
        if(i % 2 != 0 && s[i] == '1'){
            even = false;
            break;
        }
    }
    if(even == true){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return(0);
}
