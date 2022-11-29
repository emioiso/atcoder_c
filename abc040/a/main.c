// 写経#36870875
#include<stdio.h>
int main (void)
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	// printf("%d %d\n", a,b);

	if((a - b) < b){
		printf("%d\n",a - b);
	}else {
		printf("%d\n",b - 1);
	}

	return 0;
}
