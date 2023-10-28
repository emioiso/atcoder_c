#include <stdio.h>
int main(void){
    int x,y;
    scanf("%d%d",&x,&y);
   if((x < y && y - x <= 2) || (x > y && x - y <= 3)){
       printf("Yes\n");
   } else{
       printf("No\n");
   }
    
}
