#include <stdio.h>
int	main(void)
{
	int	abc[4];
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d",&abc[i]);
		// printf("%d\n",abc[i]);

		if(abc[i] == 1){
			sum += 6;
		} else if(abc[i] == 2){
			sum += 5;
		} else if(abc[i] == 3){
			sum += 4;
		} else if(abc[i] == 4){
			sum += 3;
		} else if(abc[i] == 5){
			sum += 2;
		} else if(abc[i] == 6){
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
