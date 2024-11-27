#include<stdio.h>

int main(){
	
	
	int a,b, c;
	
	
	a = 10;
	b = 20;
	
	printf("A = %d\nB = %d",a,b);
	
//	Changing the values
	
	c = a; //puting a into c
	a = b; //Change the val in b
	b = c; //change the val in a
	
	
	
	printf("\nUpdating values \nA = %d\nB = %d",a,b);
	
	return 0;
}
