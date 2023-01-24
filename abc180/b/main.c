// 写経　#17441836
#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	scanf("%d",&n);
	// printf("%d\n",n);

	long long int x[100005];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld",&x[i]);
		// printf("%d ",x[i]);
	}

	for (int i = 0; i < n; i++){	//abs関数を使わないで絶対値を出す方法
		if (x[i] < 0){
			x[i] *= -1;
		}
	}

	long long int mh = 0;
	for (int i = 0; i < n; i++)
		{
			mh += x[i];
			// printf("mh=%d\n", mh);
		}
		printf("%lld\n", mh);

	double yk = 0;
	int i;
	for (i = 0 ; i < n; i++)
	{
			yk += x[i] * x[i];
	}
		printf("%.15lf\n", sqrt(yk));

	int cb = 0;
	for (int i = 0; i < n; i++)
	{
		if(cb < x[i]){
			cb = x[i];
			// printf("max=%d\n", max);
		}
	}
	printf("%d\n", cb);


	return (0);
}
