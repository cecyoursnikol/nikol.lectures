#include<stdio.h>

int main(){
	
	int i,a;
	
	for(i = 1; i <= 20; i++){
		
		if(i == 5)
			continue;
		else
			printf("%d\n",i);
	}
	
	
	return 0;
}
