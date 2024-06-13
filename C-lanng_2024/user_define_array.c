#include<stdio.h>

int main(){
	
	int  i,n,arr[100];
	
	
	printf("Enter size of array :");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		
		printf("Enter [%d]  Element :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i < n; i++){
		printf("The [%d]  Element :",i);
		printf("%d\n",arr[i]);
	}	
}
