#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int i;
	int n;
	printf("����,����,����,���� �� ������ ������ �Է����ּ���:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	n = (a + b + c + d) / 4; 
	i = n/10;
	if(i==9) {
		printf("�� ���߾��.");
	}	
	else if(i==8) {
		printf("���߾��.");
	}
	else if (i==7) {
		printf("ȭ����.");
	}
	else{
		printf("������");
	}
		
	return 0;
}
