#include <stdio.h>
int	main(void)
{
	char s[11];

	scanf("%s",s);
	// printf("%s\n",s);

	int a;
	int b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	char last[11];
	for (int i = 0; s[i] != '\0'; i++)
	{
		// printf("%c\n", s[a]);
		if(i == a - 1){// ここまじわからなかった
			last[i] = s[b - 1];// ここまじわからなかった
			printf("%c", last[i]);
		} else if(i == b - 1){// ここまじわからなかった
			last[i] = s[a - 1];// ここまじわからなかった
			printf("%c", last[i]);
		} else {
			last[i] = s[i];
			printf("%c", last[i]);
		}
	}
	printf("\n");
	return (0);
}
