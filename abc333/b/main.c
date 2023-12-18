#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    char s[3];
    char t[3];
    scanf("%s%s",s,t);
    // printf("%s%s",s,t);
    int lineSegmentS = abs(s[0] - s[1]);
    int lineSegmentT = abs(t[0] - t[1]);
    // printf("%d%d",lineSegm?entS,lineSegmentT);    
    if(lineSegmentS - lineSegmentT == 0){
        printf("Yes\n");
    } else if(lineSegmentT + lineSegmentS == 5){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
