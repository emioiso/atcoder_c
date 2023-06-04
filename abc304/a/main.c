#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[n][11]; //名前
	int a[n];  //年齢

	// 標準入力から名前と年齢を受け取る
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d",s[i],&a[i]);
		// printf("%s %d\n",s[i],a[i]);
	}
	// 標準入力から受け取った年齢の中で一番若い人を探す。
	int young_age = a[0];
	// 年齢の中で一番若い人の添字も覚えておく
	int young_age_element = 0;
	for (int i = 1; i < n; i++)
	{
		// 年齢が一番若い人、a[0]番目の人と比較してa
		if(young_age >= a[i]){
			young_age = a[i];
			// printf("young_age = %d\n",young_age);
			young_age_element = i;
			// printf("young_age_element = %d\n", young_age_element);
		}
	}
	// printf("young_age_element = %d\n", young_age_element);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", s[(young_age_element + i) % n]);
	}


	return (0);
}
