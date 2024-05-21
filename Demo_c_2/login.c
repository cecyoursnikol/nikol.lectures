#include<stdio.h>

int main(){
	
	int id = 1020;
	int pass = 123;
	
	int id_user , pass_user;
	printf("Enter ur Id :");
	scanf("%d",&id_user);
	
	printf("\nEnter ur Password :");
	scanf("%d",&pass_user);	
	
	if(id == id_user){
		if(pass == pass_user){
			
			printf("Login Correct");
		}
		else
		{
			printf("Incorrect Password");
		}
	}
	else
	{
		printf("Incorrect Id");
	}
	return 0;
}
