#include <stdio.h>
//boolを使う時に必要。
#include <stdbool.h>

int main(void){
    //問題文では、整数が標準入力から入力されるが、
    //文字列で受け取った方が判定しやすいと思ったのでchar型で受け取りました。
    char s[6];
    scanf("%s",s);
    //sの長さを調べるためにsCountを宣言している。strlen関数を使っても良い。
    //良いコードにしてみたで更新済み。
    int sCount = 0;    
    for(int i = 0; s[i] != '\0'; i++){
        // printf("%c",s[i]);
        sCount++;
    }
    // printf("%d",sCount);
    //boolの初期値をtrueにし、
    //以下のfor文の条件分岐で右隣の文字の方が大きいかつ、同じ場合はfalseを代入する。
    bool flag = true;
    //以下のfor文では、自分自身と自分の右隣の要素を比較するので
    //ループが最後の要素に達したときには右隣の要素が存在しないため、エラーが発生する可能性がある。
    for(int i = 0; i < sCount - 1; i++){
        //s[i + 1]と記述すると、自分の右隣と比較できる。
        //文字同士を比較するときはアスキーコードで比較しているので文字でも比較できる。
        if(s[i] <= s[i + 1]){
            flag = false;
        }
    }
    //flagがfalseの場合はNo、それ以外はYesを出力している
    if(flag == false){
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return(0);
}
