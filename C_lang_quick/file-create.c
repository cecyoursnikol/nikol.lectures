#include<stdio.h>

int main(){
	
	FILE *ptr;
	
	
	//read var
	
	char str[200];
	ptr = fopen("kirti.txt","a");
	
	
	fprintf(ptr,"I am  from C Lxdgnhxdbhang.  I am new");
	
	ptr = fopen("kirti.txt","r");
	
	fgets(str,200,ptr);
	
	
	printf("%s",str);
	
	fclose(ptr);
	
	
	return 0;
}
