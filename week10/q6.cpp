#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("���̸� �Է����ּ���:");
	scanf("%d",&n);
	i=n/10;
	switch (i)
	{
	case 0:
		printf("���ҳ��Դϴ�.");
		break;
	case 1:
		printf("û�ҳ��Դϴ�.");
		break;
	case 2:
		printf("û���Դϴ�.");
		break;
	case 3:
		printf("�߳��Դϴ�.");
		break;
	case 4:
		printf("����Դϴ�.");
		break;
	case 5:
		printf("����Դϴ�.");
		break;
	case 6:
		printf("���� �鼼�Դϴ�.");
		break;
	case 7:
		printf("���� �鼼�Դϴ�.");
		break;
		}
		
		return 0; 
}
