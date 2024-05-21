#include<stdio.h>

int main(){
	
	int arr[2][3][4] = {{{10,20,30,40},{50,60,70,80},{80,70,60,50}},
					    {{1,2,3,4},{5,6,7,8},{8,7,6,5}}};
					    
	int i , j , k;
	
	
	for(i = 0; i < 2; i++){
		
		for(j = 0; j < 3; j++){
			
			for(k = 0; k < 4; k++){
				
				printf("%d\n",arr[i][j][k]);
			}
		}
	}
	
	
	return 0;
}
