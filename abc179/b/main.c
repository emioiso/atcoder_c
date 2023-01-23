#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int d1[100];
	int d2[100];
	int i;
	int j;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d",&d1[i],&d2[i]);
		// printf("%d %d\n",d1[i],d2[i]);
		// printf("%d %d\n",&d1[i],&d2[i]);
		if(count == 3){
			count++;
			// printf("count=%d\n", count);
			break;
		}
		if(d1[i] == d2[i]){
			count++;
			// printf("count=%d\n", count);
		} else if(d1[i] != d2[i]){
			count -= count;
			// printf("count=%d\n", count);
		}
	}
	if(count >= 3){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return (0);
}
