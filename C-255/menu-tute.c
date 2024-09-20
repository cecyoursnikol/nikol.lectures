#include<stdio.h>

int main(){
	
	int item,qua, pizz_item;
	
	printf("Welcome");
	printf("\nSelect ur Food :");
	
	printf("\n1. Pizza\n2. Burger\n3. Sandwich");
	scanf("%d",&item);
	
	if(item == 1){
		
		printf("1. Margireta\n2. chesse dump\n3. italian pizza");
		printf("\nWhich Pizza u want :");
		scanf("%d",&pizz_item);
		
		if(pizz_item == 1){
			
			printf("Selected Margirerta");
		printf("\nEnter ur qua :");
		scanf("%d",&qua);
		
		
		printf("Ur payable amount is %d",qua*100);
		}

		
		
	}
	else if(item == 2){
		
	}
	else if (item == 3){
		
	}
	else{
		
	}
	
	
	return 0;
}
