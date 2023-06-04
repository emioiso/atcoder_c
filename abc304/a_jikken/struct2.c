// データ型の作成と変数宣言を同時に行う
#include <stdio.h>
// daipon,chuponだけに構造体を使うだけであれば” Ponta ”を省略できる。
// main関数の中に新しいデータを追加したい時は” Ponta ”を省略すると追加できない。
// 以下のエラーが出る
// struct2.c:14:9: note: forward declaration of 'struct Ponta'
// struct Ponta shoupon;
// 1 error generated.
struct {
	char name[64];
	int age;
	double weight;
	double height;
}daipon,chupon;

int	main(void)
{
	// struct Ponta shoupon;
	daipon.age = 14;
	chupon.age = 14;
	printf("だいぽんの年齢:%d\n", daipon.age);
	printf("ちゅうぽんの年齢:%d\n", chupon.age);

	return (0);
}
