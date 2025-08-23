#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int i;
	int n;
	printf("국어,영어,수학,과학 네 과목의 점수를 입력해주세요:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	n = (a + b + c + d) / 4; 
	i = n/10;
	if(i==9) {
		printf("참 잘했어요.");
	}	
	else if(i==8) {
		printf("잘했어요.");
	}
	else if (i==7) {
		printf("화이팅.");
	}
	else{
		printf("힘내요");
	}
		
	return 0;
}
