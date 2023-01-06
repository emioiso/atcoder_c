#include <stdio.h>

int	main(void)
{
	int a;//高橋君のモンスターは体力が A
	int b;//攻撃力が B です
	int c;//青木君のモンスターは体力が C
	int d;//攻撃力が D です。


	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);


	int aokiHits = 0;
	for (int i = a; i >= 0; i--)
	{
		// printf("i=%d\n", i);
		a -= d;
		// printf("a=%d\n", a);
		aokiHits++;
		// printf("aokiHits=%d\n", aokiHits);
		if(a < 0 || a == 0){
			break;
		}
	}
	// printf("totalaokiHits=%d\n", aokiHits);

	int takahashiHits = 0;
	for (int j = c; j >= 0; j--)
	{
		// printf("j=%dn", j);
		c -= b;
		// printf("c=%d\n", c);
		takahashiHits++;
		// printf("takahashiHits=%d\n", takahashiHits);
		if(c < 0 || c == 0){
			break;
		}
	}
	// printf("totaltakahashiHits=%d\n", takahashiHits);

	if(takahashiHits > aokiHits){
		printf("No\n");
	} else if(takahashiHits <= aokiHits){
		printf("Yes\n");
	}

	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	int a;//高橋君のモンスターは体力が A
// 	int b;//攻撃力が B です
// 	int c;//青木君のモンスターは体力が C
// 	int d;//攻撃力が D です。

// 	scanf("%d%d%d%d",&a,&b,&c,&d);
// 	// printf("%d %d %d %d\n",a,b,c,d);

// 	int takahashiHp = 0;
// 	int aokiHp = 0;
// 	for (int i = a; i >= 0; i--)
// 	{
// 		// printf("i=%d\n", i);
// 		a -= d;
// 		// printf("a=%d\n", a);
// 		takahashiHp++;
// 		if(a < 0){
// 			break;
// 		}
// 	}
// 	// printf("%d\n", takahashiHp);

// 	for (int j = c; j >= 0; j--)
// 	{
// 		// printf("i=%d\n", j);
// 		c -= b;
// 		// printf("c=%d\n", c);
// 		aokiHp++;
// 		if(c < 0){
// 			break;
// 		}
// 	}
// 	// printf("%d\n", aokiHp);

// 	if(takahashiHp < aokiHp){
// 		printf("Yes\n");
// 	} else if(takahashiHp >= aokiHp){
// 		printf("No\n");
// 	}

// 	return (0);
// }
