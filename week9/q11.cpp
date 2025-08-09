#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int b=0;
	n = 10;
	
	while (n<=17)
	{
		printf("%d ", n);
		sum+=n;
		n++;
		b++;
	}
	printf("\nwhile문 종료 후 n의 값 : %d\n", sum);
	printf("\nwhile문 종료 후 반복 횟수의 값: %d\n",b);
	return 0;
}
