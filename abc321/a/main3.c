#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    int sCount = 0;
    int nDigit = n; 
    
    while (nDigit != 0) {
        nDigit /= 10; 
        sCount++;
    }
    
    // printf("sCount = %d\n", sCount);
    
    if(sCount == 5){
        int digit5 = (n / 10000) % 10; 
        // printf("digit5 = %d\n",digit5);
        int digit4 = (n / 1000) % 10; 
        // printf("digit4 = %d\n",digit4);
        int digit3 = (n / 100) % 10; 
        // printf("digit3 = %d\n",digit3);
        int digit2 = (n / 10) % 10; 
        // printf("digit2 = %d\n",digit2);
        int digit1 = n % 10; 
        // printf("digit1 = %d\n",digit1);
        
        if(digit5 > digit4 && digit4 > digit3 && digit3 > digit2 && digit2 > digit1){
            printf("Yes");    
        } else {
            printf("No");    
        }
    } else if(sCount == 4){
        int digit4 = (n / 1000) % 10; 
        // printf("digit4 = %d\n",digit4);
        int digit3 = (n / 100) % 10; 
        // printf("digit3 = %d\n",digit3);
        int digit2 = (n / 10) % 10; 
        // printf("digit2 = %d\n",digit2);
        int digit1 = n % 10; 
        // printf("digit1 = %d\n",digit1);

        if(digit4 > digit3 && digit3 > digit2 && digit2 > digit1){
            printf("Yes");    
        } else {
            printf("No");    
        }
    } else if(sCount == 3){
        int digit3 = (n / 100) % 10; 
        // printf("digit3 = %d\n",digit3);
        int digit2 = (n / 10) % 10; 
        // printf("digit2 = %d\n",digit2);
        int digit1 = n % 10; 
        // printf("digit1 = %d\n",digit1);
        
        if(digit3 > digit2 && digit2 > digit1){
            printf("Yes");    
        } else {
            printf("No");    
        }
    } else if(sCount == 2){
        int digit2 = (n / 10) % 10; 
        // printf("digit2 = %d\n",digit2);
        int digit1 = n % 10; 
        // printf("digit1 = %d\n",digit1);
        
        if(digit2 > digit1){
            printf("Yes");    
        } else {
            printf("No");    
        }
    } else if(sCount == 1){
        printf("Yes");    
    } else {
        printf("No");    
    }
    return(0);
}
