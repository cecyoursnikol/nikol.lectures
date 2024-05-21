#include<stdio.h>


// With argument and without return 
void sum(int a,int b)
{
	printf("%d",a+b);
}

//without argument without return 

void divide()
{
	int i=2,j=4;
	
	printf("%d",i/j);
}

//with argument with return 

int returnSum(int a,int b)
{
	printf("%d",a+b);
	
	return 0;
}

//without argument with return 


int Without_args_returnSum()
{
	int i=2,j=4;
	printf("%d",i+j);
	
	return 0;
}
int main()
{
	int x , y;
//	
//	printf("Enter the values in x and y");
//	scanf("%d %d",&x,&y);
//	sum(x,y);

//returnSum(x,y);

//divide();
	
	Without_args_returnSum();
	return 0;
}
