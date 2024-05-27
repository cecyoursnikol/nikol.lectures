#include<stdio.h>

int main(){
	
	int number , i;
	
	printf("Enter the number u want to print series :");
	scanf("%d",&number);
//	i = 88; 
	do{
		
		printf("%d\n",i);
		i++;
		
	}while(i<=number);
	
	
	
	return 0;
}
