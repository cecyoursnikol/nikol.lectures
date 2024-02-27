#include<stdio.h>

int main()
{
	
	int arr[] = {100,200,300,400,500};
	//            0,  1,  2,  3,  4
	int i;
	
	arr[2] = 700;
	
	for(i = 0;i<5;i++){
		printf("%d\n",arr[i]);
	}	
	return 0;
}
