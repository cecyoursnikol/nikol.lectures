#include<stdio.h>

//declaring Structure
union myStruct{
	int num;
	
}s1,s2;

int main(){

	scanf("%d",&s1.num);
	printf("%d\n",s1.num);	
	
	scanf("%d",&s2.num);
	printf("The Second Object %d",s2.num);	
	
	return 0;
}
