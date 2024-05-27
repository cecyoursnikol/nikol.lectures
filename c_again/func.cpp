#include<stdio.h>

/*
with argument with return value
with argument without return vaue
without argument with return value'
without argument without return vale
*/

int alok(int a){
	
	a+1;
	
	printf("The incremented value of a is %d",a);
}


int main(){
	int x = 12;
	
	alok(x)
	
	return 0;
}
