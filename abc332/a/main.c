#include <stdio.h>
int main(void){
    int n,s,k;
    scanf("%d%d%d",&n,&s,&k);
    int p[n];
    int q[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d%d",&p[i],&q[i]);
        // printf("%d %d\n",p[i],q[i]);
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        total += p[i]*q[i];
    }
    // printf("total = %d",total);
    if(total < s){
        printf("%d\n",total + k);
    } else {
        printf("%d\n",total);
    }
}
