#include<stdio.h>

int main(){
	
	FILE *p;
	
	p  = fopen("test.txt","r");
	
	char post[200];
		
//	fprintf(p,"This is added by god c");

	fgets(post,200,p);
	
	printf("%s",post);

	fclose(p);
	
	return 0;
}
