#include<stdio.h>

//func Declaration

void time(){
	
	
	printf("This is normal Void Func.");
}

int test(int a,int b){
	
	a = 50,b = 70;
	printf("\na = %d, b = %d",a,b);
}


int main(){
	
	
//	Func Calling
	time();
	
	test(2,4);
	
	return 0;
}
