//わからなすぎて解説を写経
#include <stdio.h>
int	main(void)
{
	int a,b,c,d,e,f,x;

	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);
	// printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,x);

	float p = x / (a + c);
	float r = x % (a + c);
	float s = p * a;
	// printf("%f %f\n", (float)p, (float)r);

	if(r <= a) {
		s += r;
	} else {
		s += a;
	}

	float t = s * b;

	p = x / (d + f);
	r = x % (d + f);
	s = p * d;

	if(r <= d) {
		s += r;
	} else {
		s += d;
	}
	int A = s * e;
	if(t > A){
		printf("Takahashi\n");
	} else if(t < A){
		printf("Aoki\n");
	} else {
		printf("Draw\n");
	}

	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a,b,c,d,e,f,x;

// 	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);
// 	// printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,x);

// 	//休憩時間も入れてみたけどACしなかった。
// 	float twork = ((float)b + c) / (float)a;
// 	// printf("%lf\n",  (float)twork);
// 	float awork = ((float)e + f) / (float)d;
// 	// printf("%lf\n",  (float)awork);

// 	if(twork > awork){
// 		printf("Takahashi\n");
// 	} else if(twork < awork){
// 		printf("Aoki\n");
// 	} else {
// 		printf("Draw\n");
// 	}
// 	return (0);
// }

// 一秒間に進距離を計算しただけではACしなかった。
// #include <stdio.h>
// int	main(void)
// {
// 	int a,b,c,d,e,f,x;

// 	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);
// 	// printf("%d %d %d %d %d %d %d\n",a,b,c,d,e,f,x);

// 	float twork = (float)b /  (float)a;
// 	// printf("%lf\n",  (float)twork);
// 	float awork = (float)e /  (float)d;
// 	// printf("%lf\n",  (float)awork);

// 	if(twork > awork){
// 		printf("Takahashi\n");
// 	} else if(twork < awork){
// 		printf("Aoki\n");
// 	} else {
// 		printf("Draw\n");
// 	}
// 	return (0);
// }
