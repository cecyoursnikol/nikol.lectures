#include<stdio.h>

union myStr{
	
	int num;
	
}s1,s2;


int main(){
	
	s1.num = 89;
	
	s2.num = 849;
	
	printf("The value of num in s1 object is %i",s1.num);	
	
	printf("\nThe value of num in s2 object is %i",s2.num);	
	
	return 0;
}
