#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int o, e;
	int n, m;
	
	for(i = 1; i <= 10; i++)
	{
		n = i;
		printf("%d", n)	;
	
		if (i % 2 == 1)
		{
			o = i;
			printf("&d", o);
		}
		else
		{
			e = i;
			printf("%d", e);
		}
		
		m = i;
		printf("%d", m);
	}
	
	return 0;
}
