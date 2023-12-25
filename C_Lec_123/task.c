#include<stdio.h>
int main()
{
	int a;
	float f;
	char c;
	double d;
	
	printf("Enter the value of int :");
	scanf("%d",&a);
		printf("\nEnter the value of float :");
	scanf("%f",&f);
		printf("\nEnter the value of char :");
	scanf("%c",&c);
		printf("\nEnter the value of double :");
	scanf("%lf",&d);
	
	
	printf("\n\nUr int value is %d",a);
	printf("\nUr int value is %.1f",f);
	printf("\nUr int value is %c",c);
	printf("\nUr int value is %lf",d);
	return 0;
}
