#include <stdio.h>
int main()
{
	int i;
	int n;
	
	printf("값을 입력해세요:");
	scanf("%d",&n);	
	
	for(i=1;i<=n; i++){
		if(i%3==0){
			printf("%d",i);
		}
	}	
 }
