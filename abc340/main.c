#include <stdio.h>
int main(void){
    int a;
    int b;
    int d;
    scanf("%d%d%d",&a,&b,&d);
    
    for(int i = a; i <= b; i+=d){
        printf("%d ",i);
    }
    printf("\n");
}
