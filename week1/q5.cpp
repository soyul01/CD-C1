#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int ar[10];
	int size = sizeof(ar) / sizeof(ar[0]);
	srand(time(NULL));
	
	for(int i = 0; i < size; i++)
	{
		int m = rand()% 10;
		ar[i] = m;
		printf("%d ", ar[i]);
	}
}

