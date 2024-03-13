// 1D array

#include<stdio.h>

int main()
{
	
	int a = 566 ,i;
	
	int arr[5] = {10,20,30,40,50};
//				  0 , 1, 2, 3, 4 
	int cat[] = {34,44,23,75,867};
	
	printf("%d\n",a);
	
	printf("THe array%d",arr[2]);
	printf("\nTHe array%d",arr[1]);
	
	
	printf("The new arrat Elemnt : %d\n",cat[2]);
	
	arr[1] = 00;
	
	for(i = 0;i<5;i++){
		
		printf("Element %d\n",arr[i]);
	}
	
	return 0;
}
