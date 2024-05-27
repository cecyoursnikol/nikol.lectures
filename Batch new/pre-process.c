#include<stdio.h>

#define num 99

//#undef num
int main(){
	
	#if num < 5
	printf("%d",num);
	
	#elif num == 100
	printf("U are foolish");
	
	#else
	printf("I don't care ");
	
	#endif
	
	return 0;
}
