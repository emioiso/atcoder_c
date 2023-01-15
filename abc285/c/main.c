
#include<stdio.h>


int main()
{
	long long int res=0,temp=1;
	char s[13];
	int i=0,n=0;

	scanf("%c",&s[i]);
	while(s[i]!='\n'){
		i++;
		scanf("%c",&s[i]);
	}
	n=i;
	for(i=n-1;i>=0;i--){
		res+=temp*(s[i]-'A'+1);
		temp=temp*26;
	}

	printf("%lld\n",res);



	return 0;
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {

// 	char	s[13];

// 	scanf("%s",s);
// 	printf("%s\n",s);

// 	int i;
// 	int sum = 0;
// 	for (i = 0; i < strlen(s); i++)
// 	{
// 		printf("strlen(s)=%lu\n", strlen(s));
// 		printf("s[%d] = %c\n", i, s[i]);

// 		int number = 0;
// 		if ('A' <= s[i] && s[i] <= 'Z')
// 		{
// 			number = s[i] - 'A' + 1;
// 			printf("%cは%d番目のアルファベットです\n", s[i], number);
// 			sum += number;
// 			printf("sum=%d\n", sum);
// 		}

// 		if(s[0] < s[i + 1]){
// 			sum += 25;
// 			printf("sum2=%d\n", sum);
// 		}
// 	}

// 	printf("%d\n", sum);
// 	return (0);
// 	}
