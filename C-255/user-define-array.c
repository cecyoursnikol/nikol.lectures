#include<stdio.h>

int main(){
	
	int n,i;
	int arr[100];   //array declare
	
	
	printf("Select size of array :");
	scanf("%d",&n);
	
	
	
//	printf("%d",n);
	for(i = 0; i < n; i++){
		
		printf("Array[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("Array[%d] \n",arr[i]);
	}
	
	
	
	return 0;
}
