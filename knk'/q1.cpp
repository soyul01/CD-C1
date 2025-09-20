//#include <stdio.h>
//
//int main() {
//	char str[] = "Coding is computer programming";
//	int i = 0;
//	while(str[i] != '\0'){
//		printf("%c",str[i]);
//		i++;
//	}
//}

#include <stdio.h>
int main()
{
	char a[5];
	char cha;
	scanf("%s", &a);
	for(int i = 0; i<sizeof(a)/sizeof(a[0]);i++)
	{
		cha = a[i]-32;
		printf("%c",cha);
	}
}
