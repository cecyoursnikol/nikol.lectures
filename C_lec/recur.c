#include<stdio.h>


int main()
{

	number();
	
	

	return 0;
}
void number(){
	
	int num;
	printf("Enter the value above 10 :");
	scanf("%d",&num);
	if(num>10)
	{
		printf("Correct U entered %d",num);
	}
	else{
		number();
	}
	
}
