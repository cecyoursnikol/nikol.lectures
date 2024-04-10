#include<stdio.h>

int main(){
	
	FILE *p;
	
	p  = fopen("test.txt","a");
	
		
	fprintf(p,"\nThis is added by god c");
	fclose(p);
	
	return 0;
}
