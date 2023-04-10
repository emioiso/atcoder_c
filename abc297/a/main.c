#include <stdio.h>

int main() {
    int n, d;
    int t[110];
    scanf("%d%d", &n, &d);
    for(int i=0; i<n; i++) {
        scanf("%d", &t[i]);
    }

    int double_click = -1;
    for(int i=0; i<n-1; i++) {
        int time_diff = t[i+1] - t[i];
        if(time_diff <= d) {
            double_click = t[i+1];
            break;
        }
    }

    printf("%d\n", double_click);
    return 0;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	int	d;

// 	scanf("%d%d",&n,&d);
// 	printf("%d %d\n",n,d);

// 	int t[n];
// 	long long  tmp[n];
// 	long long newtmp[n];
// 	long long ans = 0;
// 	int count = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d",&t[i]);
// 		printf("t[i]=%d ",t[i]);

// 		tmp[i] = t[i] - t[i-1];
// 		// printf("%ld ",tmp[i]);
// 		if (tmp[0] != 0){
// 			newtmp[i] = tmp[i];
// 			// printf("newtmp[i]=%ld ",newtmp[i]);
// 		}
// 		if(newtmp[i] >= d){
// 			count++;
// 			// printf("count=%d\n", count);
// 		}
// 		if(newtmp[i] >= d){
// 			ans = t[i];
// 			// printf("ans[i]=%ld\n", ans[i]);
// 			break;
// 		}
// 	}
// 	if(count == n - 1){
// 		// printf("-1\n");
// 	} else {
// 		// printf("%ld\n",ans);
// 	}

// 	return (0);
// }
