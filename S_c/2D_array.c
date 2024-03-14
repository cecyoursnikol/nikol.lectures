#include<stdio.h>

int main()
{
	int arr[100][100];
	int i,j,n,m;
	
	
	printf("Enter the Row & column of Array :");
	scanf("%d %d",&n,&m);
	
	
	for(i=1;i<=n;i++){
		
		for(j=0;j<m;j++){
			printf("Enter Elements :");
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=1;i<=n;i++){
		
		for(j=0;j<m;j++){
			printf("Elements : %d\n",arr[i][j]);
		}
	}
	
	return 0;
}
