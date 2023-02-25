#include <stdio.h>
int	main(void)
{
	int	a1,a2,a3,a4;

	scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
	// printf("%d %d %d %d\n",a1,a2,a3,a4);

	int min = a1;
	if (min > a2){
		min = a2;
	}

	if (min > a3){
		min = a3;
	}

	if (min > a4){
		min = a4;
	}
	printf("%d\n", min);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a[5];

// 	int min[5];
// 	int i;
// 	for (i = 0; i < 4; i++)
// 	{
// 		scanf("%d",&a[i]);
// 		printf("%d ",a[i]);

// 		min[i] = a[i];
// 		printf("%d\n", min[i]);

// 		if(min[i] > min[i + 1]){
// 			min[i] = min[i + 1];
// 		} else {
// 			printf("%d\n", min[i]);
// 		}
// 		printf("%d\n", min[i]);
// 	}

// 	return (0);
// }
