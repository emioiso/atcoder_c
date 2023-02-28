#include <stdio.h>
int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
	// printf("n=%d k=%d\n",n,k);

	char s[51];
	char cpy[2];
	char garbege[2];

	scanf("%s",s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		// printf("%c",s[i]);
		if(k - 1 == i){
			garbege[i] = s[i];
			if(s[i] == 'A'){
				cpy[i] = 'a';
				printf("%c", cpy[i]);
			} else if(s[i] == 'B'){
				cpy[i] = 'b';
				printf("%c", cpy[i]);
			} else if(s[i] == 'C'){
				cpy[i] = 'c';
				printf("%c", cpy[i]);
			} else if(s[i] == 'D'){
				cpy[i] = 'd';
				printf("%c", cpy[i]);
			} else if(s[i] == 'E'){
				cpy[i] = 'e';
				printf("%c", cpy[i]);
			} else if(s[i] == 'F'){
				cpy[i] = 'f';
				printf("%c", cpy[i]);
			} else if(s[i] == 'G'){
				cpy[i] = 'g';
				printf("%c", cpy[i]);
			} else if(s[i] == 'H'){
				cpy[i] = 'h';
				printf("%c", cpy[i]);
			} else if(s[i] == 'I'){
				cpy[i] = 'i';
				printf("%c", cpy[i]);
			} else if(s[i] == 'J'){
				cpy[i] = 'j';
				printf("%c", cpy[i]);
			} else if(s[i] == 'K'){
				cpy[i] = 'k';
				printf("%c", cpy[i]);
			} else if(s[i] == 'L'){
				cpy[i] = 'l';
				printf("%c", cpy[i]);
			} else if(s[i] == 'M'){
				cpy[i] = 'm';
				printf("%c", cpy[i]);
			} else if(s[i] == 'N'){
				cpy[i] = 'n';
				printf("%c", cpy[i]);
			} else if(s[i] == 'O'){
				cpy[i] = 'o';
				printf("%c", cpy[i]);
			} else if(s[i] == 'P'){
				cpy[i] = 'p';
				printf("%c", cpy[i]);
			} else if(s[i] == 'Q'){
				cpy[i] = 'q';
				printf("%c", cpy[i]);
			} else if(s[i] == 'R'){
				cpy[i] = 'r';
				printf("%c", cpy[i]);
			} else if(s[i] == 'S'){
				cpy[i] = 's';
				printf("%c", cpy[i]);
			} else if(s[i] == 'T'){
				cpy[i] = 't';
				printf("%c", cpy[i]);
			} else if(s[i] == 'U'){
				cpy[i] = 'u';
				printf("%c", cpy[i]);
			} else if(s[i] == 'V'){
				cpy[i] = 'v';
				printf("%c", cpy[i]);
			} else if(s[i] == 'W'){
				cpy[i] = 'w';

			} else if(s[i] == 'X'){
				cpy[i] = 'x';
				printf("%c", cpy[i]);
			} else if(s[i] == 'Y'){
				cpy[i] = 'y';
				printf("%c", cpy[i]);
			} else {
				cpy[i] = 'z';
				printf("%c", cpy[i]);
			}
		} else {
			cpy[i] = s[i];
			printf("%c", cpy[i]);
		}
	}
	printf("\n");
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {

// 	int	n;
// 	int	k;
// 	char s[50];

// 	scanf("%d%d%s",&n,&k,s);
// 	// printf("%d %d %s\n",n,k,s);
// 	// printf("%s\n",s);
// 	// printf("%c\n",s[2]);
// 	// printf("%c\n",s[k - 1] + 32);

// 	int i;
// 	for (i = 0; i < n; i++)
// 	{
// 		printf("%c\n",s[i]);
// 		if(s[i] == s[k]){
// 			printf("%s");
// 		}
// 	}

// 	return (0);
// }
