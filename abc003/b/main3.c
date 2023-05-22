#include <stdio.h>   //scanf関数・ printf関数を使う時に必要なヘッダーファイル
#include <string.h>  //strlen関数を使う時に必要なヘッダーファイル
#include <stdbool.h> //boolを使う時に必要なヘッダーファイル
int	main(void)
{
	char s[11],t[11];

	//for文でsとtの文字列を先頭から一文字ずつ判定するので
	//標準入力の値を取得する。
	scanf("%s%s", s, t);
	// printf("%s %s\n",s,t);

	//for文でsとtの文字列を先頭から一文字ずつ判定するので
	//文字列のsかtの文字列の長さを取得する。int n = strlen(t);でも可
	int n = strlen(s);
	// printf("%d\n", n);

	//boolの初期値をtrueにしてfalseの場合の条件を以下で判定する。
	bool win = true;

	for (int i = 0; i < n; i++)
	{
		//for文でsとtの文字列を先頭から一文字ずつ比較して同じ文字でない時は win に false を代入する。
		if(s[i] != t[i]){
			win = false;
		}
			//for文でsとtの文字列を先頭から一文字ずつ比較して同じ文字でない時かつ
			//for文でsとtの文字列を先頭から一文字ずつ'@'でない場合は win に false を代入する。
			if(s[i] != '@' && t[i] != '@'){
			win = false;
			}
			//for文でsとtの文字列を先頭から一文字ずつ比較して同じ文字でない時かつ
			//s[i]が＠でt[i]がa,t,c,o,d,e,r以外の場合はcanWinにfalseを代入する。
			if(s[i] == '@' &&
				!(t[i] == 'a' ||
				t[i] == 't' ||
				t[i] == 'c' ||
				t[i] == 'd' ||
				t[i] == 'e' ||
				t[i] == 'r'
				)){
				win = false;
				break;
			}

			//for文でsとtの文字列を先頭から一文字ずつ比較して同じ文字でない時かつ
			//t[i]が＠でs[i]がa,t,c,o,d,e,r以外の場合はcanWinにfalseを代入する。
			if(t[i] == '@' && !(
				s[i] == 'a' ||
				s[i] == 't' ||
				s[i] == 'c' ||
				s[i] == 'd' ||
				s[i] == 'e' ||
				s[i] == 'r' )){
				win = false;
				break;
			}
	}
	if(win){
		printf("You can win\n");
	} else {
		printf("You will lose\n");
	}

	return (0);
}
