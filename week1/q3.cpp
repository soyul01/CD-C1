#include <stdio.h>
int main()
{
	int ar[10];
	int br[] = {1,2,3,4,5};
	double dr[20];
	printf("%d %d %d",sizeof(ar)/sizeof(ar[0]));
	return 0;
}
