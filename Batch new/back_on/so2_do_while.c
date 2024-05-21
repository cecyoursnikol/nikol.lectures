#include<stdio.h>

int main(){
	
	int i ,n;
	
	printf("Enter the number u want to print series :");
	scanf("%d",&n);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
	
	return 0;
}
