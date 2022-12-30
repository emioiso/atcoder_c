// 写経　解説

#include <stdio.h>

int	main(void)
{

	int	h;
	int	n;

	scanf("%d%d",&h,&n);
	// printf("%d %d\n",h,n);

	for(int i = 0; i < n; i++){
		int a;
		scanf("%d",&a);
		// printf("%d\n",a);
		h -= a;
		// printf("h-a=%d\n",h);
	}
		if(h <= 0){
			printf("Yes\n");
		} else {
			printf("No\n");
		}

	return (0);
}
