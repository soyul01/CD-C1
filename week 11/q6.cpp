#include <stdio.h>
int main()
{
	int a;
	int n;
	int b=0;
	
	for(a = 1; a<=10; a++){
		for (n = 1; n <=a; n++)
		{
			printf("%d",n);
			b+=n;
		}
	printf("\n");		
	}
	printf("�������:%d",b);
}
	






