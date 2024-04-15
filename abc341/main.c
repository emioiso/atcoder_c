#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        if(i == 0){
            printf("1");
        } else {
            printf("01");
        }
    }
    printf("\n");
}
