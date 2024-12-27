#include<stdio.h>
#include<stdlib.h>


int main(){
	
	FILE *p;
	
	char str[50];
	
//	p = fopen("akhil2.txt","w");
	
	
//	fprintf(p,"THis is Come from directly Dev C++");
	
	
	p = fopen("akhil2.txt","r");
	
	
	
	fgets(str,50,p);
	
	
	printf("%s",&str);
	
	
	
	
	fclose(p);
	
	
	return 0;
}
