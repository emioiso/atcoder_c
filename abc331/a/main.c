#include <stdio.h>
int main(void){
    int M,D,y,m,d;
    scanf("%d%d", &M,&D);
    scanf("%d%d%d", &y,&m,&d);
    // printf("%d %d",M,D);
    // printf("%d %d %d",y,m,d);
    
    if(D == d){
        if(M == m){
            printf("%d 1 1\n",y + 1);
        } else if(M > m){
            printf("%d %d 1\n",y, m + 1);
        }
    } else {
        printf("%d %d %d\n",y,m,d + 1);
    }
}
