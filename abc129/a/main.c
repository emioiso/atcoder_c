//#5836058
#include <stdio.h>
int	main(void)
{
	int	p,q,r;

	scanf("%d%d%d",&p,&q,&r);
	// printf("%d %d %d\n",p,q,r);

	int min = p + r;
	if(min > p + q){
		min = p + q;
	}
	if(min > q + r){
		min = q + r;
	}
	printf("%d\n", min);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	p,q,r;

// 	scanf("%d%d%d",&p,&q,&r);
// 	printf("%d %d %d\n",p,q,r);

// 	int comparison = 0;
// 	int abc = p + q;
// 	int acb = r + q;
// 	int bac = p + r;
// 	int bca = q + r;
// 	int cab = r + p;
// 	int cba = q + p;

// 	if(abc > acb){
// 		comparison = acb;
// 	} else {
// 		comparison = abc;
// 	}

// 	return (0);
// }


// #include <stdio.h>
// int	main(void)
// {
// 	int	p,q,r;

// 	scanf("%d%d%d",&p,&q,&r);
// 	// printf("%d %d %d\n",p,q,r);

// 	int abc = p + q;
// 	// printf("abc=%d\n", abc);
// 	int acb = r + q;
// 	// printf("acb=%d\n", acb);
// 	int a = 0;
// 	if (abc > acb){
// 		// printf("abc=%d\n", acb);
// 		a = acb;
// 	} else {
// 		// printf("acb=%d\n", abc);
// 		a = abc;
// 	}

// 	int bac = p + r;
// 	int bca = q + r;
// 	int b = 0;
// 	if (bac > bca){
// 		// printf("bca=%d\n", bca);
// 		b = bca;
// 	} else {
// 		// printf("bac=%d\n", bac);
// 		b = bac;
// 	}

// 	int cab = r + p;
// 	int cba = q + p;
// 	int c = 0;
// 	if (cab > cba){
// 		// printf("aba=%d\n", cba);
// 		c = cba;
// 	} else {
// 		// printf("cab=%d\n", cab);
// 		c = cab;
// 	}

// 	int aa = 0;
// 	if(a > b){
// 		printf("b=%d\n", b);
// 		// aa = b;
// 	} else {
// 		// printf("a=%d\n", a);
// 		aa = a;
// 	}

// 	int bb = 0;

// 	if(aa > c){
// 		printf("%d\n", c);
// 	} else {
// 		printf("%d\n", aa);
// 	}

// 	return (0);
// }
