#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE  *p;
	
	char str[100];
	
	
	p = fopen("akhil2.txt","r");
	
	
	fgets(str,100,p);
	
	
	printf("%s",str);
	
	
	return 0;
}
