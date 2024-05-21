#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter the value above 10 :");
	scanf("%d",&a);
	
	if(a>=10)
	{
		printf("Correct the value is %d",a);
	}
	
	else
	{
		printf("Uff enter the value again...");
	}
	
	return 0;
}
