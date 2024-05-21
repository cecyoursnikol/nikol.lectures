#include<stdio.h>

void calll(){
	
	int n;
	printf("Enter any negative value :");
	scanf("%d",&n);
	
	
	if(n<0){
		
		printf("Nice u have mind\n");
		printf("Ur effort is %d",n);
	}
	else{
		
		printf("\n!!How rubbish follow my statment Its an order \n\n");
		calll();	
	}
	
}

int main()
{
	calll();
	return 0;
}
