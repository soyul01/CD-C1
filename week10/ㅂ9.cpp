#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("11���� ��¥�� �Է����ּ���:");
	scanf("%d",&n);
	i=n%7;
	switch(i)
	{
	case 0:
		printf("�ݿ����Դϴ�.");
		break;
	case 1:
		printf("������Դϴ�.");
		break;
	case 2:
		printf("�Ͽ����Դϴ�.");
		break;
	case 3:
		printf("�������Դϴ�.");
		break;
	case 4:
		printf("ȭ�����Դϴ�.");
		break;
	case 5:
		printf("�������Դϴ�.");
		break;
	case 6:
		printf("������Դϴ�.");
		break;
	
	return 0; 
		
	} 
}
