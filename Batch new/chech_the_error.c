#include<stdio.h>

int main()
{
	char gender;
	
	scanf("%c",&gender);
	
	
	printf("The value u inserted is %c\n",gender);
	switch(gender){
		case 'm':{
			printf("Male");
			break;
		}
		
		case 'f':{
			printf("female");
			break;
		}
		default:{
			printf("No Gender");
			break;
		}
	}
	
	return 0;
}
