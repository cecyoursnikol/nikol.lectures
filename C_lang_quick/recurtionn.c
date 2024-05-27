#include<stdio.h>

void gender(){
	
	char _inpgender;
	
	printf("Eneter ur gender :");
	scanf("%c",&_inpgender);
	
	if(_inpgender == 'm'){
		
		printf("U are male ");
	}
	else if(_inpgender == 'f'){
		printf("U are female ");
	}
	else{
		gender();
	}
	return 0;
}

int main(){
	
	gender();
	
	return 0;
}
