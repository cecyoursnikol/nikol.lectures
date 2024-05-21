#include<stdio.h>

int main(){
	
	int arr[100];
	int i,n,sum = 0;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
//	printf("%d",n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("----------------\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
		
	for(i = 0; i < n;i++){
		
		sum = sum+arr[i];
	}
	
	
	printf("Total is %d",sum);
	return 0;
}
