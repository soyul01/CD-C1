#include <stdio.h>
int main()
{
	int i;
	int num;
	
	
	int max=0;
	
	for (i=0;i<10;i++){
		
		printf("정수를 입력하세요 : ");
		scanf("%d",&num);
		 
		if(num>max){
			max=num;
		}
	}
	printf("max=%d",max);
 } 
