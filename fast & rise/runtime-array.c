#include<stdio.h>
main(){
	
	int arr[100];
//				   0, 1, 2, 3, 4
	int i, n;
	
	
	
//	arr[2] = 35;
	
	printf("Eneter the size of array :");
	scanf("%d",&n);
	
	for(i = 0; i <n; i++){
		printf("enter element :");
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i <n; i++){
		
		printf("%d \t",arr[i]);
	}
}
