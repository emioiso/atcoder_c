#include <stdio.h>
int main(void){
    int n,l;
    scanf("%d%d",&n,&l);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        // printf("%d\n",a[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(l <= a[i]){
            count++;            
        }
    }
    printf("%d\n",count);
}

