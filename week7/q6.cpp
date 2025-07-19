#include <stdio.h>

int main()
{
	int a, b;
	
	  scanf("%d,%d",&a,&b);
	  if(a < b)
	{
		if(b%a==0)
		{
		printf("나누어 떨어집니다.");
	 	}
	else
		{
		printf("나누어 떨어지지 않습니다.");
		}
	}
	else 
	{
		if(a%b==0)
		{
		printf("나누어 떨어집니다.");
		}
	else
		{
		printf("나누어 떨어지지 않습니다.");
		}
	}
	
	
}
