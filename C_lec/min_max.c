#include<stdio.h>
int main(){
	
	int a[100];
	int i,n;
	int max,min;
	
	
	 printf("enter the size of array :");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	
	 	printf("Enter the element (%d)",i);
	 	scanf("%d",&a[i]);
	 }
	 
//	 printng of array

		for(i=0;i<n;i++){
	 	
	 		printf("The element (%d) is %d\n",i,a[i]);
		}
		
		max = a[0];
		min = a[0];
		
		for(i=0;i<n;i++){
				 		
	 		if(a[i]>max)
			 {
				max = a[i];
		     }
		     
		    if(a[i]<min){
		    	min = a[i];
			}
		}	
		
	
		printf("The max value is %d\n",max);
		printf("the min value is %d",min);
	 
	 
	return 0;
}
