#include <stdio.h>
int main()
{
	int ar[3][4] = {0};
	int ar2[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	for(int i = 0; i<3;++i) 
		for(int j = 0; j<4; ++j){
			printf("%d",ar3[i][j]);
	printf("\n");
	}
}
