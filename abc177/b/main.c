#include<string.h>
#include<stdio.h>
int main()
{
  char S[1001], T[1001];
  int min = 12309;
  int i, j;
  scanf("%s",S);
  scanf("%s",T);
  for (i = 0; i <= strlen(S) - strlen(T); i++)
  {
    int ct = 0;
    for (j = 0; j < strlen(T); j++)
    {
      if (S[i + j] != T[j])
      {
        ct++;
      }
    }
    if (min > ct)
    {
      min = ct;
    }
  }
  printf("%d\n",min);
  return 0;
}



// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[1001];
// 	char	*t[1001];

// 	scanf("%s%s",s,t);
// 	// printf("%s\n%s\n",s,t);

// 	*t = strstr(s,t);
// 	printf("%s\n", t);

// 	return (0);
// }
