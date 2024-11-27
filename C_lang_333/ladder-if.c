#include<stdio.h>

int main(){
	
	
	int age;
	
	printf("Enter ur Age :");
	scanf("%d",&age);
	
//	IF Block
	if(age>18)
	{
		printf("U are Above 18");	
	
	}
	
	else if(age >= 8){
		printf("U are Above 8");
	}
	
	else
	{
		printf("U are Below 18 && 8");
	}
	
	return 0;
}
