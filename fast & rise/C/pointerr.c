#include<stdio.h>

int main(){
	
	int num = 123;
	
	int* p = &num;
	
	printf("%d\n",num);
	printf("%p",p);
	
	return 0;
}
