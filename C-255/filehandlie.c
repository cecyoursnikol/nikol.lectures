#include<stdio.h>

int main(){
	
	FILE *p;
	char str[100];	
	
	//file open
   p = 	fopen("createNew.txt","r");
   
   
//   fprintf(p,"THis is Done BY The C LAng.");
   
   fgets(str,100,p);
   
   printf("%s",str);
   
   
   
   fclose(p);
	
	
	return 0;
}
