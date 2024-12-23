//Multi-d array
#include<stdio.h>

int main(){
	
	
	int arr[3][2] = {{{11},{22}},
					 {{33},{44}},
					 {{55},{66}}};
	int i,j;
	
	for(i = 0; i < 3; i++)  {  //rows
	
	for(j = 0;  j < 2; j++){   //columns
		
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
	}
				
}
