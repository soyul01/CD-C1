#include <stdio.h>
int main()
{
	int i;
	int a;
	a = 1;
	i = 1;
	
	do{
		
	printf("%d학년 입니다.)", a);
	
		do
		{
			printf("%d반 입니다.",i);
			i++;
		} while( i <=7 )
		printf("\n");
		i=1;
		a++;
	}	while(a<=6);
}

