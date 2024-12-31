#include<stdio.h>
#include<stdlib.h>

int main(){
	
//	malloc
//	int *p;
//	int i,n;
//	p = (int*) malloc(3*sizeof(int));
//	
//	for(i = 0; i < 3; i++){
//		
//		printf("enter [%d] :",i);
//		scanf("%d",&p[i]);
//	}
//	
//	for(i = 0; i < 3; i++){
//		
//		printf("The value of  [%d] is:",i);
//		printf("%d\n",p[i]);
//	}

//calloc


	int *p;
	int i,n;
	
	printf("Enter the size :");
	scanf("%d",&n);
	p = (int*) calloc(n , sizeof(int));
	
	for(i = 0; i < n; i++){
		
		printf("enter [%d] :",i);
		scanf("%d",&p[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("The value of  [%d] is:",i);
		printf("%d\n",p[i]);

	}


//realloc
//	int *p;
//	int i;

	printf("Enter the size off new array :");
	scanf("%d",&n);
	p = (int*) realloc(p,n*sizeof(int));
	
	for(i = 0; i < n; i++){
		
		printf("enter new  [%d] :",i);
		scanf("%d",&p[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("The value of new [%d] is:",i);
		printf("%d\n",p[i]);
	}
	
//	free(p);
	
	return 0;
}
