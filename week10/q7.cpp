#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("���̸� �Է����ּ���:");
	scanf("%d",&n);
	i=n/10;
	if(i==0)
		printf("���ҳ��Դϴ�.");
	else
	if(i==1)
		printf("û�ҳ��Դϴ�.");
	else if(i==2)
		printf("û���Դϴ�.");
	else if(i==3)
		printf("�߳��Դϴ�.");
	else if(i==4)
		printf("����Դϴ�.");
	else if(i==5)
		printf("����Դϴ�.");
	else if(i==6)
		printf("���� �鼼�Դϴ�.");
	else if(i==7)
		printf("���� �鼼�Դϴ�.");
		return 0; 
}
