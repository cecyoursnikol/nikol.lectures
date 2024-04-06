#include<stdio.h>

#define num 10

#if num > 20

#undef num

#else 

#define num1 100

#endif

int main(){
	
	printf("%d",num);	
	printf("%d",num1);
	
	return 0;
}
