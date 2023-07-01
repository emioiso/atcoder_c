#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
	// printf("%d %d\n",n,m);

	char c[101][21];
	for (int i = 0; i < n; i++) {
        scanf("%s", c[i]);
		// printf("%s ", c[i]);
    }

	// printf("\n");
	char d[101][21];
	for (int i = 0; i < m; i++) {
		scanf("%s", d[i]);
		// printf("%s ", d[i]);
	}

	// printf("\n");
	int p[101];
	for (int i = 0; i <= m; i++) {
		scanf("%d", &p[i]);
		// printf("%d ", p[i]);
	}
	// printf("\n");
	int sum = 0;
	for (int i = 0; i < n; i++){
		// printf("%s:", c[i]);
		int index = -1;
		for (int j = 0; j < m; j++)
		{
			// printf("%s ", d[j]);
			if(strcmp(c[i],d[j]) == 0 ){
				index = j;
			}
		}
		if(index >= 0){
			// printf("same\n");
			// 高橋くんが食べた皿と同じ色の皿があればその料金を足す。
			sum +=  p[index + 1];
			// printf("sum = %d\n", sum);
		} else {
			sum += p[0];
		}
		// printf("\n");
	}
	// printf("sum = %d\n", sum);
	printf("%d\n", sum);
	return (0);
}
