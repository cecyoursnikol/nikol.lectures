#include<stdio.h>
int main(){
	int a[100];
	int i , n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the [%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n\n");
	for(i=0;i<n;i++){
		
		printf("The index [%d] %d\n",i,a[i]);
	}
	
	return 0;
}
