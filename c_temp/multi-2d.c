#include<stdio.h>

int main(){
	
	int arr[2][3][4] = {{{1,2,3,4},{4,5,6,77},{7,8,9,77}},{{1,2,3,54},{4,5,6,76},{7,8,9,9}}};
	int i,j,k;

	
//	for(i = 0; i < 2;i++){
//		for(j = 0;j < 3;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}


	
	for(i = 0; i < 2;i++){
		for(j = 0;j < 3;j++){
			for(k = 0;k < 4;k++){
			printf("%d\t",arr[i][j][k]);
		}
		}
	}
	return 0;
}
