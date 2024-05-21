//with argu with return
//with argu without return 
//without argu with return
//without argu without return 


#include<stdio.h>

int wawr(int a,float f){
	printf("Enter ur int value :");
	scanf("%d",&a);
	
	printf("\nEnter ur float value :");
	scanf("%f",&f);
	
	printf("\nInt is %d Float is %.2f",a,f);
	
	return 0;
	
}

void wawnr(char chr){
	printf("enter ur first name letter :");
	scanf("%c",&chr);
	
	printf("Nice choice %c",chr);
	
}

int wnawr(){
	
	
	printf("\n\nI am without argument");
	return 0;
}

void wnawnr(){
	
		printf("\n\nI am without argument also without return value");

	
}
int main(){
	wawr(20,20.5);
	wawnr('z');
 	wnawr();
	wnawnr();
	return 0;
}
