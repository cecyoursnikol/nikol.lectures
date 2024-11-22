#include <stdio.h>

float accountBalance = 1000;

void displayMenu() {
    printf("\nWelcome to my ATM !\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("\nEnter your choice: ");
}

void checkBalance() {
    printf("Your current balance is: $%.2f\n", accountBalance);
}

void deposit() {
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        accountBalance += amount;
        printf("$%.2f deposited successfully. Your new balance is: $%.2f\n", amount, accountBalance);
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0) {
        if (amount <= accountBalance) {
            accountBalance -= amount;
            printf("$%.2f withdrawn successfully. Your new balance is: $%.2f\n", amount, accountBalance);
        } else {
            printf("Insufficient funds. Your account balance is: $%.2f\n", accountBalance);
        }
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

int main() {
    int choice;
    int id;
    int password;
    
    printf("To access ur Account \n");
    
    printf("Enter ur id :");
    scanf("%d",&id);
    
    

	printf("Enter ur Password :");
	scanf("%d",&password);
	
	if(id == 29){
		
		if(password == 123){
			
			do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;	`
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using my ATM !\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);
			
		}
		
		printf("Password is incorrect");
	}
	
	printf("Username is incorrect");
    
    
    
    

    return 0;
}

