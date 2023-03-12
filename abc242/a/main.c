#include <stdio.h>
int	main(void)
{
	int a,b,c,x;

	scanf("%d%d%d%d",&a,&b,&c,&x);
	// printf("%f %f %f %f\n",a,b,c,x);
	float ba = b - a;
	// printf("%lf\n", ba);

	if(x <= a){
		printf("1.000000000000\n");
	} else if(x > b){
		printf("0.000000000000\n");
	} else {
		printf("%.12lf\n",(float)c / ba);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	double  a,b,c,x;

// 	scanf("%lf%lf%lf%lf",&a,&b,&c,&x);
// 	printf("%lf %lf %lf %lf\n",a,b,c,x);

// 	if(x == 1){
// 		printf("1\n");
// 	} else if(x >= c){
// 		printf("%lf\n", c / (b - a));
// 	} else {
// 		printf("%lf\n", c / (b - a));
// 	}
// 	return (0);
// }
