#include<stdio.h>

int main(){
	
	int arr[2][4][3] = {{{1,2,3},{4,5,6},{7,8,9},{10,11,12}},
					   {{13,14,15},{16,17,18},{19,20,21},{22,23,24}}};
					   
	
	
	int i,j,k;
	
	
	for(i = 0; i < 2; i ++){
		
		for(j = 0; j < 4; j++){
			
			for (k = 0; k < 3; k++){
				
				printf("%d",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	return 0;
}
