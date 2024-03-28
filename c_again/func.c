#include<stdio.h>

/*
with argument with return value ..
with argument without return vaue ..
without argument with return value
without argument without return vale
*/

int alok(int a){
	
	a++;
	a = 98;
	
	printf("The incremented value of a is %d",a);
	return 0;
}


void func(char c){
	
	printf("\nwith argument without return %c ",c);
}


int flow(){
	
	printf("\nwe are coder ");
	return 0;
}
void students(){
	
	printf("We have much more students");
}


int main(){
	int x = 12;
	
	alok(x);
	func('A');
	flow();
	students();
	
	return 0;
}
