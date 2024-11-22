#include<stdio.h>

int mainChoice,selectField;
int displayIntrest(){
	
		printf("-=:please select fields:=-");
		printf("\n1. medicine\n2. engering\n3. coading\n4. teaching\n5. historycal\n6. Exit\n");
	return 0;
}

	int mainMenu(){
		printf("\n-=:Wellcome to Ansh libreary:=-");
		printf("\n-:Please select one option:-");
		printf("\n1. View holding book\n2. Check the fields of book\n3. Return a book\n4. Exit");
	
		printf("\nEnter ur Choice :");
		scanf("%d",&mainChoice);


	}
	
	int fieldsOfIntrest(){
		printf("\n1. medicine\n2. engering\n3. coading\n4. teaching\n5. historycal\n.6 Exit");
		
		printf("\nEnter ur Choice :");
		scanf("%d",&selectField);
			
			
		
	}
	



int main(){
	
	int getInstrest,medicine_book,homeio_book;
	printf("Library\n");
	
	
	do{
		mainMenu();
		
		if(mainChoice == 1){
			printf("View holding book");
		}
		
		else if(mainChoice == 2){
			fieldsOfIntrest();
		}
		
		else if(mainChoice == 3){
			printf("Return a book");
		}
		
		else{
			printf("Happy Exit");
		}
			
	}while(mainChoice!= 4);
	
	
	
	
	return 0;
}
