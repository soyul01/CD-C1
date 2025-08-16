#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("숫자를 입력해주세요:");
	scanf("%d",&n);
	i=n%2;
	switch(i)
	{
	case 0:
		printf("짝수입니다.");
		break;
	case 1:
		printf("홀수입니다.");
		break;
	
	default:
		printf("자연수입니다.");
		
		return 0; 
		
		
	} 
}
