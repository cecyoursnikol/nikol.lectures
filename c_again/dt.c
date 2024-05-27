#include<stdio.h>

int main(){
	
	int number; //whole values store
	
	float fl;  // floating point 
	
	double dumb;  //the big value 
	
	printf("Eneter the int value :");
	scanf("%i",&number);
	printf("Ur int value is %d",number);
	
	printf("\nEneter the float value :");
	scanf("%f",&fl);
	printf("Ur float value is %.2f",fl);
	
	printf("\nEneter the double value :");
	scanf("%lf",&dumb);
	printf("Ur double value is %lf",dumb);
	
	
	return 0;
}
