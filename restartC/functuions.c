#include<stdio.h>

int ram(){
	
	
	printf("Jay shree Ram\n");
	return 0;
}


//args nd para

int data(int a){   //args

printf("The number is %d",a);
return 0;

}

int main(){
	
	int i;
	
	for(i = 0; i < 5; i++){
	
		ram();	
	}
	
	data(4);
	
	
	
	return 0;
}
