// 写経#36997703
#include <stdio.h>

int	main(void)
{
	int h;
	int w;
	int i;
	int j;

	scanf("%d%d", &h, &w);
	// printf("%d %d\n",h,w);
	char a[h][w + 1];
	for (i = 0; i < h; i++){
		scanf("%s",a[i]);
	}
	int count = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			if(a[i][j] == '#'){
				count++;
			}
		}
	}
	printf("%d\n", count);

	return (0);
}

// 写経　#36962233

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	int H, W;

// 	scanf("%d %d", &H, &W);

// 	char **S;
// 	S = calloc(H+1, sizeof(char *));

// 	int ans = 0;
// 	for (int i = 0; i < H; i++)
// 	{
// 		S[i] = calloc(W+1, sizeof(char));
// 		scanf("%s", S[i]);
// 		for (int j = 0; j < W; j++)
// 		{
// 			if (S[i][j] == '#')
// 				ans++;
// 		}
// 	}
// 	printf("%d\n", ans);

// 	return (0);
// }

//  #include <stdio.h>

// int	main(void)
// {
// 	int h;
// 	int w;

// 	scanf("%d%d",&h,&w);
// 	// printf("%d %d\n%s\n",h,w,s);
// 	char s[h][100];
// 	int i;
// 	for (i = 0;  i < h; i++)
// 	{
//     }
// 	printf("%s\n", s[w - 1]);

// 	return (0);
// }
