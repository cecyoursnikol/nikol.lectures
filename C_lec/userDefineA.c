#include<stdio.h>
int main(){
	int ud[5];
	
	int i;
	
	printf("Enter the roll no. of First 5 students:");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&ud[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("\nThe %dst student roll no. is %d",i,ud[i]);
	}
}
