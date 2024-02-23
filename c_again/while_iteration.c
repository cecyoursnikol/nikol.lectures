#include<stdio.h>

int main(){
	
	int i;
	
	i = 1;
	
	printf("\n-----------------------While Loop");

	while(i<=5){
		printf("\n%i",i);
		i++;
	}
	
	
	printf("\n-----------------------do While Loop");
	i=1;
	do
	{
		printf("\n%i",i);
		i++;
	}while(i<=5);
	
	printf("\n-----------------------For Loop");
	i = 1;
	for(i=1;i<=5;i++)
	{
		printf("\n%i",i);
	}
	
	return 0;
}
