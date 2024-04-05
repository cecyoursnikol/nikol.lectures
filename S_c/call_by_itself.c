#include<stdio.h>

int NegNum(){
	
	
	int n;
	
	printf("Enter any negative no. :");
	scanf("%d",&n);
	
	
	if(n<0){
		
		printf("No. is Negative value is %d",n);
	}
	else{
		
		NegNum();
	}
	return 0;
}

int main(){
	
	
	NegNum();
	return 0;
}
