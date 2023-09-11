#include <stdio.h>
#include <string.h>

int main(void){
    char s[11];
    char newS[11];
    scanf("%s",s);
    // scanf("%d",&s);
    for (int i = 0; s[i] != '\0'; i++){
        // scanf("%s",s[i]);
        // printf("%c ",s[i]);
        newS[i] = s[i];
            
    }
    // printf("%s",newS);
    if(strcmp(newS,"tourist") == 0){
        printf("3858\n");
    } else if(strcmp(newS,"ksun48") == 0){
        printf("3679\n");
    } else if(strcmp(newS,"Benq") == 0){
        printf("3658\n");
    } else if(strcmp(newS,"Um_nik") == 0){
        printf("3648\n");
    } else if(strcmp(newS,"apiad") == 0){
        printf("3638\n");
    } else if(strcmp(newS,"Stonefeang") == 0){
        printf("3630\n");
    } else if(strcmp(newS,"ecnerwala") == 0){
        printf("3613\n");
    } else if(strcmp(newS,"mnbvmar") == 0){
        printf("3555\n");
    } else if(strcmp(newS,"newbiedmy") == 0){
        printf("3516\n");
    } else {
        printf("3481\n");
    }
    
}
