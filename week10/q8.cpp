#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("���ڸ� �Է����ּ���:");
	scanf("%d",&n);
	i=n%2;
	switch(i)
	{
	case 0:
		printf("¦���Դϴ�.");
		break;
	case 1:
		printf("Ȧ���Դϴ�.");
		break;
	
	default:
		printf("�ڿ����Դϴ�.");
		
		return 0; 
		
		
	} 
}
