//User Define Array

#include<stdio.h>

int main(){
	
	int arr[100];
	
	
	int i , n;
	
	printf("Enter the Size of array :");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		
		printf("Enter Element[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	
	for(i = 0; i < n; i++){
		
		printf("The Element[%d] = %d\n",i,arr[i]);
	}
	
	return 0;
}
