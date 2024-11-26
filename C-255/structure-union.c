#include<stdio.h>

union Mystruct{
	
	
	int num;
}s1,s2;


int main(){

		
	printf("enter the value in struct Member num :");	
	scanf("%d",&s1.num);
	
	
	
	printf("Ans is %d",s1.num);
	
	
	
	printf("\nenter the value in struct Member num :");	
	scanf("%d",&s2.num);
	
	
	
	printf("Ans is %d",s2.num);
	
	
	
	return 0;
}
