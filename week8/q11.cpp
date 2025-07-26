#include <stdio.h>
int main()
{
	int i;
	int n;
	
	int sum=0;
	
	printf("값을 입력하세요:");
	scanf("%d",&n);	
	
	for(i=1;i<=n; i++){
		if(i%3==0){
			printf("%d",i);
			sum++;
		}
	}
	printf("3의 배수 개수는 %d입니다.",sum);	
 }
