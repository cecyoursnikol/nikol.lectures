#include <stdio.h>

int main() {
    int number, limit;
    
    printf("Enter the number whose table you want to print: ");
    scanf("%d", &number);
    printf("Enter the limit for the table: ");
    scanf("%d", &limit);
    
    int i = 1;
    printf("\n table of %d using switch statement:\n", number);
    while (i <= limit) {
        switch(number) {
            case 1:
                printf("1 x %d = %d\n", i, i);
                break;
            case 2:
                printf("2 x %d = %d\n", i, 2*i);
                break;
            case 3:
                printf("3 x %d = %d\n", i, 3*i);
                break;
            case 4:
                printf("4 x %d = %d\n", i, 4*i);
                break;
            case 5:
                printf("5 x %d = %d\n", i, 5*i);
                break;
            default:
                printf("Invalid number\n");
        }
        i++;
    }

    i = 1;
    printf("\n table of %d using if-else statement:\n", number);
    while (i <= limit) {
        if (number == 1) {
            printf("1 x %d = %d\n", i, i);
        } else if (number == 2) {
            printf("2 x %d = %d\n", i, 2*i);
        } else if (number == 3) {
            printf("3 x %d = %d\n", i, 3*i);
        } else if (number == 4) {
            printf("4 x %d = %d\n", i, 4*i);
        } else if (number == 5) {
            printf("5 x %d = %d\n", i, 5*i);
        } else {
            printf("Invalid number\n");
            break;
        }
        i++;
    }

    return 0;
}

