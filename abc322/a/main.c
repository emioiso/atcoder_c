#include <stdio.h>
#include <stdbool.h> 

int main(void){
    int n;
    scanf("%d",&n);
    // printf("%d\n",n);
    
    char str[n];
    scanf("%s",str);
    for(int i = 0; i < n; i++){
        // printf("%c",str[i]);
    }
    // printf("\n");
    
    bool thisIsABC = false;
    int firstNum = -1;
    int count = 0;
    for(int i = 0; i < n - 2; i++){
        // printf("%c",str[i]);
        // printf("%c",str[i + 1]);
        // printf("%c",str[i + 2]);
        if(str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C'){
            thisIsABC = true;
            firstNum = i + 1;
            break;
        }
    }
        if(thisIsABC){
            printf("%d\n",firstNum);
        } else {
            printf("-1\n");
        }
        return(0);
    }
    