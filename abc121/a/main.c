#include <stdio.h>

int	main(void)
{
	int H;
	int W;
	int h;
	int w;

	scanf("%d%d%d%d",&H,&W,&h,&w);
	// printf("%d %d\n%d %d\n",H,W,h,w);

	int Hh = H - h;
	int Ww = W - w;
	// printf("%d%d",Hh,Ww);

	printf("%d\n", Hh * Ww);

	return (0);
}
// sample1

// oo
// oo
// oo
// ↓
// xx
// xx
// xo
