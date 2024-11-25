//recurtion

#include<stdio.h>

int num(){
	
	int a;
	
	printf("Enter ur pass to see the result :");
	scanf("%d",&a);
	
	
	if(a == 0000){
		
		printf("Greate Job The Result 100%");
	}
	else{
		num();
	}
}



int main(){
	
	num();
	return 0;
}
