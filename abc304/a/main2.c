#include <stdio.h>

struct person {
    char name[11];
    int age;
};

int main(void) {
    int n;

    scanf("%d", &n);
    // printf("%d\n", n);

    struct person people[n]; // 配列を用意する

    for (int i = 0; i < n; i++) {
        scanf("%s", people[i].name);
        scanf("%d", &people[i].age);
        // printf("%s ", people[i].name);
        // printf("%d\n", people[i].age);
    }
    // printf("%d\n", people[0].age); // 最初の要素のageを表示

	int most_age = people[0].age; //n人の中の0番目の年齢を代入する
	int most_age_element = 0;//一番若い年齢の人の添字を代入したいから初期値0にしておく
	for (int i = 0; i < n; i++)
	{
		if(most_age >= people[i].age){ //n人の中の0番目の年齢とn人の年齢を比較して一番若い年齢を探す
			// printf("%d\n", people[i].age);
			most_age_element = i; //一番若い年齢の人の添字を探す
			// printf("most_age_element = %d\n", most_age_element);
		}
	}
	// printf("most_age_element = %d\n", most_age_element);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", people[(most_age_element + i) % n].name);
		// most_age_elementを数字に直してみる
		// printf("%s\n", people[(2 + 0) % 5].name); = 2
		// printf("%s\n", people[(2 + 1) % 5].name); = 3
		// printf("%s\n", people[(2 + 2) % 5].name); = 4
		// printf("%s\n", people[(2 + 3) % 5].name); = 0
		// printf("%s\n", people[(2 + 4) % 5].name); = 1
	}
	return 0;
}

