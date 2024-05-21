#include<stdio.h>
int main()
{
	int a , b ;
	printf("Enter the value of variable :");
	scanf("%d",&a);
	printf("\nEnetr the value of another variable :");
	scanf("%d",&b);
	a += b;  // a = a+b;
	printf("\nThe answer is - %d",a);	
	return 0;
}
