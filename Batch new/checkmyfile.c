#include<stdio.h>
#include"myheaderfile.h"


int main(){
	
	int x,y;
	
	printf("Enter two values :");
	scanf("%d %d",&x,&y);
	
	add(x,y);
	return 0;
}
