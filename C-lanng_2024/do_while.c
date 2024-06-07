#include<stdio.h>

int main(){
	
	int num,i = 1;
	
	printf("Enter any number  :");
	scanf("%d",&num);
	
	do{
		printf("%d",i);
		i++;
	}while(i<=num);

}
