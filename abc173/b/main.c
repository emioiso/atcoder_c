#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	n;// N 個のテストケース

	scanf("%d",&n);
	// printf("%d\n",n);

	char s[4];
	int ac = 0;
	int wa = 0;
	int tle = 0;
	int re = 0;

	for (int i = 1; i <= n; i++)
	{
		scanf("%s",s);
		// printf("%s\n",s);

		if (strcmp(&s[0], "AC") == 0){
			ac++;
		} else if (strcmp(&s[0], "WA") == 0){
			wa++;
		} else if (strcmp(&s[0], "TLE") == 0){
			tle++;
		} else if (strcmp(&s[0], "RE") == 0){
			re++;
		}
	}
	printf("AC x %d\n", ac);
	printf("WA x %d\n", wa);
	printf("TLE x %d\n", tle);
	printf("RE x %d\n", re);

	return (0);
}
