#include <stdio.h>
int main(void){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    // printf("%d%d",a,b);
    
    int sumA = 1;
    for(int i = 0; i < b; i++){
        sumA *= a;
    }
    // printf("%d",sumA);
    int sumB = 1;
    for(int i = 0; i < a; i++){
        sumB *= b;
    }
    // printf("%d",sumB);
    printf("%d\n",sumA + sumB);

}
