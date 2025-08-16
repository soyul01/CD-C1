#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("11월의 날짜를 입력해주세요:");
	scanf("%d",&n);
	i=n%7;
	switch(i)
	{
	case 0:
		printf("금요일입니다.");
		break;
	case 1:
		printf("토요일입니다.");
		break;
	case 2:
		printf("일요일입니다.");
		break;
	case 3:
		printf("월요일입니다.");
		break;
	case 4:
		printf("화요일입니다.");
		break;
	case 5:
		printf("수요일입니다.");
		break;
	case 6:
		printf("목요일입니다.");
		break;
	
	return 0; 
		
	} 
}
