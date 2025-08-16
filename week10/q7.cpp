#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("나이를 입력해주세요:");
	scanf("%d",&n);
	i=n/10;
	if(i==0)
		printf("유소년입니다.");
	else
	if(i==1)
		printf("청소년입니다.");
	else if(i==2)
		printf("청년입니다.");
	else if(i==3)
		printf("중년입니다.");
	else if(i==4)
		printf("장년입니다.");
	else if(i==5)
		printf("노년입니다.");
	else if(i==6)
		printf("도전 백세입니다.");
	else if(i==7)
		printf("성공 백세입니다.");
		return 0; 
}
