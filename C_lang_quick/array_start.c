#include<stdio.h>

int main(){
	
	int arr[5];
//				  0 ,1, 2, 3, 4

	int i;	
	
//	printf("The value is %d",arr[4]);

	for(i = 0;  i < 5; i++){
		
		scanf("%d\n",&arr[i]);
	}


	for(i = 0;  i < 5; i++){
		
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
