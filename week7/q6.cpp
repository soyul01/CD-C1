#include <stdio.h>

int main()
{
	int a, b;
	
	  scanf("%d,%d",&a,&b);
	  if(a < b)
	{
		if(b%a==0)
		{
		printf("������ �������ϴ�.");
	 	}
	else
		{
		printf("������ �������� �ʽ��ϴ�.");
		}
	}
	else 
	{
		if(a%b==0)
		{
		printf("������ �������ϴ�.");
		}
	else
		{
		printf("������ �������� �ʽ��ϴ�.");
		}
	}
	
	
}
