#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int o, p, q;
	int n, m;
	
	for(i = 1; i <= 10; i++)
	{
		n = i;
		printf("%d", n);
		
		if(i % 2 == 0)
		{
			p = i;
			printf("%d , o");
		}
		if(i % 3 == 0)
		{
			o = i;
			printf("%d , p");
		if(i % 4 == 0)
		{
			q = i;
			printf("%d , q");
		}
		
		m = i;
		printf ("%d ", m);
		}
		
		return 0;	
	}
}
