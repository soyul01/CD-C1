#include <stdio.h>
int main()
{
	int i;
	int n;
	
	int sum=0;
	
	printf("���� �Է��ϼ���:");
	scanf("%d",&n);	
	
	for(i=1;i<=n; i++){
		if(i%3==0){
			printf("%d",i);
			sum++;
		}
	}
	printf("3�� ��� ������ %d�Դϴ�.",sum);	
 }
