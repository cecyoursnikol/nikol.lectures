#include<stdio.h>

int main(){
	
	int num,i =1;
	
	printf("Enter any positive number :");
	scanf("%d",&num);
	
	do{
		
		printf("%d \n",i);
		i++;
		
	}while(i<=num);
	
	
	return 0;
}
