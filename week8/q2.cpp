#include<stdio.h>
int main()
{
	int a;
	printf("값을 입력해주세요.");
	scanf("%d",&a);
	
	if((12%a==0)&&(30%a==0))
	{
		printf("12와 30의 공약수입니다." );
	}
	else{
		printf("12와 30의 공약수가 아닙니다." );
	}
}
