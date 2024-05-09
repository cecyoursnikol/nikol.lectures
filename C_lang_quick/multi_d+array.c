#include<stdio.h>

int main(){
	
	int arr[2][4] = {{{10},{20},{30},{40}},
					 {{100},{200},{300},{400}}};

	int i,j;
	
	for(i = 0; i < 2;i++){
		
		for(j = 0; j < 4; j++){
			
			printf("Elements are %d\n",arr[i][j]);
		}
	}	
	
	
	return 0;
}
