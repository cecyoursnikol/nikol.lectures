#include<stdio.h>

int main(){
	
	FILE *ptr;
	
	ptr = fopen("sakshi.txt","r");
	
	char str[100];
//	fprintf(ptr,"THis is new content..");

	fgets(str,100,ptr);
	
	printf("%s",str);
	
	
	fclose(ptr);	
	return 0;
}
