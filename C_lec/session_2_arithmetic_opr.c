#include<stdio.h>
int main()
{
	int a,b,c;

	//Arithmetic 
	
	printf("Enter the first value :-");
	scanf("%d",&a);
	printf("\nEnter the second value :-");
	scanf("%d",&b);
	c = a + b;   //condition
	 
	printf("\nThe result of addition is : %d",c);
	printf("\nThe result of sub is : %d",a-b);
	printf("\nThe result of mulis : %d",a*b);	
    printf("\nThe result of divide is : %d",a/b);	
    printf("\nThe result of Moduleis : %d",a%b);

	return 0;
}
