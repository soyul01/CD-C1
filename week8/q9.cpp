#include <stdio.h> 
int main()
{
	int i;
	int n;
	
	int sum=0;
	
	printf("���� �Է����ּ���:");
	scanf("%d",&n);

	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		sum=sum+i;
		
	}
	
	printf("���� %d�Դϴ�.",sum);
 }
