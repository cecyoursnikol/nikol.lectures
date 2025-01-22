#include<stdio.h>

int main(){
	
	int i;
	
	for(i = 0 ; i < 10; i++){
		
		if(i == 9){
			continue;
		}
		
		printf("%d",i);
	}
	
	return 0;
}
