#include <stdio.h>

int	main(void)
{
	char a[100];
	char b[100];
	char c[100];

	scanf("%s%s%s",a,b,c);
	// printf("%s %s %s\n",a,b,c);

	// printf("%c %c\n", a[0],a[\0]-1);
	//できないこと → 添字を使ってヌル文字を表現できない。a[\0]-1 がエラーになる。

	// 頭の中を整理。
	// 添字	0 1 2 3 4 5	6
	// 値		t a n a k a \0

	// 文字列の長さを調べる。
	// 文字列の長さが調べられたから文字列の最初の文字と最後の文字が出力できるかデバックする。

// 文字列の長さを調べる。
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
	}
	// printf("%d\n",i);
	int last_a;//aの文字列の長さ
	last_a = i;
	// printf("aの文字列の長さ%d\n",last_a);

	int j;
	for (j = 0; b[j] != '\0'; j++)
	{
	}
	// printf("%d\n",j);

	int last_b;//bの文字列の長さ
	last_b = j;
	// printf("bの文字列の長さ%d\n",last_b);

	int k;
	for (k = 0; c[k] != '\0'; k++)
	{
	}
	// printf("%d\n",k);
	int first_c;//cの文字列の長さ
	first_c = k;
	// printf("cの文字列の長さ%d\n",first_c);

	// 文字列の長さが調べられたから文字列の最初の文字と最後の文字が出力できるかデバックする。
	// printf("%c %c\n", a[0],a[last_a - 1]);
	//a[last_a - 1]をa[last_a] - 1こう書いてた。
	// printf("%c %c\n", b[0],b[last_b - 1]);
	// printf("%c %c\n", c[0],c[first_c - 1]);
	//aはしりとりの最初の単語だから最初の文字を出力する必要ないか！
	//cはしりとりの最後の単語だから最後の文字を出力する必要ないか！
	// printf("%c\n",a[last_a - 1]);
	// printf("%c %c\n", b[0],b[last_b - 1]);
	// printf("%c\n", c[0]);

	if((a[last_a - 1]) == (b[0]) && (b[last_b - 1]) == (c[0])){	//aの最後の文字とbの最初の文字が同じ かつ　bの最後の文字とcの最初の文字が同じ
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
