#include <stdio.h>
int main()
{
	int a[8];
	
	a[0] = 1;
	a[1] = 2;
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	
	for(int i = 0; i < 4; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(int i = 4; i < 8; i ++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < 8; i ++)
	{
		scanf("%d",&a[i]);
	}

}
