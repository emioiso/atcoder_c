#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    
    int d[n];
    for(int i = 1; i <= n; i++){
        scanf("%d",&d[i]);
        // printf("%d ",d[i]);
    }
    // printf("\n");
    int count = 0;
    int monthJu = 0;
    int monthIchi = 0;
    int dayJu = 0;
    int dayIchi = 0;
    
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= d[i]; j++){
            // printf("%d月%d日\n",i,j);
            
            // 
            if(i <= 9 && j <= 9 && i == j){
                // printf("aaa\n");
                count++;
            // 
            } else if(i <= 9 && j >= 10){
                dayJu = (j / 10) % 10;
                dayIchi = j % 10;
                if(i == dayJu && i == dayIchi){
                    // printf("iii\n");    
                    count++;
                }
                // printf("iii\n");
            // 
            } else if(i >= 10 && j <= 9){
                monthJu = (i / 10) % 10;
                monthIchi = i % 10;
                if(j == monthJu && j == monthIchi){
                    // printf("uuu\n");    
                    count++;
                }
            } else if(i >= 10 && j >= 10){
                monthJu = (i / 10) % 10;
                monthIchi = i % 10;
                dayJu = (j / 10) % 10;
                dayIchi = j % 10;
                if(dayIchi == monthJu && dayJu == monthIchi && monthJu == dayJu && monthIchi){
                    // printf("eee\n");    
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}
