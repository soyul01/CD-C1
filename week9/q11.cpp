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
	printf("\nwhile�� ���� �� n�� �� : %d\n", sum);
	printf("\nwhile�� ���� �� �ݺ� Ƚ���� ��: %d\n",b);
	return 0;
}
