#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    
    // int hyaku = n/100;
    // printf("%d\n",hyaku);
    // int juu = (n / 10) % 10;
    // printf("%d\n",juu);
    // int ichi = n % 10;
    // printf("%d\n",ichi);
    
    // int likeNumber = hyaku * juu;
    // printf("%d\n",likeNumber);
   
    for(int num = n; num <= 919; num++){
        
       if ( num == 100 || num == 111 || num == 122 || num == 133 || num == 144 || num == 155 || 
            num == 166 || num == 177 || num == 188 || num == 199 ||
            num == 200 || num == 212 || num == 224 || num == 236 || num == 248 ||
            num == 300 || num == 313 || num == 326 || num == 339 ||
            num == 400 || num == 414 || num == 428 ||
            num == 500 || num == 515 ||
            num == 600 || num == 616 ||
            num == 700 || num == 717 ||
            num == 800 || num == 818 ||
            num == 900 || num == 919) {
            
            printf("%d",num);
            break;
        }
            
    }
    
    
}

