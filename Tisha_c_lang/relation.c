#include<stdio.h>

int main(){
	
	int file , no;
	
	printf("Enter the value in file :");
	
	scanf("%d",&file);
	
	printf("Enter the value in no. :");
	
	scanf("%d",&no);
	
	//equal to
	
	printf("The value in eqaul %d\n",file==no);	
	
	//not eqaul to
	
	printf("The value in not eqaul %d\n",file!=no);
	
	//greater than
	
	printf("The value in greater than %d\n",file>no);
	
	//less than
	
	printf("The value in less than %d",file<no);
	
	//greater than eqaul to
	
	printf("\nThe value in greater than equal to %d",file>=no);
	
	//less than eqaul to
	
	printf("\nThe value in less than equal to %d",file<=no);
	
	return 0;
}
