//assignment opr	
#include<stdio.h>

int main(){
	
	int a , b;
	
	printf("enter two values :");
	scanf("%d %d",&a,&b);
	
	a += b;  
	
	// c = a + b   // a += b  a = a + b
	
	printf("The addition is %d",a);
	
	return 0;
}
