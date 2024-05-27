#include<stdio.h>
int main(){
	int a;
	printf("Enter a value greater than 10");
	scanf("%d",&a);
	
	if(a>10){
		printf("------------------------------------------------------------------------------------------------------------------------");
		printf("                                            U entered right value......Well Entered!\n                                                          Ur value is %d",a);
	}
	else
	{
		printf("Sorry read it properly");
	}
	return 0;
}
