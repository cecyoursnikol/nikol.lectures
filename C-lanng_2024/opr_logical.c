#include<stdio.h>

int main(){

    int num = 2200;

    printf("Logical and ans is %d",num > 50 && num < 200);

    printf("\nLogical Or ans is %d", num >  100 || num == 100);

    printf("\nLogical not ans is %d",!(num == 220));

    return 0;
}