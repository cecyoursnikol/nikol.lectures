#include<stdio.h>

int main(){
	
	
	int n , i;
	
	for(i = 0;i <= 10; i++){
		
		if(i == 3){
			
			continue;
		}
		printf("%d",i);
	}
	
	return 0;
}
