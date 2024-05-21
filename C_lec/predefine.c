#include<stdio.h>
#define a 333
#undef a
int main()
{
	printf("%d",a);
	
	return 0;
}
