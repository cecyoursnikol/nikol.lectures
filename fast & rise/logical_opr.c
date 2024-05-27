#include<stdio.h>

int main()
{
	
	int a = 0, b = 0;
	
//	printf("Enter the values :");
//	scanf("%d %d",&a,&b);
	
	
	//logical and &&
	printf("Logical and : %d",a>10 && b<10);
	
	
	//logical or ||
	printf("\n\nLogical or : %d",a<100 || a<50);
	
	
	//logical not !
	printf("\n\nLogical not : %d",!(a==50));
	return 0;
}
