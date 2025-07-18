#include<stdio.h>
int main()
{
	int a =12;
	int b =3;
	a-=b; 
	b++;
	printf("a = %d b = %d\n", a, b);
	a-=6;
	b-=1;
	printf("a = %d b = %d\n", a, b);
	a=a*2;
	b++;
	printf("a = %d b = %d\n", a, b);
	a=a-5;
	b++;
	printf("a = %d b = %d\n", a, b);
}
	