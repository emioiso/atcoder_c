// 写経 #22902878

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	scanf("%d%d%d%d",&a,&b,&c,&d);
	// printf("%d %d %d %d\n",a,b,c,d);

	if((a == c) && (b == d)){
		printf("%d",b - a);
	} else if((

	)){

	}
		return (0);
	}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int c;
// 	int d;

// 	scanf("%d%d%d%d",&a,&b,&c,&d);
// 	// printf("%d %d %d %d\n",a,b,c,d);

// 	int ab = b - a; //Aliceがロボットを動かしていた時間。
// 	int cd = d - c; //Bobがロボットを動かしていた時間。

	// printf("Aliceがロボットを動かしていた時間%d\nBobがロボットを動かしていた時間%d\n",ab,cd);

	// if(ab > cd){
	// 	printf("%d\n",cd);
	// } else if(ab < cd){
	// 	printf("%d\n",ab);
	// } else if((b < c)){
	// 	printf("%d\n",(a + b) - (d - c));
	// } else if((b > c)){
	// 	printf("%d\n",(d - c) - c);
	// } else if((a == c) && (b == d)){
	// 	printf("%d",b - c);
	// }

	//ボツ
	// if((a == 0) && (b > c) && ((b + c) == d)){
	// 	printf("%d\n",b - c);
	// } else if((a == 0) && (b < c) && ((b + c) == d)){
	// 	printf("%d\n",(b + c) - d);
	// } else if(ab > cd){
	// 	printf("%d\n",cd);
	// } else if(ab < cd){
	// 	printf("%d\n",ab);
	// }

// 	return (0);
// }
