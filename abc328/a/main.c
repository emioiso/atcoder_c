#include <stdio.h>
int main(void){
    int n,x;
    scanf("%d%d",&n,&x);
    
    int s[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&s[i]);
        // printf("%d ",s[i]);
    }
    
    int score = 0;
    for(int i = 0; i < n; i++){
        if(s[i] <= x){
            score += s[i];
        }
    }
    printf("%d\n",score);
    
}
