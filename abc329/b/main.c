#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    
    int arrayN[n];
    
    for(int i = 0; i < n; i ++){
        scanf("%d",&arrayN[i]);
        // printf("%d",arrayN[i]);
    }
    
    int tmp = 0;
    for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arrayN[i] > arrayN[j])
			{
				tmp = arrayN[i];
				arrayN[i] = arrayN[j];
				arrayN[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for (int i= 0 ; i < n; i++)
	{
// 		printf("arrayN[i]=%d ", arrayN[i]);
// 		printf("arrayN[n]=%d ", arrayN[n - 1]);
		if(arrayN[n - 1] == arrayN[i]){
		  //  printf("arrayN[i - 1] = %d\n",arrayN[i - 1]);
		    printf("%d\n",arrayN[i - 1]);
		    break;
		}
	}
}
