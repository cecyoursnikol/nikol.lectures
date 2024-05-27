#include<stdio.h>


void call(){
	
	int a;
	printf("Enter any negative vlaue :");
	scanf("%d",&a);
	
	if(a<0){
		printf("U choice is correct %d",a);
	}
	
	else{
		call();
	}
}

int main(){
	
	call();
	
	return 0;
}
