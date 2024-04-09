#include<stdio.h>

union bike{
	
	int year;
	
	float size;
	
};

int main(){
	
	union bike s1,s2;	
	printf("Enter ur birth Year :");
	scanf("%d",&s1.year);
	
	printf("Enter ur friend's birth Year :");
	scanf("%d",&s2.year);
	
	printf("U are   product of this %d year",s1.year);
	printf("\nUr friend is  product of this %d year",s2.year);
	

	
	return 0;
}
