//Multi-d array
#include<stdio.h>

int main(){
	
	
	int arr[3][2][4] = {{{11,111,1111,11111},{22,1,2,3}},
					 {{33,23,6,0},{44,34,7,22}},
					 {{55,34,56,1},{66,234,54,87}}};
	int i,j,k;
	
	for(i = 0; i < 3; i++)  {  //rows
	
	for(j = 0;  j < 2; j++){   //columns
		
		
		for(k = 0; k < 4; k++){
		
		
		printf("%d\t",arr[i][j][k]);
		}
		
		printf("\n");
	}
	printf("\n");
	}
				
}
