#include <stdio.h>

int main()
{
	int n;
	int i;
	int sum=0;
	
	printf("100보다 큰 자연수를 입력해주세요.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if((i%3==0) || (i%7==0)){
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("\n");
	printf("sum=%d\n",sum);
}
