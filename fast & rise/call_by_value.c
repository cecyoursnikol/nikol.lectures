#include<stdio.h>

int salaryy(int salary){
	
	salary+=50000;
	printf("\nWe are thinking for ur increment if we incremnt u than ur salary is ");
	printf("%d\n\n",salary);
	return 0;
}

int main(){
	
	
	int salary;
	
	printf("Enter ur salary :");
	scanf("%d",&salary);
	
	salaryy(salary);
	
	printf("\nSorry u are rejected for increment ur actuall salary is %d",salary);
	
	return 0;
}
