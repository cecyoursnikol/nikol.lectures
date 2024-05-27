#include<stdio.h>
int main()
{
	int i = 10;
	
	i++;   //post incre
	++i;   //pre incre
	printf("The incremented value %d\n",i);
	i--;   // post dcre
	
	--i;   // pre decre
	printf("The decremented value %d",i);
	return 0;
}
