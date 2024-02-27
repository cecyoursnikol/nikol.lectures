#include<stdio.h>


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

int main()
{

	number();
	
	

	return 0;
}
