#include<stdio.h>
main(){
	
	int arr[5] = {10,20,30,40,50};
//				   0, 1, 2, 3, 4
	int i;
	
	
	arr[2] = 35;
	for(i = 0; i <5; i++){
		
		printf("%d \t",arr[i]);
	}
}
