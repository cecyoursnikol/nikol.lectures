//Types of Func..
/*
W   A  W   R 
WN  A  W   R
W   A  WN  R
WN  A  WN  R
*/

#include<stdio.h>

int star(float f){
	
	printf("THis is the func showing with argument with return value..");
	printf("%f\n",f);
	return 0;
	
}

int code(){
	printf("THis is showing without argument with return...");
	return 0;
}

void number(int a,int b){
	
	printf("\nwith argument without return..");
	scanf("%d %d",&a,&b);
	
	printf("%d %d",a,b);
	
}

void normal(){
	printf("\nHello buddy");
}
int main(){
	
	star(23.3);
	code();
	number(2,3);
	normal();
	return 0;
}

