#include<stdio.h>

int main(){

	int i;
	int sum=0;

	for(i=1;i<=1000;i++)
	{
		if(i%3==0){
					printf(" %d ",-i);
					sum-=i;
		}
		else{
			printf(" %d ",i);
			sum+=i;
		}
	
	}
	printf("sum= %d",sum);
}	

