#include <stdio.h>

int main()
{
	int a, b, c;
	
	a = 12;
	b = 56;
	c = a >  b;
	
	if(c) 
	{
		printf("%d�� %d���� ũ��\n", a, b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�\n", a, b);
	}
}
