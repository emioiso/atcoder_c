#include <stdio.h>
int main(void){
    int k,g,m;
    scanf("%d%d%d",&k,&g,&m);
    
    int tmpG = 0;
    int tmpM = 0;
    
    for(int i = 0; i < k; i++){
        if(tmpG == g){
            tmpG = 0; 
        } else if(tmpM == 0){
            tmpM = m; 
        } else {
            while(tmpG != g && tmpM != 0){
                tmpG++;
                tmpM--;
            }
        }
    }
    
    printf("%d %d\n",tmpG,tmpM);
}
