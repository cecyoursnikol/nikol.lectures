#include<stdio.h>

int increment(int incre){
	
	incre += 10000;
	
	printf("\nur incremented salary is %d\n",incre);
	
	return 0;
}


int main(){
	
	int salary;
	printf("Enter ur salary");
	scanf("%d",&salary);
	
	increment(salary);	
	printf("\nTotal Salary : %d",salary);
	
	return 0;
}
