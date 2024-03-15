#include<stdio.h>
int main(){
	
	int arr[100];
	
	int n,i;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	
	for(i = 0; i < n; i++){
		
		scanf("%d",&arr[i]);
	}
	printf("-------------------------------");
	
	
	
	for(i = 0; i < n; i++){
		
		printf("\n%d",arr[i]);
	}
	return 0;
}
