#include<stdio.h>

int main(){
	
	FILE *ptr;
	char str[100];
	
	ptr = fopen("alok.txt","r");
	
	fgets(str,100,ptr);
	
	
	printf("%s",str);
	
	
	fclose(ptr);
	
	
	return 0;
}
