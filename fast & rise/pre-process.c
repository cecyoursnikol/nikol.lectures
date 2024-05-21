#include<stdio.h>

#define num 3

//#undef num
int main(){
	#if num > 5
	printf("%d",num);
	
	#elif num < 2
	printf("NUmber ");
	
	#else
	printf("----------");
	
	#endif
	
	return 0;
}
