#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int x[n];
    int y[n];
    
    int countX = 0;
    int countY = 0;
    for(int i = 0; i < n; i++){
        // scanf("%d%d",&x,&y);
        scanf("%d%d",&x[i],&y[i]);
        // printf("%d %d\n",x,y);
        // printf("%d %d\n",x[i],y[i]);
    }
    
    for(int i = 0; i < n; i++){
        countX += x[i];
        // printf("countX = %d\n",countX);
        countY += y[i];
        // printf("countY = %d\n",countY);
    }
    if(countX > countY){
        printf("Takahashi\n");
    } else if(countX < countY){
        printf("Aoki\n");
    } else {
        printf("Draw\n");
    }
}