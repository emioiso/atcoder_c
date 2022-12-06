// 写経#33180219

// #include <stdio.h>

// 	int main(void){
//   	int n, i, num = 0;
//   	int l[1001], r[1001];

//   scanf("%d", &n);

//   for(i = 0; i < n ;i++){
//     scanf("%d %d",&l[i], &r[i]);
//     num += (r[i] - l[i] + 1);
//   }

//   printf("%d\n", num);
//     return 0;
// }

#include <stdio.h>

int	main(void)
{
	int n = 0;
	int l[100001];
	int t[100001];
	int tmp = 0;

	scanf("%d",&n);
	// scanf("%d\n%d %d\n",&n,&l,&t);って書いてた
	// printf("%d\n",n);

	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d",&l[i],&t[i]);
		tmp += (t[i] - l[i] + 1);
	}
  printf("%d\n", tmp);

	return (0);
}
