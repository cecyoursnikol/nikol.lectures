#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A :");
	scanf("%d",&a);
	printf("Enter the value of B :");
	scanf("%d",&b);
	
	(a>b) ? printf("A is larger") : printf("B is larger");
	
	return 0;
}
