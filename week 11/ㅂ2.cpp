#include <stdio.h>
int main()
{
	int i;
	int a;
	a = 1;
	i = 1;
	
	do{
		
	printf("%d�г� �Դϴ�.)", a);
	
		do
		{
			printf("%d�� �Դϴ�.",i);
			i++;
		} while( i <=7 )
		printf("\n");
		i=1;
		a++;
	}	while(a<=6);
}

