#include <stdio.h>
int main()
{
	int a, b;
	int add, sub, mul, div;
	int *pa, *pb;
	
	pa = &a;
	pb = &b;
	
	a = 30;
	b = 55;
	add = *pa + *pb;
	printf("add = %d\n", add);
	
	*pa = 9;
	*pb = 7;
	sub = *pa - *pb;
	printf("sub = %d\n", sub);
	
	*pa = 12;
	*pb = 3;
	mul = *pa * *pb;
	printf("mul = %d\n", mul);
	
	a = 45;
	*pb = 5;
	div = *pa / *pb;
	printf("div = %d\n", div);
	
	return 0;
}
