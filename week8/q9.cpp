#include <stdio.h> 
int main()
{
	int i;
	int n;
	
	int sum=0;
	
	printf("값을 입력해주세요:");
	scanf("%d",&n);

	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		sum=sum+i;
		
	}
	
	printf("합은 %d입니다.",sum);
 }
