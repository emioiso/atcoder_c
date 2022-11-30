// 写経#35040577
#include <stdio.h>
#include <string.h>

int main()
{
    char w[101];
    int cnt;

    scanf("%s", w);
	// printf("%s\n",w);

    for (int i = 0; i < strlen(w); i++)
    {
        cnt = 0;
        for (int j = 0; j < strlen(w); j++)
        {
            if (w[i] == w[j])
                cnt++;
        }
        if (cnt % 2 != 0)
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}


// #include <stdio.h>

// int	main(void)
// {
// 	char w[101];
// 	int i;

// 	scanf("%s",w);
// 	// printf("%s\n",w);

// 	for (i = 0; w[i] != '\0'; i++)
// 	{
// 		printf("%c\n", w[i]);
// 		if(((w[i] % 2) == 0)){

// 		}
// 	}
// 	printf("Yes\n");

// 	return (0);
// }
